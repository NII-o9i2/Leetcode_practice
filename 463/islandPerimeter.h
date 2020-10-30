#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int meter = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if (grid[i][j]==1){
                    if ((i==0) || ((i>0)&&(grid[i-1][j]==0))) meter++;
                    if ((j==0) || ((j>0)&&(grid[i][j-1]==0))) meter++;
                    if ((i==grid.size()-1) || ((i<grid.size()-1)&&(grid[i+1][j]==0))) meter++;
                    if ((j==grid[i].size()-1) || ((j<grid[i].size()-1)&&(grid[i][j+1]==0))) meter++;
                }
            }
        }
        return meter;
    }
};