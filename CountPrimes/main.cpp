#include<math.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
		
		bool *A = new bool[n] ;
		
		for (int k=2; k<n; k++) 
			A[k]=true;
		
		for (int i=2;i<=sqrt(n);i++)
		{
			if (A[i]== true)
			{
				for (int j= i*i; j<=n; j+=i)
						A[j]=false;
			}
		}
		
		int count=0;
		for (int k=2; k<n; k++)
		{
			if(A[k]==true)	
			{
				//cout<<k<<" ";
				count++;
			}
		}

        return count;
    }
};

void main()
{
	Solution s;
	cout<<"\nTotal="<<s.countPrimes(100);
	system("pause");
}