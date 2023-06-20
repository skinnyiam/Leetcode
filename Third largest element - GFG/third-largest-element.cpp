//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int firstMaxi=INT_MIN;
         int secondMaxi=-1;
         int thirdMaxi=-1;
         for(int i=0;i<n;i++){
             if(a[i]>firstMaxi){
                 firstMaxi=a[i];
             }
         }
         for(int i=0;i<n;i++){
             if(a[i]>secondMaxi && a[i]!=firstMaxi){
                 secondMaxi=a[i];
             }
         }
         for(int i=0;i<n;i++){
             if(a[i]>thirdMaxi && (a[i]!=secondMaxi && a[i]!=firstMaxi)){
                 thirdMaxi=a[i];
             }
         }
         return thirdMaxi;
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends