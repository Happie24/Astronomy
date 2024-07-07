# From Hashes to Hashtags: Algorithmic Adventures on Twitter

<dl>
<dt>Course Name</dt>
<dd>Algorithmic Problem Solving</dd>
<dt>Course Code</dt>
<dd>23ECSE309</dd>
<dt>Course Instructor</dt>
<dd>Prakash Hegade</dd>
<dt>University</dt>
<dd>KLE Technological University, Hubballi-31</dd>
</dl>

* * *

> Twitter is the best form of self-discipline that exists.
>
> by John Mayer

## Introduction
Twitter, a microblogging and informal communication administration, has reformed how we convey and collaborate on the web. With over 400 million dynamic clients, it has become a worldwide stage for continuous updates on news, legislative issues, diversion, and sports. Its effortlessness, convenience, and exceptional highlights like the 280-character limit, hashtags, and @mentions have made it an optimal stage for continuous correspondence and data scattering. Nonetheless, underneath its smooth point of interaction and compact tweets lies a perplexing embroidery of information designs and calculations that power its center functionalities. 

Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses will serve as our theoretical foundations and practical expertise as we investigate the complexities of Twitter's services. This portfolio project expects to propose answers for genuine difficulties looked by Twitter, from advancing tweet suggestion calculations for upgraded client commitment to smoothing out satisfied balance processes. By saddling the power of cutting edge algorithmic strategies and imaginative information structures, we'll show how smart algorithmic critical thinking can refine client encounters, drive mechanical development, and sustain Twitter's situation as a forerunner in the web-based entertainment scene. Go along with me in this investigation as we overcome any issues between hypothetical information and viable application, uncovering the significant effect of information designs and calculations on current computerized correspondence.

## Objectives
* Analyze the data structures and algorithms that power Twitter's core functionalities.
* Apply theoretical knowledge gained from Data Structures and Algorithms (DSA) and Algorithmic Problem Solving (APS) courses to real-world challenges faced by Twitter.
* Demonstrate the transformative power of algorithms within Twitter's ecosystem.

* * *

## Business Cases

### 1. **Tweets Analysis**

**Ford Fulkerson's Algorithm:** In Twitter's network infrastructure, the Ford Fulkerson's algorithm can be used for network/tweets analysis by augmenting path method. It helps in understanding public opinion by analyzing the sentiment of tweets about particular events or topics in real time.

**Challenges:** Solving the maximum flow problem for a directed graph (topology).

**Market Benefits:** Improved customer satisfaction, targeted marketing campaigns, and better crisis management.

**Algorithms and Design Techniques:**
- **Ford Fulkerson's:** Greedy approach, Augmenting Path method
  
