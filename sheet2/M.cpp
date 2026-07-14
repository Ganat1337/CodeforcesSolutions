#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool foundAnyLucky = false;
    for(int i=a;i<=b;i++ ){
        bool isLucky = true;
        int temp = i;
        while(temp>0){
            int digit= temp %10;
            if(digit !=4 && digit !=7){
                isLucky = false;
                break;
            }
            temp /=10;
        }
        if(isLucky==true){
            cout<<i<<" ";
            foundAnyLucky = true;
        }
        
    }
    if(foundAnyLucky==false){
            cout<<-1<<" ";
        } 
   
}