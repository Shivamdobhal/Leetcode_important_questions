448. Find All Numbers Disappeared in an Array
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]

Example 2:
Input: nums = [1,1]
Output: [2]   
   
   code------
   vector<int> findDisappearedNumbers(vector<int>& nums) {
      unordered_set<int> set;
            vector<int> ans;
            for(int i=0;i<nums.size();i++)
            {
                    set.insert(nums[i]);
            }
            
               for(int i=1;i<= nums.size();i++)
            {
                 if(set.find(i)==set.end())
                 {
                         ans.push_back(i);
                 }
            }
            return ans;
            
    } 
