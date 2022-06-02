// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here 
        vector<int> ans;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans.push_back(matrix[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        // for(auto it:ans){
        //     cout<<it<<" ";
        // }
        if(ans.size()%2!=0){
            return ans[(ans.size())/2];
        }else if(ans.size()%2==0){
            int media=ans[ans.size()/2]+ans[(ans.size()/2)+1];
            return media/2;
        }
        return 0;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends