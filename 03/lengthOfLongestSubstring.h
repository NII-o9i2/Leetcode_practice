#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::set<char> iset;
        std::string sub_s;
        int max = 0;
        int out=0;
        for(int i = 0;i<s.length();i++){
            if (iset.count(s[i])==0){
                iset.insert(s[i]);
                max ++;
            }else {
                while (s[i-max]!=s[i]){
                    iset.erase(s[i-max]);
                    max --;
                }

            }
            if (max >out) out = max;
        }
        return out;
    }
};