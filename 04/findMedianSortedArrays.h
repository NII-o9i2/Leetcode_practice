#include<vector>
#include<set>
#include <utility>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;
class Solution {
public:
    double mid4(double a1,double a2,double b1,double b2){
        double max = a2;
        double min = a1;
        if (b1<min) min = b1;
        if (b2>max) max = b2;
        return double(a1+a2+b1+b2 - max -min)/2.0;
    }
    double msec4(double a1,double a2,double b1,double b2){
        if (a1<b1) {
            if (b1<a2) return b1;
            else return a2;
        }else if (b2<a1) return b2;
            else return a1;
    }
    double mid3x(double a1,double a2,double b1){
        double max = a2;
        if (b1>max) max = b1;
        return double(a1+a2+b1 -max)/2.0;
    }
    double mid3n(double a1,double a2,double b1){
        double min = a1;
        if (b1<min) min = b1;
        return double(a1+a2+b1 -min)/2.0;
    }
    double bisectionsearch(int left,int right,int num,int flag,vector<int>& nums1, vector<int>& nums2){
        cout << left <<" "<<right<<endl;
        if (left == right) {
            if (flag == 1){
               return nums1[left];
            } else {
                //cout<<"a is "<<fixed << setprecision(2)<< double(nums1[left])<<endl;
                return (double(nums1[left]+nums2[num-left]))/2;
            }
        }
        if (left == right-1) {
            if (flag == 1){
                int valid_num = 2;
                if ((num-left>=0)&&(num-left<nums2.size())) valid_num++;
                if ((num-right>=0)&&(num-right<nums2.size())) valid_num++;
                if (valid_num == 2) return nums1[left];
                if (valid_num == 3){
                    cout << "valid 3"<<endl;
                    if ((num-left>=0)&&(num-left<nums2.size())){
                        if (nums1[left]>nums2[num-left]) return nums2[num-left];
                        //cout<<"> "<<endl;
                        if (nums1[left]<nums2[num-left]) return nums1[left];
                        //cout<<"< "<<endl;
                        if (nums1[left]==nums2[num-left]) return nums1[left];
                    }
                    if ((num-right>=0)&&(num-right<nums2.size())){
                        if (nums1[right]>nums2[num-right]) return nums2[num-right];
                        //cout<<"> "<<endl;
                        if (nums1[right]<nums2[num-right]) return nums1[right];
                        //cout<<"< "<<endl;
                        if (nums1[right]==nums2[num-right]) return nums1[right];
                    }
                } 
                if (valid_num == 4) {
                    cout<<nums1[left]<<nums1[right]<<nums2[num-right]<<nums2[num-left]<<endl;
                    return msec4(nums1[left],nums1[right],nums2[num-right],nums2[num-left]);
                }

            } else {
                //cout<<"4 "<<endl;
                if ((num-left <= nums2.size()-1) && (num-right>=0))return mid4(nums1[left],nums1[right],nums2[num-right],nums2[num-left]);                
                //cout<<"3 n "<<endl;
                if ((num-right <= nums2.size()-1)&& (num-right>=0)) return mid3n(nums1[left],nums1[right],nums2[num-right]);
                //cout<<"3 x "<<endl;
                if ((num-left <= nums2.size()-1)&& (num-left>=0)) return mid3x(nums1[left],nums1[right],nums2[num-left]);
                return double(nums1[left]+nums1[right])/2.0;
            }
        }
        int mid = (left + right)/2;
        cout<< "mid "<<mid<<"num "<<num<<endl; 
        if (num-left > nums2.size()-1) return bisectionsearch(left+1,right,num,flag,nums1,nums2);
        if (num-right < 0 ) return bisectionsearch(left,right-1,num,flag,nums1,nums2);

        if (nums1[mid] > nums2[num-mid]){
            return bisectionsearch(left,mid,num,flag,nums1,nums2);
        }
        if (nums1[mid] < nums2[num-mid]){
            return bisectionsearch(mid,right,num,flag,nums1,nums2);
        }
        if (nums1[mid] == nums2[num-mid]){
            return nums1[mid];
        }
        return 0.0;
        
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int length_all;
        int JO_flag; //0 = O 1 = J
        int front_num;
        length_all = nums1.size()+nums2.size();
        if (length_all%2 ==1) JO_flag = 1;
            else JO_flag = 0; 
        if (JO_flag ==1)
            front_num = (length_all - 1)/2;
        else 
            front_num = length_all/2 - 1;
        vector<int> large;
        vector<int> small;
        if (nums1.size()>nums2.size()){
            large = nums1;
            small = nums2;
        }else {
            large = nums2;
            small = nums1;
        }
        if (front_num>=small.size()){
            int smallID = front_num - small.size();
            if (small.size()==0) {
                if (JO_flag == 1) return large[front_num]; 
                    else return double(large[front_num]+large[front_num+1])/2.0;
            } 
            if (large[smallID] >= small.back()) {
                if (JO_flag == 1)  return large[smallID];
                else return double(large[smallID]+large[smallID+1])/2;
            }
            if (large[large.size()-smallID-1] <= small.front()) {
                if (JO_flag == 1)  return large[large.size()-smallID-1];
                else  return double(large[large.size()-smallID-1]+large[large.size()-smallID-2])/2.0;
            }
        }
       
        return bisectionsearch(int(0),int(large.size()-1),front_num,JO_flag,large,small);
    }

};