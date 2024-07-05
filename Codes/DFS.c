#include <stdio.h>
#include <stdlib.h>

int vis[100];
struct Graph
{
    int V;
    int E;
    int** Adj;
};
struct Graph* adjMatrix()
{
    struct Graph* G = (struct Graph*)
        malloc(sizeof(struct Graph));
    if (!G) {
        printf("Memory Error\n");
        return NULL;
    }
    G->V = 6;
    G->E = 5;

    G->Adj = (int**)malloc((G->V) * sizeof(int*));
    for (int k = 0; k < G->V; k++) {
        G->Adj[k] = (int*)malloc((G->V) * sizeof(int));
    }

    for (int u = 0; u < G->V; u++) {
        for (int v = 0; v < G->V; v++) {
            G->Adj[u][v] = 0;
        }
    }
    G->Adj[0][1] = G->Adj[1][0] = 1;
    G->Adj[2][3] = G->Adj[3][2] = 1;
    G->Adj[1][4] = G->Adj[4][1] = 1;
    G->Adj[2][4] = G->Adj[4][2] = 1;
    G->Adj[4][5] = G->Adj[5][4] = 1;


    return G;
}

// DFS function to print DFS traversal of graph
void DFS(struct Graph* G, int u)
{
    vis[u] = 1;
    printf("%d ", u);
    for (int v = 0; v < G->V; v++) {
        if (!vis[v] && G->Adj[u][v]) {
            DFS(G, v);
        }
    }
}

// Function for DFS traversal
void DFStraversal(struct Graph* G)
{
    for (int i = 0; i < 100; i++) {
        vis[i] = 0;
    }
    for (int i = 0; i < G->V; i++) {
        if (!vis[i]) {
            DFS(G, i);
        }
    }
}
void main()
{
    struct Graph* G;
    G = adjMatrix();
    DFStraversal(G);
}
