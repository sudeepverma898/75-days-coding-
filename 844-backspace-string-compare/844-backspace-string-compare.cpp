class Solution {
public:
    int getnextvalidindex(string str, int p){
        int backspace=0;
        while(p>=0){
            if(str[p]=='#')
                backspace+=1;
            else if(backspace>0)
                backspace-=1;
            else
                break;
            p--;
        }
        return p;
    }
    bool backspaceCompare(string s, string t) {
        int ptr1=s.length()-1, ptr2=t.length()-1, vt1, vt2;
        while(ptr1>=0 || ptr2>=0){
            vt1=getnextvalidindex(s, ptr1);
            vt2=getnextvalidindex(t, ptr2);
            if(vt1<0 && vt2<0)
                return true;
            if(vt1<0 || vt2<0 )
                return false;
            if(s[vt1]!=t[vt2])
                return false;
            ptr1=vt1-1;
            ptr2=vt2-1;
        }
        return true;
    }
};