#include <iostream>
using namespace std;


void rotate(int *input, int d, int n)
{
    //Write your code here
    int *arr = new int[d];
    for(int i=0;i<d;i++){
        arr[i]  =input[i];
    }
    for(int i=d;i<n;i++){
        input[i-d] = input[i];
    }
    int index = 0;
    for(int i=n-d;i<n;i++){
        input[i] = arr[index];
        index++;
    }
}
