class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag=0;
        int k;
        if(needle==""){
            return 0;
        }
        for(int i=0;i<haystack.length();i++)
        {
            if(needle[0]==haystack[i]){
                k=i;
                flag=1;
                for(int j=0;j<needle.length();j++){
                    if(needle[j]!=haystack[k+j]){
                        flag=0;
                        break;
                    }
                }
                if(flag==1){
                    return i;
                }
            }
        }
        return -1;
    }
};
