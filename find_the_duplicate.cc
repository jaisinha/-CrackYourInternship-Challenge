class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int nums1[nums.size()];
        for(int i=0;i<nums.size();i++)
            nums1[i]=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(nums1[nums[i]]>0)
                nums1[nums[i]]=-nums1[nums[i]];
            else
                return nums[i];
        }
        return -1;
    }
};
//60% Acceptance
