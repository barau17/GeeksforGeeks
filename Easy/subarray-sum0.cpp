//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {
        int prefix = 0, len = 0;
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++) {
            prefix += A[i];
            if (prefix == 0) len = max(len, i+1);
            else if (map.find(prefix) != map.end()) {
                int diff = abs(i-map[prefix]);
                len = max(len, diff);
            }
            else map[prefix] = i;
        }
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends