#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    int maxArea1(vector<int>& height) {
        int len = height.size();
        int max = 0;
        int maxi = 0;
        int areaj = 0;
        for (int i= 0;i<len;i++)
        {
            maxi = 0;
            for(int j=0;j<i;j++)
            {
                if (height[j]>=height[i])   areaj = height[i] * (i-j);
                else areaj = height[j]*(i-j);
                if (areaj > maxi) maxi = areaj;
                
            }
            if (maxi >max) max = maxi;
        }
        return max;
    }

    int maxArea(vector<int>& height) {
        if(height.size() <= 1) return -1;
        int i = 0, j = height.size() - 1, res = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            res = max(res, h * (j - i));
            if(height[i] < height[j]) ++i;
            else --j;
        }
        return res;
    }
};