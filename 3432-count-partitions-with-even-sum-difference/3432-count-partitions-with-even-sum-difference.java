class Solution {
    public int countPartitions(int[] nums) {
        int sum = Arrays.stream(nums).sum();
        int p = 0;
        int leftSum = 0, rightSum;
        for(int i=1; i<nums.length; i++){
            leftSum += nums[i-1];
            rightSum = sum-leftSum;
            if((Math.abs(rightSum - leftSum))%2 == 0){p++;}
        }
        return p;
    }
}