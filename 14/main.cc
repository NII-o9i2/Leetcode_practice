#include "longestCommonPrefix.h"
#include <iostream>

using namespace std;
int main(){
    vector<string> in;
    in = {"flower","fl","flight"};
    Solution ss;
    auto out = ss.longestCommonPrefix(in);


    cout<< out <<endl;
    return 0;
}