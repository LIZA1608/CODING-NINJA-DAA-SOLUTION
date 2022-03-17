#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    static int a=-1;
    if(size<0){
        if(a>=0){
            return a;
        }
        return -1;
    }
    if(input[size]==x){
        a=size;
        
    }
    firstIndex(input,size-1,x);

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}

