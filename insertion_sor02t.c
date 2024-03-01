void insertionsort(int A[],int N)
{
	int i,j,tmp,tmp1;
	for(i=1;i<N;i++){
		j=i;
		tmp=A[i];
		while(j>0 && tmp<A[j-1]){
		A[j]=A[j-1];
		j--;	
		}
		A[j]=tmp;
	}
}
void main()
int a[10];
int i;
{	printf("\nSorted List in Ascending order:");
		for (i=0; i<=N-1; i++)	{
			printf(" %d ",array[i]);
		}

return 0;
}
