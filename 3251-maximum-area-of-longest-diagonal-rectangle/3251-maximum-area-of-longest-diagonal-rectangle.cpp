class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_diagonal = 0;
        double diagonal;
        int area = 0;
        for(int i=0; i<dimensions.size(); i++){
            diagonal = sqrt(dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1]);
            if(max_diagonal < diagonal){
                max_diagonal = diagonal;
                area = dimensions[i][0]*dimensions[i][1];
            }
            else if(max_diagonal == diagonal){
                area = max(area, dimensions[i][0]*dimensions[i][1]);
            }
        }
        return area;
    }
};