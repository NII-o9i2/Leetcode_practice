#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq){
        vector<int> result;
        vector<int>::iterator iter = result.end();
        int level = 0;
        int level_ = 0;
        for(int i =0;i<seq.length();i++)
        {
            if (seq[i] == '(') 
            {   
                level_ = level;
                level ++;
            }
            else{
                level--;
                level_ = level;
            }
            if (level_% 2==0) 
                result.push_back(0);
            else
                result.push_back(1);
        }
        return result;
}
};