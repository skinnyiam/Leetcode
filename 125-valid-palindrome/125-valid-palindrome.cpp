class Solution {
public:
    
    bool palindrome(string s){
    string rev=s;
    reverse(s.begin(),s.end());
    return rev==s;
}
    
    
    bool isPalindrome(string s) {
        if(s==" " || s.length()==1) return true;
        string word="";
        for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
            word+=tolower(s[i]);
        }
            
    }
        cout<<word;
        return palindrome(word);
    }
};