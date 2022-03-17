#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=0,d=0,r=0;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]=='a'){
            t++;
        }
         else if (a[i]=='s') {
             d++;
         }
        else if (a[i]=='p'){
            r++;
        }
        else{
            continue;
        }   
            }
    cout<<t<<" "<<d<<" "<<r;
	return 0;
}
