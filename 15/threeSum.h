#include <vector>
#include <set>
#include <utility>
#include <string>
#include <typeinfo>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> nums_(nums);
        vector<int> temp;
        sort(nums_.begin(),nums_.end());
        if (nums_.size() < 3){
            return res;
        }
        
        for(auto iter = nums_.begin();iter < nums_.end()-2;iter++){
            if ((iter != nums_.end()-3) && (*iter == *(iter+1))&&(*iter == *(iter+2))&&(*iter == *(iter+3))){
                nums_.erase(iter);
            }
        }

        for(auto iter = nums_.begin();iter < nums_.end()-1;++iter){
            if (*iter > 0) break;
            if ((iter > nums_.begin())&&(*iter==*(iter-1))) continue;
            if (iter == nums_.end()-1) break;
            auto left = iter+1;
            auto right = nums_.end()-1;
            while (left<right){
                if ((*left + *(left+1)+*iter)>0) break;
                if ((*right + *(right-1)+*iter)<0) break;
            while ((left<right)&& (*left + *right + *iter !=0))
            {
                if (*left + *right + *iter >0)   right--;
                    else if (*left + *right + *iter < 0)   left++;
                if (left == right) break;
                //cout <<"iter is"<<*iter<<"left is"<< *left<<"right is"<< *right<<endl;

            }
            temp.clear();
            if ((*left + *right + *iter ==0) && (left<right)){
                temp.emplace_back(*iter);
                temp.emplace_back(*left);
                temp.emplace_back(*right);
                //cout << *iter <<" "<< *left <<" "<< *right << endl;
                res.emplace_back(temp);
                if (left<nums_.end()-1){
                
                while ((*left == *(left+1))&&(left!=nums_.end()-1))
                {
                    left++;
                    if (left==nums_.end()-1) break;
                }
                }             
            }
            if (left<nums_.end()-1) left ++;
            //cout <<" ok"<< endl;
            }
        }
        
        return res;
    
    }
};