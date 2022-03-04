#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int firstMissingPositive(vector<int>& A) {
    int n = A.size();
    for(int i = 0; i < n; ++ i)
        while(A[i] > 0 && A[i] <= n && A[A[i] - 1] != A[i])
            swap(A[i], A[A[i] - 1]);

    for(int i = 0; i < n; ++ i)
        if(A[i] != i + 1)
            return i + 1;

    return n + 1;
}


int main() {
   vector<int> nums = {3, 4, -1, 1};
   cout << firstMissingPositive(nums) << endl;

   return 0;
}