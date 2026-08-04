#include<iostream>
using namespace std;
int main(){
int n;
long long sum=0;
cin>>n;
long long arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    sum += arr[i];
    }
    if(sum<0){
     sum *= -1;
    }
    cout<<sum;       
}