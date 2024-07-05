#include<stdio.h>
#define INFINITY 999
#define MAX 100

void Floyd_warshall(int g[MAX][MAX],int v)
{
    int i,j,k;
    for(k=0;k<v;k++)
    {
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                if(g[i][k]+g[k][j]<g[i][j])
                    g[i][j]=g[i][k]+g[k][j];
                if(i==j)
                    g[i][j]=0;
            }
        }
    }

    printf("\nAll pair shortest matrix is :: \n");
     for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            printf("    %d",g[i][j]);
        printf("\n");
    }

}

int main()
{
    int g[MAX][MAX];
    int i,j;int v,v1,v2,w,e;
    printf("Enter the no. of vertices and edges\n");
    scanf("%d%d",&v,&e);
    for(i=0;i<e;i++)
    {
        printf("Enter the end vertices for edge %d and its weight\n",i+1);
        scanf("%d%d%d",&v1,&v2,&w);
        g[v1][v2]=w;

    }

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            if(g[i][j]==0)
               g[i][j]=INFINITY;
    }

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
            printf("     %d",g[i][j]);
        printf("\n");
    }

    Floyd_warshall(g,v);
}
