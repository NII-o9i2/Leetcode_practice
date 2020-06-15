#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};
    int m = matrix.size();
    int n = matrix[0].size();
    if ((m == 0) || (n==0)) return {};
   // printf("%d %d\n",m,n);
    int xbound[2] = {0,m-1};
    int ybound[2] = {0,n-1};
    int addxy[2] = {0,1};
    int i = 0;
    int j = 0;
    //int tt = 0;
    vector<int> result;
    while (1) 
    {
        //tt +=1;
       // result.emplace_back(matrix[i].at(j));
        //printf("%d %d\n",i,j);
        //printf("add is  %d %d\n",addxy[0],addxy[1]);
        //printf("xbound is  %d %d\n",xbound[0],xbound[1]);
        //printf("ybound is  %d %d\n",ybound[0],ybound[1]);
        if ((xbound[0] >xbound[1])||(ybound[0]>ybound[1]))
        {
            result.emplace_back(matrix[i].at(j));
            break;
        }
        if ((i + addxy[0] > xbound[1]) || (i + addxy[0] < xbound[0]))
        {
            if ((j + addxy[1] > ybound[1]) || (j + addxy[1] < ybound[0]))
                {
                    result.emplace_back(matrix[i].at(j));
                    break;
                }
            else 
                {
                    if (addxy[0] == 1)
                    {
                        ybound[1] -=1;
                        addxy[0] = 0;
                        addxy[1] = -1;
                    } 
                    else if (addxy[0] == -1)
                    {
                        ybound[0] += 1;
                        addxy[0] = 0;
                        addxy[1] = 1;
                    }
                }               
        }
        else if ((j + addxy[1] > ybound[1]) || (j + addxy[1] < ybound[0])) 
        {
            if (addxy[1] == 1)
                {
                    xbound[0]+=1;
                    addxy[0] = 1;
                    addxy[1] = 0;
                } 
                else if (addxy[1] == -1)
                {
                    xbound[1]-=1;
                    addxy[0] = -1;
                    addxy[1] = 0;
                }
        } else {
            result.emplace_back(matrix[i].at(j));
            i += addxy[0];
            j += addxy[1];
           //printf("moved!\n");
        }
    }
    return result;
    }
};

