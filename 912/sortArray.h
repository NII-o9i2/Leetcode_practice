#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        int len;
        len = nums.size();
        quicksort(0,len-1,nums);
        cout<< "end"<<endl;
        return nums;
    }

private:
    void quicksort(int low_,int high_,vector<int> & nums){
        cout << low_ << " to " <<high_ <<endl;
        int low,high;
        low = low_;
        high = high_;

        if (low>=high) return;

        auto temp = nums[low];
        while(low < high){
            cout << low << " 1 to " <<high <<endl;
            while ((nums[high]>temp) && (low<high)) {
                high--;
            }
            nums[low]= nums[high];
            
            while ((nums[low]<=temp) && (low<high)) {
                low++;
            }
            nums[high]= nums[low];
            cout << low << " 2 to " <<high <<endl;
        }
    nums[low]=temp;
    quicksort(low_,low-1,nums);
    quicksort(low+1,high_,nums);
    }


};