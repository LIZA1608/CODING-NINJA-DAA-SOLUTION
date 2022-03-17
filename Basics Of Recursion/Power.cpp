#include<iostream>
#include<algorithm>
using namespace std;
int power(int x, int n) {
return pow(x,n);
}
int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}
