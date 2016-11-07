#include<iostream>
using namespace std;

class Solution {
public:

	int detectLoop[10000];
	bool hasLoop(int size)
	{
		for(int i=0;i<size-1;i++)
		{
			if (size==1) continue;
			if(detectLoop[i]==detectLoop[size-1]) 
				return true;
		}
		return false;
	}

    bool isHappy(int n) 
	{
		int digit = 0;
		int sum = 0;
		int size = 0;
		while(1)
		{
			while(n>0)
			{
				digit = n%10;
				sum = sum + digit*digit;
				n = n/10;
			}
			n = sum;
			detectLoop[size] = sum;
			size++;
			//cout<<sum<<endl;
			sum = 0;
			if (n==1) return true;
			if (hasLoop(size)) return false;
			
		}
		
    }
};

void main()
{
	Solution s;
	cout<<s.isHappy(100);

	system("pause");
}