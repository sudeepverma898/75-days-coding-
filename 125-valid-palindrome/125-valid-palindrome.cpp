class Solution {
public:
    bool isvalid(char chr)
    {
        if((chr>='A' && chr<='Z')||(chr>='a' && chr<='z')||(chr>='0' && chr<='9'))
            return 1;
        else
            return 0;
    }
    bool isPalindrome(string s) {
        int sizenew,c=0;
        string str="";
        int size=s.length();
        for(int i=0; i<size; i++)
        {
            if(isvalid(s[i]))
                str.push_back(s[i]);
        }
        sizenew=str.length();
        for(int i=0; i<sizenew; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                str[i]=str[i]-'A'+'a';
        }
        for(int i=0,j=sizenew-1; i<=j; i++,j--)
        {
            if(str[i]!=str[j])
            {
                c=1;
                break;
            }
        }
        if(c==0)
            return true;
        return false;
    }
};