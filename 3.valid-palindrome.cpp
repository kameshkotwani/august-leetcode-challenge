
class Solution {
public:
    bool isPalindrome(string s) 
    {
      if(s.length()==0) return true;
      string check="",rev="";
        for(auto x :s)
        if((x>='A' && x<='Z') || (x>='a' && x<='z') || x>='0' && x<='9')
            check.push_back(x);
      if(check.length()<2) return true;
     transform(check.begin(),check.end(),check.begin(),::tolower); //convert string to lowercase
        rev=check;
        reverse(rev.begin(),rev.end());
        return check==rev;
     
    }
};
