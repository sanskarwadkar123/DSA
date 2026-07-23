class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero_count=0 , one_count=0 , two_count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero_count++;
            }
            else if(nums[i]==1)
            {
                one_count++;
            }
            else
            {
                two_count++;
            }

        }
          int index = 0;

        for(int i = 0; i < zero_count; i++) {
            nums[index++] = 0;
        }

        for(int i = 0; i < one_count; i++) {
            nums[index++] = 1;
        }

        for(int i = 0; i < two_count; i++) {
            nums[index++] = 2;
        }
        
    }
};