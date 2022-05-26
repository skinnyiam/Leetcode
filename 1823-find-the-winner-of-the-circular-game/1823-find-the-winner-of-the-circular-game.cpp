class Solution {
public:
    
    void helper(int i,int k,vector<int> &ans,int &res){
        if(ans.size()==1){
            res= ans[0];
            return;
        }
        i=(i+k)%ans.size();
        ans.erase(ans.begin()+i);
        helper(i,k,ans,res);
    }
    
    int findTheWinner(int n, int k) {
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=i+1;
        }
        k--;
        int res;
       helper(0,k,ans,res);
        return res;
    }
};