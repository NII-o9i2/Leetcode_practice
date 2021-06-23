#include "letterCombinations.h"
#include <iostream>

using namespace std;
int main(){

    Solution ss;
    vector<string> out;
    string in = "123";

    out  = ss.letterCombinations(in);

    for(auto ii = out.begin();ii < out.end();ii++){
        cout << *ii << endl;
    }
    return 0;
}