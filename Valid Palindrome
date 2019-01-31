class Solution {
public:
    string toLowerAndStrip(string s)
    {
        string r="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z') 
                r += s[i] + 'a' - 'A';
            else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                r += s[i];
        }
        return r;
        
    }
    bool isPalindrome(string s) 
    {
        s = toLowerAndStrip(s);
        for (int i=0, j = s.size()-1; i < j ; i++,j--)
        {
            if(s[i]!=s[j]) return false;   
        }
        return true;
    }
};
