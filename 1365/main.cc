#include <vector>
#include <string>
#include <iostream>
#include "smallerNumbersThanCurrent.h"
using namespace std;
int main()
{

    vector<int> in= {8,1,2,2,3};
    vector<int> out;
    in = {8,1,2,2,3};
   
    Solution  ss;
    out = ss.smallerNumbersThanCurrent(in);
    for (int i=0;i<out.size();i++)
        std::cout<<i<<" out is "<<out[i]<<std::endl;

}
