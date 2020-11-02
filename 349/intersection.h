#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        for(auto i= nums1.begin();i!=nums1.end();i++){
            if (count(out.begin(),out.end(),*i)>0) continue;
            for(auto j= nums2.begin();j!=nums2.end();j++){
                if (*i==*j) {
                    out.emplace_back(*i);
                    break;
                }
            }
        }
        return out;
    }
};