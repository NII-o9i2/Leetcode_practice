#include <vector>
#include <string>
#include "maxDepthAfterSplit.h"
using namespace std;

vector<int> Solution::maxDepthAfterSplit(string seq){
        vector<int> result;
        vector<int>::iterator iter = result.end();
        for(int i =0;i<seq.length();i++)
            if (seq[i] == '(') 
                iter = result.insert(iter,1);
            else
                iter = result.insert(iter,1);
        return result;
    }
