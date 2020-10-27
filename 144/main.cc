#include <vector>
#include <string>
#include <iostream>
#include "preorderTraversal.h"
using namespace std;
int main()
{
    vector<int> m1 = {1,null,2,3};

    int s1 = 11;
    Solution  ss;
    int  out = ss.preorderTraversal(s1,m1);

    std::cout<<" out is "<< out<<std::endl;


}