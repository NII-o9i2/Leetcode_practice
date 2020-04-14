#include <vector>
#include <string>
#include <iostream>
#include "maxDepthAfterSplit.h"
using namespace std;
int main()
{
    std::string s;

    std::cin>>s;
    
    vector<int> out;
   
    std::cout<<"s is "<<s<<std::endl;
   
    Solution  ss;
    out = ss.maxDepthAfterSplit(s);
    for (int i=0;i<out.size();i++)
        std::cout<<i<<" out is "<<out[i]<<std::endl;

}