#include<iostream>
using namespace std;
int main(){
    int n,num,lastNum;
    cin>>n;
     for(int i=1; i<=n; i++){
        cin>>num;
        if(num==0){
            continue;
        }
        while(num>0){
        lastNum= num%10;
        // reverse = (reverse*10) + lastNum;
        num=num/10;
        cout<<lastNum<<" ";  
    }
    cout<<'\n';
              
    }
}