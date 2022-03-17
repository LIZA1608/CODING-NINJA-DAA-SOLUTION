#include<bits/stdc++.h>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    
    int* dp = new int[n]();
    unordered_map<int,int> m;
    int index = 0;
    for(int i=0;i<n;i++){
        m[arr[i]] = index++; 
    }
    m[-1] = n+1;
    for(int i=0;i<n;i++){
        dp[i] = 1;
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i-1]+1 == arr[i]){
            dp[i] = dp[i-1] + 1; 
        }
    }
    int maxi = INT_MIN; 
    for(int i=0;i<n;i++){
        maxi = max(maxi,dp[i]);
    }

    vector<int> ans;
    for(int i=0;i<n;i++){
        if(dp[i] == maxi){ 
            ans.push_back(arr[i]-dp[i]+1);
        }
    }

    int idx = n+1;
    int finalAns; 
	for(int i=0;i<ans.size();i++){
        if(m[ans[i]]<idx){
            idx = m[ans[i]];
            finalAns = ans[i]; 
        }
    }

    vector<int> v;
    v.push_back(finalAns);
    v.push_back(finalAns+maxi-1);
    
    return v;
    
}
