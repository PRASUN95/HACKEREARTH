class Solution {
    long mod=0;
      int search(int l,int n, string nums){
        
        long h=0;
        for(int i=0;i<l;i++){
            h=(h*26 + (nums[i] - 'a'))%mod;
        }
        
        set<long> set;
        set.insert(h);
        long aL = 1;
        for (int i = 1; i <= l; ++i) aL = (aL * 26) % mod;
        
        for(int i=1;i<n-l+1;i++){
            h=(long)(h*26-(nums[i-1]-'a')*aL%mod +mod)%mod;
            h= (h+(nums[i+l-1]-'a'))%mod;
            if(set.find(h) != set.end()) return i;
            set.insert(h);
        }
        
        return -1;
    }
public:
    string longestDupSubstring(string S) {
         mod=(long)1<<32;
        int n=S.length();
        
        int left=1, right=n;
        
        
        while(left<=right){
            int mid=left+ (right-left)/2;
            
            if(search(mid,n,S)!=-1) left=mid+1;
            else right=mid-1;
        }
        
        int start=search(left-1,n,S);
        return S.substr(start,left-1);
    }
};