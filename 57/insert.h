#include <vector>
#include <string>
#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int left;
        int right;
        int mergeleft;
        int mergeright;
        int segleft,segright;
        vector<vector<int>> out;
        if (intervals.size()==0) {
            out.emplace_back(newInterval);
            return out;
        }
        if (newInterval.size()==0) return intervals;
        left = newInterval[0];
        right = newInterval[1];

        for(int sectionId =0;sectionId<intervals.size();sectionId++){
            segleft = intervals[sectionId][0];
            segright = intervals[sectionId][1];
            if (sectionId==0) {
                if (left<segleft) mergeleft = left;
                if (right<segleft) mergeright = right;
            }
            if (sectionId==intervals.size()-1){
                if (left>segright) mergeleft = left;
                if (right>segright) mergeright = right;
            }
            if ((left>=segleft) && (left<=segright)) mergeleft = segleft;
            if ((right>=segleft) && (right<=segright)) mergeright = segright;
            if (sectionId>0){
                if ((left<intervals[sectionId][0]) && (left>intervals[sectionId-1][1])) mergeleft = left;
                if ((right<intervals[sectionId][0]) && (right>intervals[sectionId-1][1])) mergeright = right;
            }
        }
        //cout<<mergeleft<<mergeright<<endl;
        vector<int> new_;
        new_.emplace_back(mergeleft);
        new_.emplace_back(mergeright);
        bool pushflag = false;
        for(int sectionId =0;sectionId<intervals.size();sectionId++){
            if (sectionId == 0){
                if (mergeright<intervals[sectionId][0]) {
                    out.emplace_back(new_);
                    out.emplace_back(intervals[sectionId]);
                    continue;
                }
            }
            if (sectionId == intervals.size()-1){
                if (mergeleft>intervals[sectionId][1]) {
                    out.emplace_back(intervals[sectionId]);
                    out.emplace_back(new_);
                    continue;
                }
            }
            if ((!pushflag) && (((intervals[sectionId][0]>=mergeleft) && (intervals[sectionId][0]<=mergeright)) 
                || ((intervals[sectionId][1]>=mergeleft) && (intervals[sectionId][1]<=mergeright)))){
                    pushflag = true;
                    out.emplace_back(new_);
            }
            if ((!pushflag) && (sectionId > 0) && (mergeleft>=intervals[sectionId-1][1])&& (mergeleft<=intervals[sectionId][0]))
            {
                    pushflag = true;
                    out.emplace_back(new_);            
            }
            if (intervals[sectionId][0]>mergeright)  out.emplace_back(intervals[sectionId]);
            if (intervals[sectionId][1]<mergeleft)  out.emplace_back(intervals[sectionId]);

        }
        return out;
    }
};