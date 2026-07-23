#include <iostream>
using namespace std;
int main() {
    int t,max=0;
    long long num;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>num;
        int count=0;
        if(num%2!=0){
            count=0;
        }
        while(num%2==0){
            num/=2;
            count++;
            // num %2;    
        }    
            if(max<count){
                max=count;
            }
    }
    cout<<max;    
}