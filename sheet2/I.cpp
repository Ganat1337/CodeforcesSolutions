#include<iostream>
using namespace std;
int main(){
    long long n,last_num;
    cin>>n;
    long long original=n;
    long long reverse=0;
    while(n>0){ 
       last_num=n%10;
        reverse = (reverse*10) + last_num;
                n =n/10;
    }
        cout<<reverse<<'\n';
    if(reverse==original){cout<<"YES";}
    else cout<<"NO";
}