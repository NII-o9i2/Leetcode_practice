#include <vector>
#include <string>
#include <iostream>
#include "intersection.h"
using namespace std;
int main()
{


    vector<int> out;

    vector<int> in1;
    vector<int> in2;
    in1 = {9,5,3,6,2,23};
    in2 = {5,6,9,88,5};
    
    Solution  ss;
    out = ss.intersection(in1,in2);
    cout<< out.size()<<endl;
    for(int i = 0;i<out.size();i++)
        cout<<out[i]<<endl;
}

