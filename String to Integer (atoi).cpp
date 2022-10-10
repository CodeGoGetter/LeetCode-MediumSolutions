class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int i=0;
        int res=0;
        
        while(i<s.size() && s[i]==' ')
            i++;
        if(i<s.size() && s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(i<s.size() && s[i]=='+')
            i++;
        
        while(i<s.size() && isdigit(s[i])){
            int digit = (s[i]-'0');
            if(res>INT_MAX/10 || (res==INT_MAX/10 && digit>INT_MAX%10))
            {
                if(sign==1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            res=res*10+digit;
            i++;
        }
        return sign*res;
    }
};
