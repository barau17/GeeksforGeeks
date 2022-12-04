class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        for (int i = 1; i < n; i+=2) {
            if (arr[i-1] >= arr[i]) swap(arr[i-1], arr[i]);
            if (i == n-1) break;
            if (arr[i+1] >= arr[i]) swap(arr[i+1], arr[i]);
        }
    }
};