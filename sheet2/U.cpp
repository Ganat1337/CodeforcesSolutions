#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;  
    int total_sum=0;
    for(int i=1; i<=n; i++){
        int temp=i;
        int sum_digits=0;
    while (temp>0){
        sum_digits+=temp%10;
        temp/=10;
            }  
        if(a<=sum_digits && sum_digits<=b){
            total_sum +=i;
        }
    }
        cout<<total_sum<<" ";
}