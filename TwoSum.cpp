class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int i,j;
        for(i=0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                if((nums[i] + nums[j]) == target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
            if(v.empty() == false)
                break;
        }
        return v;
    }
};
