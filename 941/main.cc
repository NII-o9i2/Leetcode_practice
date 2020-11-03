#include <vector>
#include <string>
#include <iostream>
#include "validMountainArray.h"
using namespace std;
int main()
{

    vector<int> in1;
    vector<int> in2;
    double out;

    in1 = {1,2,4,5,3};

    Solution  ss;
    out = ss.validMountainArray(in1);
    cout<<" out is "<<out<<endl;
}

