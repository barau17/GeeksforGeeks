//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    int binarysearch(int arr[], int n, int k) {
        int l = 0, h = n;
        binarySearch(arr, k, l, h);
    }
    
    int binarySearch(int arr[], int k, int low, int high) {
        if (low > high)
            return -1;
        
        else {
            int mid = (low+high)/2;
            if (k == arr[mid])
                return mid;
            else if (k > arr[mid]) {// k is in the right side
                binarySearch(arr, k, mid+1, high);
            }
            else { // k is in the left side
                binarySearch(arr, k, low, mid-1);
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends