/*
Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.
*/

#include<iostream>
#include<Bits.h>
using namespace std;

typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;

class Solution {
public:
    int hammingWeight(uint32_t n) 
	{
		int count = 0;
		unsigned int mask = 1 << (sizeof(int)*8 - 1);
		
		for (int i=0;i<sizeof(int)*8 ;i++)
		{
			if ((n & mask) == 0)  
			{
				//cout<<'0';
			}
			else
			{
				//cout<<'1';
				count++;
			}
			mask >>=1;
		}
		return count;
    }
};


void main()
{
	Solution s;
	cout<<s.hammingWeight(15);

	system("pause");
}