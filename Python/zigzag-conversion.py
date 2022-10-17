class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows==1:
            return s
        
        a=[]
        for i in range(min(len(s),numRows)):
            a.append("")
        
        dire=False
        row=0
        
        for i in s:
            a[row]+=i
            
            if row==0 or row==numRows-1:
                dire=not(dire)
            
            if(dire):
                row+=1
            else:
                row-=1
        
        fins=""
        for i in a:
            fins+=i
        return fins
                
