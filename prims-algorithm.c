#include <stdio.h>
#include <limits.h>

#define N 6

int visited[N];
int key[N];
int parent[N];

int fmkv() {
    int min = INT_MAX;
    int min_index;
  
    for (int v = 0; v < N; v++)
        if (visited[v] == 0 && key[v] < min)
            min = key[v], min_index = v;
  
    return min_index;
}

void main() {
    int graph[N][N] = {
        {0, 4, 0, 0, 8, 0},
        {4, 0, 8, 0, 11, 0},
        {0, 8, 0, 2, 0, 4},
        {0, 0, 2, 0, 7, 6},
        {8, 11, 0, 7, 0, 1},
        {0, 0, 4, 6, 1, 0}
    };
    
    int i, cv, j, k, minedgecost;
    for (i = 0; i < N; i++) {
        visited[i] = 0;
        key[i] = INT_MAX;
        parent[i] = 9;
    }
    
    // Start vertex is 2, initialize the arrays accordingly.
    visited[2] = 1;
    key[2] = 0;
    parent[2] = -1;
  
    // End of initialization
    for (i = 0; i < N - 1; i++) {
        cv = fmkv();
        visited[cv] = 1;
        minedgecost = INT_MAX;
        for (j = 0; j < N; j++) {
            if (visited[j]) {
                for (k = 0; k < N; k++) {
                    if (!visited[k] && graph[j][k] && minedgecost > graph[j][k]) {
                        minedgecost = graph[j][k];
                        key[k] = minedgecost;
                        parent[k] = j;
                    }
                }
            }
        }
    }
  
    // Print the constructed MST
    printf("Edge \tWeight\n");
    for (i = 1; i < N; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}

