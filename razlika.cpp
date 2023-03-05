//
// Created by Brandon Li on 3/2/23.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int c;

    cin >> n;
    cin >> c;
    int nums[n];

    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        nums[i] = b;
    }

    sort(nums, nums + n);

    int smallest = -1;
    for (int i = 0; i < n-1; ++i) {
        int diff = nums[i+1] - nums[i];
        if (smallest == -1) smallest = diff;
        else if (diff < smallest) smallest = diff;
    }

    int biggest = nums[n-1] - nums[0];

    cout << smallest + biggest;
}