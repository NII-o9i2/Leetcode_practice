//
// Created by jojo-feng on 23-2-2.
//

#include "leetcode_06.h"
#include "math.h"
//s = "PAYPALISHIRING", numRows = 3

using std::string;

string Solution::convert(string s, int numRows){
  string res[numRows];
  bool is_down_direction = true;
  int cur_row_cnt = 0;
  for(auto char_tmp: s){
    if (is_down_direction && cur_row_cnt < numRows - 1){
      res[cur_row_cnt]+= char_tmp;
      cur_row_cnt++;
      continue;
    }else if(is_down_direction && cur_row_cnt == numRows - 1){
      res[cur_row_cnt]+= char_tmp;
      is_down_direction = false;
      cur_row_cnt --;
      cur_row_cnt = std::max(cur_row_cnt,0);
      continue;
    }
    if (!is_down_direction && cur_row_cnt > 0){
      res[cur_row_cnt]+= char_tmp;
      cur_row_cnt--;
      continue;
    }else if(!is_down_direction && cur_row_cnt == 0){
      res[cur_row_cnt]+= char_tmp;
      is_down_direction = true;
      cur_row_cnt ++;
      cur_row_cnt = std::min(cur_row_cnt,numRows - 1);
      continue;
    }
  }
  string  final_res = "";
  for(int i = 0; i<numRows;i++){
    final_res+= res[i];
  }
  return final_res;
};
