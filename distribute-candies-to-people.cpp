class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
      int index=0;
      int candies_count=1;
      while(candies){
        ans[index++]+=candies_count;
        candies-=candies_count++;
        if(index == num_people) index = 0;
        if(candies_count>candies) candies_count=candies;
      }
      
      return ans;
    }
};
