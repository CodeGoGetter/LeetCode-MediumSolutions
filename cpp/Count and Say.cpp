class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        while(--n){
            string cur="";
            for(int i=0;i<res.size();i++){
                int count=1;
                while((i+1)<res.size()&&res[i+1]==res[i])
                {
                    count++;
                    i++;
                }
                cur+=to_string(count)+res[i];
            }
            res=cur;
        }
        return res;
    }
};
