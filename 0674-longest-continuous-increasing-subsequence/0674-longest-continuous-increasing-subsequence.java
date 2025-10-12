class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int maxSize = Integer.MIN_VALUE;
        int currentSize = 1;
        for(int i=0; i<nums.length-1; i++){
            if(nums[i] < nums[i+1]){
                currentSize += 1;
            }
            else{
                currentSize = 1;
            }
            maxSize = Math.max(maxSize, currentSize);
        }
        maxSize = Math.max(maxSize, currentSize);
        return maxSize;
    }
}