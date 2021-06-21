#include <vector>
#include <algorithm>
#include "limits.h"

using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int max;
        int result;
        max = INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    //cout << abs(nums[i]+nums[j]+nums[k]-target)<<endl;
                    if (nums[i]+nums[j]+nums[k]==target){
                        return target;
                    }else{
                        if (abs(nums[i]+nums[j]+nums[k]-target)<max){
                            //cout<< i <<j << k <<endl;
                            max = abs(nums[i]+nums[j]+nums[k]-target);
                            result = nums[i]+nums[j]+nums[k];
                        }
                    } 

                }
            }
        }
        return result;
    }
};