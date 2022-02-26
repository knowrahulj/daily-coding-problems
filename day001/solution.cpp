#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool twoNumbersForSum(vector<int> nums, int sum) {
    set<int> numbersSeen;

    for(int i=0; i<nums.size(); i++) {
        if(numbersSeen.find(sum - nums[i]) != numbersSeen.end())
            return true;
        numbersSeen.insert(nums[i]);
    }

    return false;
}


int main() {
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {10,20,30,40,50};
    vector<int> nums3 = {10};
    vector<int> nums4 = {6};
    int sum = 6;

   cout << twoNumbersForSum(nums1, sum) << endl;
   cout << twoNumbersForSum(nums2, sum) << endl;
   cout << twoNumbersForSum(nums3, sum) << endl;
   cout << twoNumbersForSum(nums4, sum) << endl;

   return 0;
}