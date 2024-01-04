//Problem statement: Find an element occurring once when all others are present thrice
//4th of January GFG POTD
//problem link:https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1

// Google : important question
 int res = 0;
        for (int i = 0; i < 32; i++) {
            int ans = 0;
            for (int j = 0; j < N; j++) {
                if ((nums[j] & (1 << i)) != 0)
                    ans++;
            }
            if (ans % 3 == 1)
                res += (1 << i);
        }
        return res;


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        
        map<int,int>map;
        
        for(int i=0;i<N;i++)
        {
            map[arr[i]]++;
        }
        
        int ans = 0;
        int k =0;
        for(auto j :map)
        {   
            if(j.second==1)
                ans = j.first;

        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
