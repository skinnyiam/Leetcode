class Solution {
public:
    
    int first(vector<int>& nums,int target){
        int firstpos=-1;
        int n=nums.size();
        int low=0;
        int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    firstpos=mid;
                    high=mid-1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        return firstpos;
        }
    
    
      int second(vector<int>& nums,int target){
          int secondpos=-1;
        int n=nums.size();
        int low=0;
        int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    secondpos=mid;
                    low=mid+1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
          return secondpos;
        }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
      int firstpos= first(nums,target);
      int secondpos= second(nums,target);
        
        return {firstpos,secondpos};
      
        
        
        
       
    }
};