#include <string>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        res = "";
        if (strs.size()==0) return res;
        int longestlen(0);
        cout<< strs.size()<<endl;


        while (1){

            for(int id=0;id<strs.size();id++){
                //until the shortest string
                //cout << " size is"<<strs[id].size() <<endl;
                if (longestlen>=strs[id].size()){
                    return strs[id].substr(0,longestlen);
                }
                if (strs[id].at(longestlen)!=strs[0].at(longestlen))
                {
                    return strs[id].substr(0,longestlen);
                }
            }

            longestlen++;
        }

    }
};