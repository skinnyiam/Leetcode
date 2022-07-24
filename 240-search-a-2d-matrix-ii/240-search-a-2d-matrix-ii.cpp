class Solution {
public:
    // tle
//       bool binarySearch(vector<int> &v,int target){
//           int lo=0;
//           int high=v.size()-1;
//           while(lo<=high){
//               int mid=(lo+high)/2;
//               if(v[mid]==target){
//                   return true;
//               }else if(v[mid]>target){
//                   high--;
//               }else{
//                   lo++;
//               }
              
//           }
//           return false;
//       }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //tle
//         int m=matrix.size();
//         int n=matrix[0].size();
       
//         // for(auto it:matrix[0]){
//         //     cout<<it<<endl;
//         // }
//         for(int i=0;i<m;i++){
//             if(matrix[i][0]<=target){
//                 if(binarySearch(matrix[i],target)){
//                     return true;
//                 }
//             }
            
//         }
//         return false;
        
        
        //optimized
        
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};