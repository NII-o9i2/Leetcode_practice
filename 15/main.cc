#include <vector>
#include <string>
#include <iostream>
#include "threeSum.h"
using namespace std;
int main()
{
    int  in_[6] = {-1,0,1,2,-1,-4};
    vector<int> in = {2,-3,0,-2,-5,-5,-4,1,2,-2,2,0,2,-4};
    vector<vector<int>> out;
    vector<int>::iterator iter = in.end();
    //cin >> in;
    Solution  ss;
    out = ss.threeSum(in);
    //cout<<" out is "<<out<<endl;
    return 0;
}

