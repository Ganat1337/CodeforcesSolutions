#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int totalnums,num;
    cin>>totalnums;
    for(int i=1; i<=totalnums; i++){
        cin>>num;
        int temp =num;
        int count=0;
        long long result;
        while(temp>0){
            if(temp%2==1){
                count++;
            }
            temp /= 2;
        }       
        result = pow(2, count) - 1;
        cout<<result<<'\n'; 
    }

}
                    // for(int i=0; i<count; i++){
                    //     result *2+1=0;
                    // } 