class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int m = nums1.size();
        int n = nums2.size();
        int k = (m+n)/2 + 1;
        int i=0, j=0;
        while(i<m || j<n){
            if(j>=n || (i<m && nums1[i] <= nums2[j])){
                v.push_back(nums1[i]);
                k--;
                i++;
            }
            else{
                v.push_back(nums2[j]);
                k--;
                j++;
            }
            if(k == 0){
                break;
            }
        }
        double median;
        if((m+n) %2 == 0){
            median = (v.back()+v[v.size()-2])/2.0000;
        }
        else{
            median = v.back();
        }
        return median;
    }
};