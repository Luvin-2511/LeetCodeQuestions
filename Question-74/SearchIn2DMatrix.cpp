class Solution {
public:
    bool searchRowfn(vector<vector<int>>& mat, int tar, int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mat[row][mid]==tar){
                return true;
            }else if(mat[row][mid]>tar){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return false;

    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        int startRow = 0, endRow = m-1;
        while(startRow <= endRow){
            int midRow =startRow+ (endRow-startRow)/2;
            if(mat[midRow][0]<=target && target<=mat[midRow][n-1]){
                return searchRowfn(mat,target,midRow);
            }else if(target>=mat[midRow][n-1]){
                startRow=midRow+1;
            }else{
                endRow=midRow-1;
            }
        }
        return false;
    }
};