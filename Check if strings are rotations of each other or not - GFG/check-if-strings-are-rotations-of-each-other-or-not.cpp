// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    string check(string s,int d){
        string temp=s;
        reverse(temp.begin(),temp.begin()+d);
        reverse(temp.begin()+d,temp.end());
        reverse(temp.begin(),temp.end());
        return temp;
    }
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
       
        if(s1.length()!=s2.length()){
            return false;
        }
        for(int i=0;i<s2.length();i++){
            string res=check(s2,i);
            if(res==s1){
                return true;
            }
        }
        return false;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends