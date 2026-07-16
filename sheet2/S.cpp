#include<iostream>
using namespace std;
int main(){
    int t,n,m,Greater,Smallest,sum;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>n>>m;   
        if(n>m){
        Greater=n;
        Smallest=m;
    }
    else{
        Greater=m;
        Smallest=n;
    }
    sum=0;
    for(int j=Smallest+1; j<Greater; j++){
        if(j%2!=0){
        sum += j;
    }
} 
    cout<<sum<<'\n';    
    }
        }
