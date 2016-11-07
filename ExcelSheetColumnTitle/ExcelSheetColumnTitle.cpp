/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.
For example:
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/


#include<iostream>
#include<string>
using namespace std;

class Solution {
public:

	char charmap(int c, int i)
	{
		if (c!=0)
			c = c+64-i;
		else 
			c+=90;
		return c;
	}
    string convertToTitle(int n) 
	{
        char s[10000];
		string str="";
		int i = 0;
		int c;
		int carry = 0;
		while(n > 0)
		{
			c = n % 26;
			if (c == 0) 
				carry = 1;
			else 
				carry = 0;
			
			char mc= charmap(c,carry);
			n=n-c;
			n = n/26;
			s[i++]=mc;
			if (c == 0)
			{
				if (n==1) 
					break;
		
			}
		}
		
		s[i]='\0';
		int size = i;
		i=0;
		char rev[10000];
 		rev[size]='\0';
		for (int j = size-1; j>= 0; j--, i++)
		{
			rev[j]=s[i];
		}
		str=rev;
		return str;
    }
	int convertToTitle1(int int_n) 
	{
        int charSize = 0;
		int reminder = 0, sum = 0;
		float n = int_n; 
		while(n >= 1)
		{
			

			if ( ( (int)n + sum ) % 26 == 0)
			{
				charSize--;
				
			}
			sum = pow(26,charSize+1);
			reminder = (int)n%26;
			n = (float)n/26.0;
			
			charSize++;
		}

		return charSize;
    }
};


void main()
{
	Solution s;
	cout<<"1= "<<s.convertToTitle1(1)<<endl;
	cout<<"26= "<<s.convertToTitle1(26)<<endl;
	cout<<"27= "<<s.convertToTitle1(27)<<endl;
	cout<<"52= "<<s.convertToTitle1(52)<<endl;
	cout<<"53= "<<s.convertToTitle1(53)<<endl;
	cout<<"78= "<<s.convertToTitle1(78)<<endl;
	cout<<"ZZ 702= "<<s.convertToTitle1(702)<<endl;
	cout<<"AAA 703= "<<s.convertToTitle1(703)<<endl;

	system("pause");
}