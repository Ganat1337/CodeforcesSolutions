#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long factorial=1;
        cin>>n;
    for(int j=1;j<=n;j++){
        factorial *=j;    
    }
        cout<<factorial<<'\n';
    }
}