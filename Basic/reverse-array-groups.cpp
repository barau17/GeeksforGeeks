class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        for (int i = 0; i < n; i+=k) {
            int fst = i, lst = i+k-1;
            if (lst > n-1) lst = n-1;
            while (fst < lst) {
                swap(arr[fst], arr[lst]);
                ++fst;
                --lst;
            }
        }
    }
};