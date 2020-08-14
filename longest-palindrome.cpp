class Solution {
public:
    int longestPalindrome(string s) 
    {
      unordered_map<char,int> count;
      for(const auto& c:s)
        count[c]++;
      int ans=0;
        bool o_found=false;
      for(const auto& c:count)
      {
        if(c.second%2==0) ans+=c.second;
        else
        {
          o_found=true;
          ans+=c.second-1;
        }
      }
      if(o_found) ans+=1;
      return ans;
    }
};
