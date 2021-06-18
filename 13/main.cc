#include <vector>
#include <string>
#include <iostream>
#include "romantoint.h"
using namespace std;
int main()
{
    int  in_[6] = {-1,0,1,2,-1,-4};
    string in = "III";


    Solution  ss;
    auto out = ss.romanToInt(in);
    cout<<" out is "<<out<<endl;
    return 0;
}

