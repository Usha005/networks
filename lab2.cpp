#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int a[100],i,n,t,j,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>t;
    for(j=0;j<t;j++){
        cin>>x;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(a[i]+a[j]==x)
                cout <<i <<j;
                else cout<<0;
            }
        }
    }
}