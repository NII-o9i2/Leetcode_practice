#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,vector<char>> dict;
        vector<string> res;
        vector<string> temp;
        vector<char> a{'a','b','c'};
        dict.insert(pair<char,vector<char>>('2',a));
        a.clear();
        a={'d','e','f'};
        dict.insert(pair<char,vector<char>>('3',a));
        a.clear();
        a={'g','h','i'};
        dict.insert(pair<char,vector<char>>('4',a));
        a.clear();
        a={'j','k','l'};
        dict.insert(pair<char,vector<char>>('5',a));
        a.clear();
        a={'m','n','o'};
        dict.insert(pair<char,vector<char>>('6',a));        
        a.clear();
        a={'p','q','r','s'};
        dict.insert(pair<char,vector<char>>('7',a));   
        a.clear();
        a={'t','u','v'};
        dict.insert(pair<char,vector<char>>('8',a));  
        a.clear();
        a={'w','x','y','z'};
        dict.insert(pair<char,vector<char>>('9',a));  

        vector<char> cur_abc;
        for(auto num=digits.begin();num<digits.end();num++){
            if (res.size()==0){
                string first;
                //cout<< "first"<<endl;
                cur_abc = dict[*num];
                for (auto zimu=cur_abc.begin();zimu<cur_abc.end();zimu++){
                    first = "";
                    first.append(1,*zimu);
                    //cout << "tianjia "<< first<<endl;
                    res.emplace_back(first);
                }

            } // if res.size ==0
            else {
                for(int i=0;i<res.size();i++){
                    //add zimu
                    cur_abc = dict[*num];
                    string first;
                    first = res[i];
                    for (auto zimu=cur_abc.begin();zimu<cur_abc.end();zimu++){
                    first = res[i];
                    first.append(1,*zimu);
                    temp.emplace_back(first);
                }
                }
                res.clear();
                res.swap(temp);
            }//end if

        }
    return res;
    }
};