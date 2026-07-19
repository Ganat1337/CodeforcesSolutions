#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int num,fib,a=0,b=1;
    cin>>num;
    for(int i=1; i<=num; i++){
        if(i==1){
            cout<<a<<" ";
        }
        else if(i==2){
            cout<<b<<" ";
        }
        else{
            fib=a+b;
            a=b;
            b=fib;
        cout<<fib<<" ";}

    }    

}