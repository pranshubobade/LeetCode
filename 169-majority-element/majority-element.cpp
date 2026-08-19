//as the majority element always exists not writing the code to check if el == majority
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cntr = 0;
        int el;
        for(int i =0 ; i<nums.size(); i++){
            if(cntr == 0){
                cntr = 1;
                el=nums[i];
            }
            else if(nums[i]==el) cntr++;
            else cntr--;
        }
        return el;
    }
};