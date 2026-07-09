#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Missing_Number(){
    int n;
    cin>>n;
    vector<int>arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans ^= arr[i];
    }
    for(int i=1;i<=n;i++){
        ans ^= i;
    }
    cout<<ans<<endl;
}

int main(){
    Missing_Number();
    return 0;
}