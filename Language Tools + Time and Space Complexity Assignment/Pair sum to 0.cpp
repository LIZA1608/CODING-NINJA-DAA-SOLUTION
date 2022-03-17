#include<bits/stdc++.h>
using namespace std;
int pairSum(int *arr, int n) {

    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){//handling zeros separately
            continue;
        }
        int comp = -arr[i];
        if(m[comp] != 0){
            count += (m[arr[i]] * m[comp]);
            m[comp] = 0;
            m[arr[i]] = 0;
        }
    }
    if(m[0] != 0){ // for 0000 = total = 6
        int temp = m[0]-1;
        count += (temp*(temp+1)/2);
    }
    return count;
}
int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
