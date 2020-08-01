class Solution {
public:
    bool detectCapitalUse(string word) 
    {
      int c=0;
      for(auto x:word)
        if(isupper(x)) c++;
      return c==word.length() ||c==0 || c==1 && isupper(word[0]);
    }
};
