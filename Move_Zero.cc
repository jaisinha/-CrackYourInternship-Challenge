class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i); // 
                count++;
                // nums.push_back(0);
                i-=1;
            }
        }
        while(count!=0){
            count--;
            nums.push_back(0);}
    }
};
