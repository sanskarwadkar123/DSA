class Solution {
public:
    int commonFactors(int a, int b) {
        int max_num=max(a,b);
        int count=0;
        for(int i=1;i<=max_num;i++)
        {
            if(a%i==0 && b% i==0)
            {
                count++;
            }
        }
        return count;
        
    }
};