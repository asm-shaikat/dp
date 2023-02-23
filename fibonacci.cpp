#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1)+ fibonacci(n-2);
}


int main(){
    // 0 1 1 2 3 5 8 13
    int N;
    cout<<"How many numbers of fibonacci numbers are there? ";
    cin>>N;
    for (int i = 0; i < N; i++){
     cout<<fibonacci(i)<<" ";
    }
}