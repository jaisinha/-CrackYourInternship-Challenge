class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v;
        vector<int> v1;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back(i);
                    v1.push_back(j);
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            matrix[v[i]][j]=0;
        }
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            matrix[j][v1[i]]=0;
        }
        return;
    }
};
96% Acceptance
