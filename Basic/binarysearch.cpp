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
            else if (k > arr[mid]) {
                binarySearch(arr, k, mid+1, high);
            }
            else {
                binarySearch(arr, k, low, mid-1);
            }
        }
    }
};