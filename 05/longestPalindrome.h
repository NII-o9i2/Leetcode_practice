#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int len;
        bool flag = false;
        bool Palinderome;
        string out;
        len = s.length();
        while (!flag){
            for(int i = 0;i <=s.length()-len;i++){
                Palinderome = true;
                for(int j = 0;j<=int(len/2);j++){
                    if (s[i+j] != s[i+len-1-j]){
                        Palinderome = false;
                        break;
                    }
                }
                if (Palinderome)
                {
                    return s.substr(i,len);
                }
            }
            len--;
        }
        string empty="";
        return empty;

    }
};