class Solution {
public:
    int maxProduct(int n) {
        multiset<int> digits;
        int num=n;
        while(num>0)
        {
            int last=num%10;
            digits.insert(last);
            num=num/10;
        }

        int last=*prev(digits.end());
        int slast=*prev(digits.end(),2);
        int ans=last*slast;
        for(auto i : digits)
        {
            cout<<i;
        }
        return ans;
    }
};