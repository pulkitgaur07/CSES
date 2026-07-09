#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Weird_Algorithm(){
    long long n;
    cin>>n;
    while(n != 1){
        cout<<n<<" ";
        if(n & 1) n = n*3 + 1;
        else n /= 2;
    }
    cout<<n<<endl;
}

int main(){
    Weird_Algorithm();
    return 0;
}