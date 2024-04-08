#include <stdio.h>

#define N 6

void dfs(int [][N], int);
void push(int);
int isempty();
int pop();
void initvisited(int [][N]);

int top = -1;
int visited[N];
int stackK[N];

void main() {
    int graph[N][N] = {{0,1,1,1,0,1},
                       {1,0,1,1,1,0},
                       {1,1,0,1,0,1},
                       {1,1,1,0,0,1},
                       {0,1,0,0,0,1},
                       {1,0,1,1,1,0}};
    initvisited(graph);
    visited[2] = 1;
    push(2);
    dfs(graph, 2);
}

void push(int K) {
    if (top == N-1) {
        printf("Stack is Full\n");
        return;
    }
    stackK[++top] = K;
}

int pop() {
    if (top == -1) {
        printf("\nStack Empty\n");
        return -1;
    }
    return stackK[top--];
}

void initvisited(int graph[][N]) {
    int i;
    for (i = 0; i < N; i++) {
        visited[i] = 0;
    }
}

int isempty() {
    return (top == -1) ? 1 : 0;
}

void dfs(int g[][N], int K) {
    int i;
    while (!isempty()) {
        int r = pop();
        printf("%d ", r);
        for (i = 0; i < N; i++) {
            if (!visited[i] && g[r][i]) {
                visited[i] = 1;
                push(i);
            }
        }
    }
}

