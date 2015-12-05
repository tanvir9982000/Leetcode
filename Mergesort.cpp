#include<iostream>
using namespace std;

//Best O(nlogn)
//Average O(nlogn)
//Worst case O(nlogn)
//Space complexity Worst O(n) 
//for understanding how it works see: https://www.youtube.com/watch?v=EeQ8pwjQxTM

void Merge(int A[], int size, int low, int mid, int high)
{
	int i,k,l,m;
	int *temp = new int[size];

	l=low;
	i=low;
	m=mid+1;

	while((l<=mid) & (m<=high))
	{
		if(A[l]<A[m])
		{
			temp[i]=A[l];
			l++;
		}
		else
		{
			temp[i]=A[m];
			m++;
		}
		i++;
	}

	if(l>mid)
	{
		for(k=m;k<=high;k++)
		{
			temp[i]=A[k];
			i++;
		}
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=A[k];
			i++;
		}
	}

	for(k=low;k<=high;k++)
		A[k]=temp[k];
}

void Mergesort(int A[], int size, int low, int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		Mergesort(A,size, low, mid);
		Mergesort(A, size, mid+1, high);
		Merge(A, size, low, mid, high);
	}
}


void main()
{
	const int size = 8;
	int A[size] = {11,16,2,8,1,9,4,7};
	cout<<"Before sorting: ";
	for(int i=0; i<size; i++)
		cout<<A[i]<<" ";


	Mergesort(A,size,0,size-1);

	cout<<"\nAfter sorting : ";
	for(int i=0; i<size; i++)
		cout<<A[i]<<" ";

	system("pause");
}
