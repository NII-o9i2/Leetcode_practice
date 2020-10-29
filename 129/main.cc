#include <vector>
#include <string>
#include <iostream>
#include "sumNumbers.h"
using namespace std;
int main()
{

    vector<int> in1;
    vector<int> in2;
    double out;

    in1 = {3};
    in2 = {1,2,4,5};
    //in1 = {4};
    //in2 = {1,2,3,5,6}; 
    //in1 = {1,3};
    //in2 = {2}; 
    //in1 = {3,4};
    //in2 = {1,2,5};
    Solution  ss;
    out = ss.sumNumbers(in1,in2);
    cout<<" out is "<<out<<endl;
}