[View Ford Fulkerson's code here](https://github.com/Happie24/Twitter/blob/master/Codes/Ford%20Fulkerson.cpp){:target="_blank"}<br>

* * *
### 2. **Detection of Trending Topic**

**Case:**
Utilizing effective data processing methods like DFS, Topological Sorting and Hashing to identify and track trending topics and hashtags over time. Traversing the graph of related tweets to identify trending hashtags.

**Challenges:** DFS: Finding the longest path in a tree (topology), discovering all the connected components in a graph, determining a cycle in a graph, finding a pattern in a grid, and locating a word in a crossword puzzle.
Topological sorting and Hashing: Effectively analyzing and counting hashtags in a large stream of tweets.

**Market Benefits:** Real-time trend identification, enhanced marketing strategies, and better engagement with trending content.

**Algorithms and Design Techniques:**
- **Topological sorting with hashing**
- **DFS**
  
[View Topological Sorting with hashing code here](https://github.com/Happie24/Twitter/blob/master/Codes/Topolocial%20sort%20and%20hashing.py){:target="_blank"}<br>
[View DFS code here](https://github.com/Happie24/Twitter/blob/master/Codes/DFS.c){:target="_blank"}<br>

* * *
### 3. **User Influencers Analysis**

**Dijkstra's Algorithm:** In Twitter's network infrastructure, the Dijkstra's algorithm can be used for locating influential users with a strong hold on network of followers that also aligns with the target audience. Understanding the connections, we can use shortest path to reach these influential users.

**Challenges:** Solving the problem of reaching a user with shortest path.

**Market Benefits:** Targeted influencer marketing, better ROI on promotional campaigns.

**Algorithms and Design Techniques:**
- **Dijkstra's Algorithm:** Greedy approach, shortest path problem
  
[View Dijkstra's Algorithm code here](https://github.com/Happie24/Twitter/blob/master/Codes/Dijkstra's%20algorithm.cpp){:target="_blank"}<br>

* * *
### 4. **Personalized Content Recommendation**

**Case:**
By analyzing the past likes, retweets,, followed accounts, the system can build a profile of user's interests. Collaborative filtering in dynamic approach can recommend content one would likely to engage with caring about to maximize your twitter experience.

**Challenges:** Solving the problem of accurately predicting and recommending personalized content to users based on their historical ratings and interaction data using collaborative filtering.

**Market Benefits:** Increased user engagement, higher retention rates, and improved ad targeting.

[View code here](https://github.com/Happie24/Twitter/blob/master/Codes/Collaborative%20filter.py){:target="_blank"}<br>

* * *
### 5. **Geospatial Tweets Analysis**

**Bellmann Ford Algorithm:** In the infrastructure of Twitter's network, the Bellmann Ford algorithm can be used for analysis of the tweets on the location based data to study regional trends  and events. this would allow us to know regional events, understand public opinions in a specific area.

**Challenges:** Solving the location based data analysis by finding shortest path.

**Market Benefits:** Targeted local advertising, better event planning, and improved regional insights.

**Algorithms and Design Techniques:**
- **Bellmann Ford Algorithm:** Dynamic approach, Shortest Path method
  
[View Bellmann Ford code here](https://github.com/Happie24/Twitter/blob/master/Codes/Bellmann%20ford's.cpp){:target="_blank"}<br>

* * *
### 6. **Analysis of Social Networks**

**Kruskal's and Prim's Algorithm:** In the infrastructure of Twitter's network, the Kruskal's algorithm and the Prim's algorithm can be used for analysis of who follows whom and how users interact. basically examining user interactions, identifying community clusters and relationships. Recommending new followers based on the the study. 

**Challenges:** Solving the commmunity clusters and relationships identification problem by computing minimal spanning tree.

**Market Benefits:** Enhanced community engagement, improved targeting of content, and better understanding of user interactions.

**Algorithms and Design Techniques:**
- **Kruskal's Algorithm:** Greedy approach, Minimal spanning tree 
- **Prim's Algorithm:** Greedy approach, Minimal spanning tree 
  
[View Kruskal's Algorithm code here](https://github.com/Happie24/Twitter/blob/master/Codes/Kruskal's.cpp){:target="_blank"}<br>
[View Prim's Algorithm code here](https://github.com/Happie24/Twitter/blob/master/Codes/Prim's.cpp){:target="_blank"}<br>

* * *
### 7. **Detection of Spams**

**Case:** Consider the infrastructure of Twitter's network, the spams and the bot-generated content can be filtered out by using a special data structure Trie, which can efficiently check for the prefixesof words. Words like "free", "winner", "clickbait" can be created in trie to quickly identify the spams allowing a more cleaner and enjoyable experience.

**Challenges:** Solving the Problem of bot-generated or spams by creating trie.

**Market Benefits:**  Improved user experience, enhanced security, and reduced spam on the platform.
  
[View Trie data structure sample code here](https://github.com/Happie24/Twitter/blob/master/Codes/Trie%20(insert%20and%20search).cpp){:target="_blank"}<br>

* * *
### 8. **Management during Crisis**

**Bellmann Ford Algorithm and BFS:**Considering the infrastructure of Twitter's network during calamities it is flooded with the real-time data, the Bellmann Ford algorithm and BFS can be used for analysis of the data we can map the information flow and understand the public responses. Using the mentioned algorithms, we can identify the most efficient paths to deliver aid based on reported needs and resource constraints.

**Challenges:** Solving the problem of separating reliable information from misinformation and emotional outbursts.

**Market Benefits:** Enhanced crisis response, better resource allocation, and improved public safety.

**Algorithms and Design Techniques:**
- **Bellmann Ford Algorithm:** Dynamic approach, Shortest Path method
- **BFS:** Greedy approach,Finding neighbouring location
  
[View Bellmann Ford code here](https://github.com/Happie24/Twitter/blob/master/Codes/Bellmann%20ford's.cpp){:target="_blank"}<br>
[View BFS code here](https://github.com/Happie24/Twitter/blob/master/Codes/BFS.cpp){:target="_blank"}<br>

* * *
### 9. **Event Detection**

**A Star Algorithm:** The sudden spikes in event and the sudden bursts of activity in tweets can be analyzed letting us know the nature of the event, its location related to some specific keywords or hashtags in the infrastructure of Twitter's network. For this we can use A* algorithm which is one of the most popular techinque used in path finding.

**Challenges:** Analyzing the sudden spikes in an event.

**Market Benefits:** Real-time event tracking, better news dissemination, and timely response to breaking events.

**Algorithms and Design Techniques:**
- **A Star Algorithm:** Heuristic-based approach
  
[View A* code here](https://github.com/Happie24/Twitter/blob/master/Codes/A%20star.cpp){:target="_blank"}<br>

* * *
### 10. **Optimal Tweet Routing**

**Dinic's Algorithm:** In the infrastructure of Twitter's network, to minimize the delays and the congestion we can opt for the dinic's algorithm so ast to choose least congested paths, avoiding bottlenecks and delays, ensuring the tweets reach swiftly and mininmizing the overall fustration.

**Challenges:** Solving the problem of delay and congestion for max flow.

**Market Benefits:** Improved tweet delivery speed, reduced network congestion, and enhanced overall user experience.

**Algorithms and Design Techniques:**
- **Dinic's Algorithm:** Greedy approach, Max flow method
  
[View Dinic's Algorithm code here](https://github.com/Happie24/Twitter/blob/master/Codes/Dinic's){:target="_blank"}<br>

* * *
### 11. **Efficient Storage of Data**

**Case:** In Twitter's network, the tweets are mix of text, hashtags, and media consisting of pictures, videos etc. This requires for a combination of storage solutions, considering the fact that not all tweets hold equal value. hence, strtergies like Red Black trees and Trie implementation can help in handling large volumes of tweet data letting also letting to archive the the older data and disgarding irrelevant information can optimize storage effiency.

**Challenges:** Efficient storage of data and optimize storage effiency.

**Market Benefits:** Reduced storage costs, improved data retrieval speeds, and better system performance.

**Algorithms and Design Techniques:**
- **Red Black Trees:** Self Balancing
- **Trie:** Ordered Data Structure
  
[View Trie data structure sample code here](https://github.com/Happie24/Twitter/blob/master/Codes/Trie%20(insert%20and%20search).cpp){:target="_blank"}<br>
[View Red Black Tree code here](https://github.com/Happie24/Twitter/blob/master/Codes/Red%20black.cpp){:target="_blank"}<br>


* * *
### 12. **Processing of Real-Time Data**

**Case:** Twitter is like a huge live feed, which is pulsing with the data all the time which makes it to have real-time daat processing. Segment trees are an effective data structure that are well-suited for Twitter's real-time data processing because they can effectively handle range queries and updates. Segment treees can be used to maintain query aggregated imformation, such as sentiment scores, user activity levels for a specfic time or content categories when it is applied to twitter data streams. 

**Challenges:** Solving the problem of efficiently handling updates and queries in a highly dynamic and large scale data stream environment of Twitter.

**Market Benefits:** Enhanced real-time analytics, better trend tracking, and improved decision-making.

**Algorithms and Design Techniques:**
- **Segemnt Tree:** Dynamic approach, Shortest Path method
  
[View Segment Trees code here](https://github.com/Happie24/Twitter/blob/master/Codes/Segment%20trees.cpp){:target="_blank"}<br>

* * *
### 13. **Search Autocomplete**

**Radix Trees:** To implement search autocomplete functionality, Radix Trees are highly effective data structures. They will store keys as a series of common prefixes, making quick lookups and compact storage possible. This traversal is extremely efficient even when dealing with large datasets. By compressing common prefixes, radix trees speed up the autocomplete process and use less memory by reducing redundant comparisons and storage.

**Challenges:** Solving the problem of implementing search autocomplete using radix trees which efficiently manages and updates the tree structure.

**Market Benefits:** Improves user experience by providing fast and relevant suggestions, increasing user satisfaction and engagement on the platform.

**Algorithms and Design Techniques:**
- **Radix Trees:** Compressed Tree
  
[View Radix Tree code here](https://github.com/Happie24/Twitter/blob/master/Codes/Radix%20tree.py){:target="_blank"}<br>

* * *
### 14. **Maximum Chain of Retweets**

**Jay Kadane's Algorithm:** In the infrastructure of Twitter's network, to find the maximum retweet chain by treating retweets as elements in an array where each element represents the influence or impact of a retweet we can use Jay Kadane's algorithm. Kadane's algorithm will determine the maxmimum cumulative imapct by traversing through the retweets.

**Challenges:** Solving the problem of computing maximum retweet chain dynamically using Kadane's algorithm.

**Market Benefits:** Enhanced understanding of tweet virality, enabling targeted marketing strategies and improved content amplification.

**Algorithms and Design Techniques:**
- **Jay Kadane's Algorithm:** Dynamic approach, Maximum subarray sum
  
[View Jay Kadane's 2D code here](https://github.com/Happie24/Twitter/blob/master/Codes/Kadane%202d.cpp){:target="_blank"}<br>

* * *
### 15. **Distribution of data efficiently**

**Bellmann Ford Algorithm:** In the infrastructure of Twitter's network, the distribution of data across multiple servers is essential to ensure workloads are balanced, latency is minimized and the server overloads are prevented. Karger’s algorithm, which is known for finding minimum cuts in a graph, can be adapted to optimize data distribution by modeling the network of servers and data chunks as a graph.

**Challenges:** Managing the complexity of adapting the algorithm for dynamic, real-time data distribution.

**Market Benefits:** Improved system performance, enhanced data access speeds, and greater reliability in distributed systems.

**Algorithms and Design Techniques:**
- **Karger's Algorithm:** Randomized approach, Minimum cut of the graph
  
[View Karger's code here](https://github.com/Happie24/Twitter/blob/master/Codes/Karger's){:target="_blank"}<br>

* * *
### 16. **Effective Notification System**

**Case:** In the infrastructure of Twitter's network, the users receive nod=tifications in high volume daily. Sorting of these notifications by time and priority can be done by Radix trees which will store and retrieve notifications based on the prefixes. This will ensure that users see the most relevant updates first leading to improve overall experience.

**Challenges:** Handling the continuous influx of notifications in real-time while maintaining the efficiency and accuracy of sorting and retrieval operations with the help of radix trees.

**Market Benefits:** Utilizing radix trees to manage the constant stream of notifications while preserving the effectiveness and accuracy of sorting and retrieval operations.

**Algorithms and Design Techniques:**
- **Radix Trees:** Compressed Tree
  
[View Radix Tree code here](https://github.com/Happie24/Twitter/blob/master/Codes/Radix%20tree.py){:target="_blank"}<br>

* * *
### 17. **Interactive User Heatmap**

**Case:** In the infrastructure of Twitter's network, creating a interactive user heatmap with the help of Breadth First Search which can be used to traverse the interaction of the twitter will help us to visualize  the intensity and spread of user interactions such as retweets, replies, mentions over a specific location or over specific topics.

**Challenges:** Solving the problem of efficiently handling the large volume of interactions on Twitter in real-time, so that the heatmap remains up-to-date and accurate as new interactions occur.

**Market Benefits:** Enhanced targeted marketing strategies by identifying high-engagement regions and influential users, leading to improved campaign effectiveness and customer reach.

**Algorithms and Design Techniques:**
- **BFS:** Greedy approach,Finding neighbouring location

  [View BFS code here](https://github.com/Happie24/Twitter/blob/master/Codes/BFS.cpp){:target="_blank"}<br>

* * *
### 18. **User Segmentation**

**Case:** User segmentation is the process of dividing a large user base into smaller, easier-to-manage groups or clusters based on particular behaviors like activity levels, engagement patterns, and preferences in the network infrastructure of Twitter. The use of Best First Search can be done to efficiently traverse a graph representing user behaviours, where nodes represent users and edges represent similarities in behaviours.

**Challenges:** Solving the problem of accurately segmenting users requires handling and analyzing complex and high-dimensional behavioral data.

**Market Benefits:** Improved Targeted Marketing, Enhanced Customer Experience.

**Algorithms and Design Techniques:**
- **Best First Search:** Heuristic-driven approach, Greedy Search
  
[View Best First Search code here](https://github.com/Happie24/Twitter/blob/master/Codes/Best%20First%20Search.cpp){:target="_blank"}<br>

* * *
### 19. **Retweet Cascade Prediction**

**Case:** Retweet overflow expectation plans to estimate how generally and quickly a tweet will be retweeted inside the Twitter's network infrastructure. It is possible to identify viral content, influential users, and the dissemination of information by comprehending retweet cascades. Hence, by using Skip Lists we can provide an efficient way of handling dynamic datasets with a multi-leveled list design.

**Challenges:** Solving the problem of scalability by handling massive volume of tweets and retweets in real-time significantly.

**Market Benefits:** Improved Marketing Strategies, Enhanced Crisis Management

**Algorithms and Design Techniques:**
- **Skip List:** Dynamic approach, Probabilistic data structure.
  
[View Skip Lists code here](https://github.com/Happie24/Twitter/blob/master/Codes/Skip%20list.cpp){:target="_blank"}<br>

* * *
### 20. **Enhancement of User Search**

**Case:** In the infrastructure of Twitter's network, implementing an effective user search system to quickly find users based on partial or misspelled name allows for the enhancement of user experience by providing accurate and fast search results. Trie (prefix tree) can be used to store all usernames in a way that allows for efficient retrieval of names based on partial inputs. also bonary search can be further used to to sort and quickly narrow down the list of results.

**Market Benefits:** Improved search functionality, better user experience, and enhanced user discovery.

**Algorithms and Design Techniques:**
- **Trie:** Ordered Data Structure
- **Binary Search:** Divide and Conquer

[View Trie data structure sample code here](https://github.com/Happie24/Twitter/blob/master/Codes/Trie%20(insert%20and%20search).cpp){:target="_blank"}<br>
[View Binary Search code here](https://github.com/Happie24/Twitter/blob/master/Codes/Binary%20Search.cpp){:target="_blank"}<br>

* * *
### 21. **Compressing Data Efficiently**

**Huffman Coding:** In the infrastructure of Twitter's network, with the growing data it faces problem in storing and managing of the vast amount of data. Use of Huffman Coding can help by assigning variable-length codes to input characters based on their frequencies, characters that will occur more frequently are assigned shorter codes, while less frequent characters receive longer codes resulting in significant compression ratios.

**Challenges:** Solving the problem of developing a real-time compression and decompression system that seamlessly integrates with Twitter's existing infrastructure while maintaining low latency and high reliability.

**Market Benefits:** Reduced storage costs, improved data retrieval speeds, and better system performance.

**Algorithms and Design Techniques:**
- **Huffman Coding:** Greedy approach, Lossless compression algorithm
  
[View Huffman coding here](https://github.com/Happie24/Twitter/blob/master/Codes/Huffman%20coding.cpp){:target="_blank"}<br>
