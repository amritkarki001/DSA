#include <stdio.h>
#include <conio.h>

int main()
{
	int array[9]={9,6,5,0,8,2,7,1,3};
	int i, d, t, flag=0;
	int n=9;
	
	for(i=1;i<=n-1;i++)
	{
		t = array[i];
		for (d=i-1; d>=0; d--)
		{
			if (array[d]>t)
			{
				array[d+1]=array[d];
				flag=1;
			}
			else break;
		}
		if (flag==1)
		{
			array[d+1]=t;
		}
		}
		printf("\nSorted List in Ascending order:");
		for (i=0; i<=n-1; i++)
		{
			printf(" %d ",array[i]);
		}

return 0;
	
}
