

#include <stdio.h>
#include <conio.h>
int sumnatural(int N)
{
	if (N==0)
	{
		return N;
	}
	else 
	{
		return N+sumnatural(N-1);
	}
}

void main()
{
	int r=sumnatural(5);
	printf("%d\n",r);
}
