#include<iostream>
using namespace std;
int main(){
    int num,Multiplication;
    cin>>num;
    for(int i=0;i<12;i++){
        Multiplication=num*(i+1);
        cout<<num<<" * "<<(i+1)<<" = "<<Multiplication<<endl;
    }
    
}