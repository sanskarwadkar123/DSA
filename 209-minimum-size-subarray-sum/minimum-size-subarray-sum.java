class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;

        int sum = 0;
        int j = 0;
        int i = 0;

        int min = Integer.MAX_VALUE;
        while(i < n && j < n){
            if(sum < target){
                sum += nums[j++];
            }
            else{
                min = Math.min(min, (j - i));
                sum -= nums[i++];
            }
        }

        while(i < n){
            if(sum >= target){
                 min = Math.min(min, (j - i));
                 sum -= nums[i];
            }
            i++;
        }



        if(min == Integer.MAX_VALUE){
            return 0;
        }
        return min;
    }
}