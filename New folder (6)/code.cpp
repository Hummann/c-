using namespace std;
#include <iostream>
#include <vector>

int main(){
    vector<int> vec = {1,2,3};
    int num;
    // vec.push_back(25);      //addding at back
    // vec.push_back(35);
    // vec.pop_back();         //delete at back        #vec.front() & vec.back() say the value of last and of start
    // for(int val : vec){     //for each
    //     cout << vec[1] << endl;
    // }
    // cout << vec.size();     //for size


    // cout << "Enter the number u want to search ";    // LINEAR SEARCH
    // cin >> num;
    // for( int num1 : vec){
    //     if(num1 == num){
    //         cout << "YOUR NUM IS IS in " << num1;
    //     }
    // }
// int func(int &vec)                                   #MAKES ANYTHING A PASS BY REFRENCE
    // int start,end,size;                              //REVERSING
    // size = vec.size();
    // start = 0;
    // end = size -1;
    // for(start = 0 ; start <end ;start++,end--){
    //     swap(vec[start] ,vec[end]);

    // }
    // for(int i=0;i<size;i++){
    //     cout << vec[i];

    // }
//     class Solution {                                 #DID SINGLE NUMBER PROBLEM IN LEETCODE[USES XOR]
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans =0;
//         for(int val: nums){
//             ans = ans ^ val;
//         }
//         return ans;
//     }
// };


}