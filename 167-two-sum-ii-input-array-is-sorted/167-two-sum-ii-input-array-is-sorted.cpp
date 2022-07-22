class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size();
        int j=n-1;
        while(i<=j){
            if(numbers[i]+numbers[j]==target){
                return {i+1,j+1};
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }else{
                i++;
            }
        }
        return {-1,-1};
        
        
        // bakwas solution
        // vector<int> vec;
        //   for(int i=0;i<numbers.size();i++){
        //     for(int j=i+1;j<numbers.size();j++){
        //      if(numbers[i]+numbers[j]==target){
        //           vec.push_back(i+1);
        //         vec.push_back(j+1);
        //          break;
        //           }
        //         }
        //     }
        // return vec;
    }
};