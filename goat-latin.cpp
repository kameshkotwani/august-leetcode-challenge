class Solution {
public:
 
    string toGoatLatin(string S) 
    {
      string ans="";
      stringstream ss(S);
      string word,suffix;
      unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
      while(ss>>word){
        suffix+='a';
          if(vowels.find(word[0])==vowels.end())
          {
            word=word.substr(1)+word[0];
           
          }
         ans+=word+"ma"+suffix+' ';
        
      }
      ans.pop_back();
      return ans;
    }
};
