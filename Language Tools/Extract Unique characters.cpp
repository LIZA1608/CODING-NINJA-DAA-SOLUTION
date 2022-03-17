#include<bits/stdc++.h>

using namespace std;
string uniqueChar(string str) {
 string ans="";
 unordered_map<char,int> m;
 for(int i=0;i<str.length();i++){
if(m[str[i]]>0){
 continue;
 }
 else{
 ans+=str[i];
 m[str[i]]++;
}
} return ans;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
