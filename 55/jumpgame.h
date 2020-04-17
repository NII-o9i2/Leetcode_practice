#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int flag[len];

        memset(flag,0,sizeof(flag));
        flag[0] = 1;
        int step;
        
        for (int i=0;i<len;i++)
        {
            if (flag[i]==1)
            {
                step = nums[i];
                for (int j = 0;j<=step;j++)
                {
                    if (i+j< len)flag[i+j] = 1;
                }
            }
        }
        if (flag[len-1] == true) 
            return true;
        else
            return false;
    }
};