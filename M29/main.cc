#include <vector>
#include <string>
#include <iostream>
#include "jumpgame.h"
using namespace std;
int main()
{
    vector<int> m1 = {1,2,3,4};
    vector<int> m2 = {5,6,7,8};
    vector<int> m3 = {9,10,11,12};
    vector<vector<int>> matrix = {m1,m2,m3};

    Solution  ss;
    vector<int>  out = ss.spiralOrder(matrix);
    for (int i=0;i<out.size();i++)
    {
        std::cout<<" out is "<< out[i]<<std::endl;
    }

}