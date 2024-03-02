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
//main function
int main()
{
	int array[9]={9,6,5,0,8,2,7,1,3};
	int i;
	insertionsort(array,9);
	printf("\nSorted List in Ascending order:");
	for (i=0; i<=8; i++)
	{
		printf(" %d ",array[i]);
	}
	return 0;
}
//eo main function