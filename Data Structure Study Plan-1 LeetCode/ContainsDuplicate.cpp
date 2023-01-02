## 217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>countCnt;
        for(int i =0; i<nums.size();i++){
            if(countCnt[nums[i]]){
                return true;
            }
            countCnt[nums[i]]++;
        }
        return false;
    }
};
