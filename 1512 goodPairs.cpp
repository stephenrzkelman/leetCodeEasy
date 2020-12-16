class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int pairs = 0;
        for(int i = 1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                pairs += (count)*(count-1)/2;
                count = 1;
            }
        }
        pairs += (count)*(count-1)/2;
        return pairs;
    }
};
