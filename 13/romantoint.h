#include <string>

using namespace std;
class  Solution
{

public:
    int romanToInt(string s){
        int sum=0;

        for(int i = 0;i<s.size();i++){
            
            switch (s[i])
            {
            case 'I':
                if ((i<s.size()-1)&&((s[i+1]=='V') || (s[i+1]=='X')))
                sum = sum-1;
                else sum = sum+1;
                break;
            case 'V':
                sum = sum+5;
                break;
            case 'X':
                if ((i<s.size()-1)&&((s[i+1]=='L') || (s[i+1]=='C')))
                sum = sum-10;
                else sum = sum+10;
                break;
             case 'L':
                sum = sum+50;
                break;   
            case 'C':
                if ((i<s.size()-1)&&((s[i+1]=='D') || (s[i+1]=='M')))
                sum = sum-100;
                else sum = sum+100;
                break;
             case 'D':
                sum = sum+500;
                break;               
             case 'M':
                sum = sum+1000;
                break;            
            default:
                break;
            }

        }
        return sum;
    }
};