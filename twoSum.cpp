/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      // create vector storing pairs
      vector< pair<int, int> > temp;
      for(int i = 0; i < nums.size(); i++)
      {
        pair<int, int> t(nums[i], i);
        temp.push_back(t);
      }

      // sort vector
      sort(temp.begin(), temp.end());

      // O(logn) solution
      int i = 0;
      int j = temp.size()-1;
      while(i < j)
      {
        // equal to target
        if(temp[i].first + temp[j].first == target)
        {
          // return the index
          vector<int> result {temp[i].second, temp[j].second};
          return result;
        }

        // greater than target
        else if(temp[i].first + temp[j].first > target)
        {
          j--;
        }

        // less than target
        else
        {
          i++;
        }
      }

      return nums;
    }
};
