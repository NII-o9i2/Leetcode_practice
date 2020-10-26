#include<vector>
#include<map>
#include <utility>
#include <algorithm>
class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> new_series;
        std::map<int,int> answer;
        std::vector<int> out;
        new_series = nums;
        std::sort(new_series.begin(),new_series.end());
        for (int i= 0; i<new_series.size();i++)
        {
            if (i==0){
                answer.insert(std::pair<int,int>(new_series[i],0));
            }else{
                if (new_series[i]>new_series[i-1]){
                    answer.insert(std::pair<int,int>(new_series[i],i));
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            out.emplace_back(answer[nums[i]]);
        }
        new_series.clear();
        return out;
    }
};