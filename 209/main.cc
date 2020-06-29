#include <vector>
#include <string>
#include <iostream>
#include "minSub.h"
using namespace std;
int main()
{
    vector<int> m1 = {2,3,1,2,4,3};
    vector<int> m2 = {1,2,3,4,5};
    vector<int> m3 = {9,10,11,12};
    int s1 = 11;
    Solution  ss;
    int  out = ss.minSubArrayLen(s1,m1);

    std::cout<<" out is "<< out<<std::endl;


}