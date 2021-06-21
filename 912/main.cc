#include "sortArray.h"
#include <iostream>

using namespace std;
int main(){
    vector<int> in = {5,1,1,2,0,0};


    Solution ss;
    ss.sortArray(in);

    for(auto i=in.begin();i<in.end();i++){
        cout << *i <<endl;
    }
    

}