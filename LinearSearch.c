//write a program in c that do linear cearch

#include <stdio.h>
#include <conio.h>

int LinearSearch(int l[],int k,int N)
{
	int i;
	
	for(i=0;i<N; i++)
	{
		if(l[i]==k)
		{
			printf("The Number %d is Found ",k);
			return 1;
		}
	}
	printf("\n Number %d is Not Found",k);
	return 0;
}

void main()
{
	int l[20]={2,4,5,8,9,10};
	LinearSearch(l,15,20);
	getch();
	
}

//algorithms:
