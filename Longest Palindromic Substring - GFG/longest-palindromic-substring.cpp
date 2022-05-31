// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
int expandMiddle(string s,int left,int right){
       if(s=="" || left>right) return 0;
        
        while(left>=0 && right<s.length() && s.at(left)==s.at(right)){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string S){
        // code here 
        
         if(S.size()==0) return "";
        int start=0;
        int end=0;
        for(int i=0;i<S.length();i++){
            int len1=expandMiddle(S,i,i);
            int len2=expandMiddle(S,i,i+1);
            // cout<<"len1"<<":"<<len1<<":"<<"len2"<<":"<<len2<<endl;
            int len=max(len1,len2);
            // cout<<"len:"<<len<<endl;
            if(len>end-start+1){
                start=i-((len-1)/2);
                end=i + (len/2);
            }
            // cout<<"start"<<start<<":"<<"end"<<" "<<end<<endl;
        }        
        return S.substr(start,end-start+1);
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends