class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
      size_t n=A.size();
      if(n==0) return A;
      
      for(size_t i=0;i<n;i++)
      {
        for(size_t j=i+1;j<n;j++)
        {
          if(A[i]%2==1) swap(A[i],A[j]);
        }
      }
      return A;
    }
};
