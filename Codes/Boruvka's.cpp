#include <iostream>
#include <vector>
#include <algorithm>

struct Edge {
   int src, dest, weight;
};

struct Subset {
   int parent, rank;
};

int find(Subset subsets[], int i) {
   if (subsets[i].parent != i)
      subsets[i].parent = find(subsets, subsets[i].parent);
   return subsets[i].parent;
}

void unionSets(Subset subsets[], int x, int y) {
   int xroot = find(subsets, x);
   int yroot = find(subsets, y);
   if (subsets[xroot].rank < subsets[yroot].rank)
      subsets[xroot].parent = yroot;
   else if (subsets[xroot].rank > subsets[yroot].rank)
      subsets[yroot].parent = xroot;
   else {
      subsets[yroot].parent = xroot;
      subsets[xroot].rank++;
   }
}

void boruvkaMST(std::vector<Edge>& edges, int V) {
   std::vector<Edge> selectedEdges; // Stores the edges of the MST

   Subset* subsets = new Subset[V];
   int* cheapest = new int[V];

   for (int v = 0; v < V; v++) {
      subsets[v].parent = v;
      subsets[v].rank = 0;
      cheapest[v] = -1;
   }

   int numTrees = V;
   int MSTWeight = 0;

   while (numTrees > 1) {
      for (int i = 0; i < edges.size(); i++) {
         int set1 = find(subsets, edges[i].src);
         int set2 = find(subsets, edges[i].dest);

         if (set1 != set2) {
            if (cheapest[set1] == -1 || edges[cheapest[set1]].weight > edges[i].weight)
               cheapest[set1] = i;
            if (cheapest[set2] == -1 || edges[cheapest[set2]].weight > edges[i].weight)
               cheapest[set2] = i;
         }
      }

      for (int v = 0; v < V; v++) {
         if (cheapest[v] != -1) {
            int set1 = find(subsets, edges[cheapest[v]].src);
            int set2 = find(subsets, edges[cheapest[v]].dest);

            if (set1 != set2) {
               selectedEdges.push_back(edges[cheapest[v]]);
               MSTWeight += edges[cheapest[v]].weight;
               unionSets(subsets, set1, set2);
               numTrees--;
            }

            cheapest[v] = -1;
         }
      }
   }

   // Output the MST weight and edges
   std::cout << "Minimum Spanning Tree Weight: " << MSTWeight << std::endl;
   std::cout << "Selected Edges:" << std::endl;
   for (const auto& edge : selectedEdges) {
      std::cout << edge.src << " -- " << edge.dest << " \tWeight: " << edge.weight << std::endl;
   }

   delete[] subsets;
   delete[] cheapest;
}

int main() {
   int V = 6;
   int E = 9;
   std::vector<Edge> edges = {
      {0, 1, 4},
      {0, 2, 3},
      {1, 2, 1},
      {1, 3, 2},
      {1, 4, 3},
      {2, 3, 4},
      {3, 4, 2},
      {4, 5, 1},
      {2, 5, 5}
   };

   boruvkaMST(edges, V);

   return 0;
}
