class Solution {
public:
    //O{n^3}
    // bool is_palindrome(string s){
    //     string rev=s;
    //     reverse(s.begin(),s.end());
    //     return s==rev;
    // }
    
  public: int expandMiddle(string s,int left,int right){
       if(s=="" || left>right) return 0;
        
        while(left>=0 && right<s.length() && s.at(left)==s.at(right)){
            left--;
            right++;
        }
        return right-left-1;
    }
    
    string longestPalindrome(string s) {
       
        if(s.size()==0) return "";
        int start=0;
        int end=0;
        for(int i=0;i<s.length();i++){
            int len1=expandMiddle(s,i,i);
            int len2=expandMiddle(s,i,i+1);
            int len=max(len1,len2);
            if(len>end-start+1){
                start=i-((len-1)/2);
                end=i + (len/2);
            }
        }        
        return s.substr(start,end-start+1);
    }
     
};