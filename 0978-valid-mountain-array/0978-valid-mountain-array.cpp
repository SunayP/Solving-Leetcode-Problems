class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3){return false;}
        int i = 0;
        while(i<n && arr[i] < arr[i+1]){
          if(arr[i] == arr[i+1]){
            return false;
          }   
          i++;
        }
        if(i == 0 || i == n-1){
            return false;
        }
        while(i<n-1 && arr[i] > arr[i+1]){
          if(arr[i] == arr[i+1]){
            return false;
          }   
          i++;
        }
        if(i < n-1){
            return false;
        }
        return true;
    }
};