#include <stdio.h>
#include <conio.h>

int BinarySearch(int L[], int k, int l, int r)
{
	int mid;
	if(l<=r)
	{
		mid=(l+r)/2;
		if(L[mid]>k)
		{
			BinarySearch(L,k,l,mid-1);
		}
		else if(L[mid]<k)
		{
		BinarySearch(L,k,mid+1,r);
		}
		else
		{printf("\nSearch Key Found");
		return 1;
		}		
	}
	printf("\nSearch Key Not found");
}

void main()
{
	int m[10]={2,4,5,8,9,10};
	BinarySearch(m,8,10,9);
	
}

