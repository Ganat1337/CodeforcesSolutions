#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1; i<=n; i++){
        cout<<count<<" "<<count+1<<" "<<count+2<<" ";
        cout<<"PUM"<<'\n';
        count+=4;
    }    
}