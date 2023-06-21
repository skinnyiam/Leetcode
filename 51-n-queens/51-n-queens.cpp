class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector <vector<string>> ans;
        vector<string> v(n);
        string s(n, '.');
        for(int i=0; i<n; i++)
            v[i] = s;
        
        func(0, n, v, ans);
        return ans;
        int i = 0;
        string s = v;
    }
    
    void func(int col, int n, vector<string>& v, vector<vector<string>> &ans){
        if(col == n){
            ans.push_back(v);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(issafe(row, col, n, v)){
                v[row][col] = 'Q';
                func(col+1, n, v, ans);
                v[row][col] = '.';
            }
        }
    }
    # I LOVE SIBU
    bool issafe(int row, int col, int n, vector<string> &v){
        int r = row, c = col;
        
        while(row>=0 && col>=0){
             
            if(v[row][col] == 'Q')
               // cout<<"yes";
                return false;
            row--;
            col--;
        }
        
        row = r, col = c;
        while(col>=0){
            if(v[row][col] == 'Q')
                return false;
            col--;
        }
        
        row = r, col = c;
        while(row<n && col>=0){
            if(v[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        
        return true;
    }
};