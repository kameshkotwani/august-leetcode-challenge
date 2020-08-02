class MyHashSet {
  int nbuckets;
  vector<vector<int>> buckets;
  int hash_function(int key)
  {
    return key%nbuckets;
  }
  
  public:
  
    /** Initialize your data structure here. */
    MyHashSet() {
        nbuckets=15000;
      buckets=vector<vector<int>>(nbuckets,vector<int>{});
    }
    
    void add(int key) {
        int i=hash_function(key);
      if(find(buckets[i].begin(),buckets[i].end(),key)==buckets[i].end())
        buckets[i].push_back(key);
    }
    
    void remove(int key) {
         int i=hash_function(key);
      auto it = find(buckets[i].begin(),buckets[i].end(),key);
      if(it!=buckets[i].end())
        buckets[i].erase(it);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
          int i=hash_function(key);
      if(find(buckets[i].begin(),buckets[i].end(),key)==buckets[i].end())
           return false;
    return true;
    }
};

