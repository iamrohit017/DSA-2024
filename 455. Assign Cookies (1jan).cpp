// 1st January 2024
// problem Title: 455. Assign Cookies
// problem link: https://leetcode.com/problems/assign-cookies/?envType=daily-question&envId=2024-01-01

class Solution {
public:
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end(), std::greater<int>());
    sort(s.begin(), s.end(), std::greater<int>());

    int child =0;
    int cokies =0;

    int ans=0;

    while(child<g.size() && cokies<s.size())
    {
        if(s[cokies]>=g[child])
        {
            ++ans;
            ++child;
            ++cokies;
        }
        else {
            ++child;
        }
    }
    return ans;



        
    }
};
