import heapq
from collections import defaultdict, deque

class TrendingTopicDetector:
    def __init__(self):
        self.hashtag_count = defaultdict(int)
        self.graph = defaultdict(set)
        self.indegree = defaultdict(int)

    def add_tweet(self, hashtags):
        """
        Process a tweet with a list of hashtags.
        """
        # Update hashtag counts
        for hashtag in hashtags:
            self.hashtag_count[hashtag] += 1
        
        # Build the graph
        for i in range(len(hashtags)):
            for j in range(i + 1, len(hashtags)):
                if hashtags[j] not in self.graph[hashtags[i]]:
                    self.graph[hashtags[i]].add(hashtags[j])
                    self.indegree[hashtags[j]] += 1

    def get_trending_topics(self, k):
        """
        Get the top k trending topics.
        """
        # Topological sort
        zero_indegree = deque([node for node in self.hashtag_count if self.indegree[node] == 0])
        sorted_hashtags = []
        
        while zero_indegree:
            current = zero_indegree.popleft()
            sorted_hashtags.append(current)
            for neighbor in self.graph[current]:
                self.indegree[neighbor] -= 1
                if self.indegree[neighbor] == 0:
                    zero_indegree.append(neighbor)
        
        # Get top k trending hashtags using a min heap
        min_heap = []
        for hashtag in sorted_hashtags:
            heapq.heappush(min_heap, (self.hashtag_count[hashtag], hashtag))
            if len(min_heap) > k:
                heapq.heappop(min_heap)
        
        return [hashtag for count, hashtag in sorted(min_heap, reverse=True)]

# Example usage
detector = TrendingTopicDetector()

# Simulate adding tweets
detector.add_tweet(['#AI', '#ML', '#DataScience'])
detector.add_tweet(['#Python', '#AI', '#BigData'])
detector.add_tweet(['#AI', '#IoT', '#BigData'])
detector.add_tweet(['#Python', '#DataScience', '#IoT'])

# Get top 3 trending topics
trending_topics = detector.get_trending_topics(3)
print("Top 3 Trending Topics:", trending_topics)
