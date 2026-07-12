#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=2;i<=x;i++){
        bool Isprime=true;
    for(int j=2;j*j<=i;j++){
        if (i%j==0)
        {
            Isprime=false;  
            break;  
        }
    }
    if(Isprime==true){cout<<i<<" ";
        }
    }
}