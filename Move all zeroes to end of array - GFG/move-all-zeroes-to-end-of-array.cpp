//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    //brute force 
	    vector<int> NZ;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            NZ.push_back(arr[i]);
	        }
	    }
	   // for(auto it:NZ){
	   //     cout<<it<<" ";
	   // }
	    vector<int> Z;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            Z.push_back(arr[i]);
	        }
	    }
	   // for(auto it:Z){
	   //     cout<<it<<" ";
	   // }
	    int nz=NZ.size();
	    int j=0;
	    
	    for(int i=0;i<nz;i++){
	        arr[i]=NZ[j];
	        j++;
	    }
	    int k=0;
	    for(int i=nz;i<n;i++){
	        arr[i]=Z[k];
	        k++;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends