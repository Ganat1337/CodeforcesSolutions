#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x<2){
        cout<<"NO"<<'\n';
    }
    bool Isprime=true;
    for(int i=2;i<x;i++){
        if (x%i==0)
        {
            Isprime=false;  
            break;  
        }

    }
    if(Isprime==true){cout<<"YES";}
    else cout<<"NO"<<'\n';
}