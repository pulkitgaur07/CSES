#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Increasing_Array(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long maxi = arr[0], ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        ans += maxi-arr[i];
    }
    cout<<ans<<endl;
}

int main(){
    Increasing_Array();
    return 0;
}