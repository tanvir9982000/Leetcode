#include<iostream>
using namespace std;

//Best O(nlogn)
//Average O(nlogn)
//Worst case O(n^2)
//Space complexity Worst O(logn) 
//for understanding how it works see: https://www.youtube.com/watch?v=-7pzsM6gxgY

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int Partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p-1;
	for(int j=p; j<=r-1; j++)
	{
		if(A[j]<=x)
		{
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}
void QuickSort(int A[], int p, int r)
{
	int q;
	if(p<r)
	{
		q = Partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
	}
}

void main()
{
	const int size = 8;
	int A[size] = {11,16,2,8,1,9,4,7};
	cout<<"Before sorting: ";
	for(int i=0; i<size; i++)
		cout<<A[i]<<" ";


	QuickSort(A,0,size-1);

	cout<<"\nAfter sorting : ";
	for(int i=0; i<size; i++)
		cout<<A[i]<<" ";

	system("pause");
}
