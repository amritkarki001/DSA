//fibonacci using recursion
#include <stdio.h>

int fib(int);
void main()
{
	printf("%d",fib(6));
}
int fib(int N)
{
	if (N>2)
	{return fib(N-2)+fib(N-1);}
	else
	{
		return 1;
	}
}
