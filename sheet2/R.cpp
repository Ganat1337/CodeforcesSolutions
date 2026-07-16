#include<iostream>
using namespace std;
int main(){
    int n,m,Greater,Smallest,sum;
    while (true)
    {
        cin>>n>>m;
        if(n<=0 || m<=0){
            break;
        }
    if(n>m){
        Greater=n;
        Smallest=m;
    }
    else{
        Greater=m;
        Smallest=n;
    }
    sum=0;
    for(int i=Smallest; i<=Greater; i++){
        sum += i; 
        cout<<i<<" ";
    }
    cout<<"sum ="<<sum<<'\n';    
    }
}