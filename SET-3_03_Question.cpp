/*
3)Given an array and an integer K, find the maximum for each and every contiguous subarray
of size K.
Examples :
Input: arr[] = {1, 2, 3, 1, 4, 5}, K = 3
Output: 3 3 4 5
Explanation: Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
Maximum of 1, 4, 5 is 5
Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4
Output: 10 10 10 15 15 90 90
Explanation: Maximum of first 4 elements is 10, similarly for next 4
elements (i.e from index 1 to 4) is 10, So the sequence
generated is 10 10 10 15 15 90 90
Input: arr[] = {20, 10,30}, K = 1
Output: 20 10 30

*/

#include <iostream>
using namespace std;

void printMaxK(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; ++i) {
        int max = arr[i];
        for (int j = 1; j < k; ++j) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        cout << max << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printMaxK(arr, n, k);
    return 0;
}
