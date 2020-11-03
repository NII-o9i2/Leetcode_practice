#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size()<3) return false;
        bool up;
        bool down;
        up = false;
        down = false;
        for(int i = 0;i<A.size();i++){
            if ((i>0)&& !down) {
                if (A[i]>A[i-1]) {
                    if (!up) up = true;
                    continue;
                }
                if (A[i]==A[i-1]) return false;
                if ((A[i]<A[i-1]) && (up))
                {
                    down=true;
                    continue;
                }
            }
            if ((i>0)&&down){
                if (A[i]>A[i-1]) return false;
                if (A[i]==A[i-1]) return false;
                if (A[i]<A[i-1]) continue;
            }
            if ((i>0)&&((!up)&&(!down))) return false;
        }
        if (down) return true;
        else return false;
    }
};