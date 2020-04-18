#include <vector>
#include <string>
#include <iostream>
#include "maxArea.h"
using namespace std;
int main()
{
    vector<int> s = {1,8,6,2,5,4,8,3,7};
   
    Solution  ss;
    int out = ss.maxArea(s);
    std::cout<<" out is "<<out<<std::endl;
    
}