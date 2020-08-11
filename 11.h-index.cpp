class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
       sort(citations.begin(),citations.end());
        int low = 0;
        int high = citations.size()-1;
        int mid,size=citations.size();  
        while(low<=high)
        {
          mid = low + (high-low)/2;
          if(size-mid==citations[mid])
            return size-mid;
          else if(size-mid<citations[mid])
            high=mid-1;
          else
            low=mid+1;
        }
      return size-low;
    }
};
