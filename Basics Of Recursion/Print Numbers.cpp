#include<iostream>
using namespace std;
void print(int n){
    static int i=1;
    if(n == 1){
        cout << i << " ";
        return;
    }
    cout << i << " ";
    i++;
    print(n - 1);
}

int main(){
    int n;
    cin >> n;
  
    print(n);
}


