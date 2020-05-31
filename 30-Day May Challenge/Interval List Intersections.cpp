class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> ans;
        int aPtr=0,bPtr=0;
        int sizeA = A.size();
        int sizeB = B.size();
        vector<int> temp(2); 
        while(aPtr<sizeA && bPtr<sizeB)
        {
            if(B[bPtr][0]<=A[aPtr][1] && A[aPtr][0]<=B[bPtr][1])
            {
                temp[0] = max(A[aPtr][0],B[bPtr][0]);
                temp[1] = min(A[aPtr][1],B[bPtr][1]);
                ans.push_back(temp);
            }
            if(A[aPtr][1]>B[bPtr][1])
                bPtr+=1;
            else
                aPtr+=1;
        }
        return ans;
    }
};