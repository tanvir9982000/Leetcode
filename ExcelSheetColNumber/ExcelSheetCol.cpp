/*Given a column title as appear in an Excel sheet, return its corresponding column number.
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 

*/

#include<iostream>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) 
	{
		//(int)'A' = 65;
		int sum = 0;
		int size = s.length();
		for(int i=0;i<size;i++)
		{
			sum = sum + ((int)s[i]-64)*pow(26, size-i-1) ;
		}
		return sum;
    }
};


void main()
{
	Solution s;
	cout<<s.titleToNumber("Z")<<endl;
	cout<<s.titleToNumber("AZ")<<endl;
	cout<<s.titleToNumber("ZY")<<endl;
	cout<<s.titleToNumber("ZZ")<<endl;
	cout<<s.titleToNumber("AAA")<<endl;
	cout<<s.titleToNumber("ZZZ")<<endl;
	
	system("pause");
}