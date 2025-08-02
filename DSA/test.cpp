#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int graph[MAX][MAX], visited[MAX];
int n, m;

void dfs(int node) {
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < n; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int i, j, u, v;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter the edges (u v):\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;  // Undirected graph
    }

    int start;
    printf("Enter the start node: ");
    scanf("%d", &start);

    printf("DFS traversal starting from node %d: ", start);
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }
    dfs(start);
    return 0;
}
