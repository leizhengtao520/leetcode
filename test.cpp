//
// Created by hello on 2019/9/25.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> a(10,1);
    vector<int> b(a);
    vector<int> c(b.begin(),b.begin()+3);
    int d[]={1,2,3,4,5,6,7};
    vector<int> e(d,d+7);


    return 0;
}
int removeDuplicates(vector<int>& nums) {

}