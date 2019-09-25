//
// Created by hello on 2019/9/25.
//
#include <iostream>
#include <vector>
using namespace std;
int removeDuplicatesTest(vector<int>& nums);

/**
 * 我的解法 时间有点长 ，主要是因为vector 的性能损耗，如果换成数组直接计算会很快
 * 基本思路和大家一样
 * @param nums = [0,0,1,1,1,2,2,3,3,4]
 * @return
 */
int removeDuplicatesTest(vector<int>& nums) {
    if(nums.size()==0){
        return nums.size();
    }else{
        for (auto it = nums.begin(); it < nums.end()-1; it++) {
            auto p = it;
            if(*it == *(it+1) ){
             nums.erase(it+1);
             it=p-1;
            }
        }
        return nums.size();
        }
}