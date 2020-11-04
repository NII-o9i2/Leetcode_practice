#include <vector>
#include <string>
#include <iostream>
#include "insert.h"
using namespace std;
int main()
{
    //vector<int> s = {1,1,2,3,4,5};
    vector<vector<int>> in1;
    vector<int> in2;

    Solution  ss;
    int out = ss.insert(in1,INT_LEAST32_MIN);
    std::cout<<" out is "<<out<<std::endl;
    
}