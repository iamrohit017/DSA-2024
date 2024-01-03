//Problem statement: Find an element occurring once when all others are present thrice
//4th of January GFG POTD
//problem link:https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1


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
