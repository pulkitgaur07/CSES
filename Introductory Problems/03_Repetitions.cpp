#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Repetitions(){
    string s;
    cin>>s;
    int ans = 1,val = 1;
    int n = s.size();
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            val++;
        }
        else{
            val = 1;
        }
        ans = max(ans,val);
    }
    cout<<ans<<endl;
}

int main(){
    Repetitions();
    return 0;
}