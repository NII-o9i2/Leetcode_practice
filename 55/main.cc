#include <vector>
#include <string>
#include <iostream>
#include "jumpgame.h"
using namespace std;
int main()
{

    
    vector<int> s = {1,1,2,3,4,5};
   
  
    Solution  ss;
    int out = ss.canJump(s);
    std::cout<<" out is "<<out<<std::endl;

}