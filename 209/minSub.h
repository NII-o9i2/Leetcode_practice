#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int i = 1;
        if (nums.size() == 0)
            return 0;
        while (i <= nums.size())
        {
            int sum = 0;
            int j = 0;
            while (j<nums.size())
            {
                if (j < i) 
                    sum += nums[j];
                else 
                {
                    sum += nums[j];
                    sum -= nums[j-i];
                }
                if (sum >= s)
                return i; 
                j++;
            }         
        i++;
        }
        return 0;
    }
};