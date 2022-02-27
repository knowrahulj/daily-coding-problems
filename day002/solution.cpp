#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> res) {
    for(int i=0; i<res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

vector<int> productOfAllOtherNumbers(vector<int> nums) {
    if(nums.size() == 0)
        return {};
    if(nums.size() == 1)
        return {1};

    int size = nums.size();

    int preMultipler = nums[0];
    vector<int> res(size,1);

    for(int i=1; i<size; i++) {
        res[i] = preMultipler;
        preMultipler *= nums[i];
    }

    preMultipler = nums[size -1];
    for(int i=size-2; i >= 0; i--) {
        res[i] *= preMultipler;
        preMultipler *= nums[i];
    }

    return res;
}


int main() {
    vector<int> nums1 = {1,2,3,4,5};
    vector<int> nums2 = {10,20,30,40,50};
    vector<int> nums3 = {10};

   printVector(productOfAllOtherNumbers(nums1));
   printVector(productOfAllOtherNumbers(nums2));
   printVector(productOfAllOtherNumbers(nums3));

   return 0;
}