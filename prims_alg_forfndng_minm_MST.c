//WAP in c/c++ to 
//c implementation of prims algorithm for finding minimum spanning tree of weighted graph
//fmkv=find minimum key vertex

#include <stdio.h>
#include <conio.h>
#include <limits.h>
#define N 6

int visited[N];
int key[N];
int parent[N];

int fmkv();
void main()
{
	int graph[N][N]=
	{
		{0,4,0,0,8,0},
		{4,0,8,0,11,0},
		{0,8,0,2,0,4},
		{0,0,2,0,7,6},
		{8,11,0,7,0,1},
		{0,0,4,6,1,0}	
	};
	
	int i,cv,j,cost=0,k,minedgecost=INT_MAX;
	for (i=0;i<N;i++)
	{
		visited[i]=0;
		key[i]=INT_MAX;
		parent[i]=9;
	}
	//initial start vertex is 2, initialize the arrays accordingly.
	visited[2]=1;
	key[2]=0;
	parent[2]=-1;
	//end of initialization
	
	for (i=0;i<N-1;i++)
	{
		cv=fmkv();
		visited[cv]=1;
		minedgecost=INT_MAX;
		for (j=0;j<N;j++)
		{
			if(visited[j])
			{
				for (k=0;k<N;k++)
				{
					if(graph[j][k] && minedgecost > graph[j][k])
					{
						minedgecost=graph[j][k];
					}
				}
			}
		}
		cost+=minedgecost;
	}
	
}


