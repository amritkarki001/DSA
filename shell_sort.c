#include <conio.h>
#include <stdio.h>

void shellsort(int A[50], int N)
{
	int gap,i,j,tmp;
	for (gap=N/2; gap>0;gap/=2)
	{
		for (j=gap; j<N; j++)
		{
			tmp=A[j];
			for(i=j; i>=gap && A[i-gap]>tmp; i=i-gap)
			{
				A[i]=A[i-gap];
			}
			A[i]=tmp;
		}
	}
}
void main()
{
	int A[50]={23,29,15,19,31,7,9,5,2};
	int i;
	shellsort(A,10);
	for(i=1;i<10;i++)
	{
		printf(" %d ",A[i]);
	}

}
