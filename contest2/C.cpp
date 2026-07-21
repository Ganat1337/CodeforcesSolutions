#include <iostream>
using namespace std;
int main() {
    int n,k,num;
    cin>>n>>k;
    for(int i = 0; i < n; i += k){
        long long min=1000000000;
        for(int j = i; j < i + k && j < n; j++){
            cin>>num;
            if(min>num){
                min=num;
            }
        }
        cout<<min<<" ";
    }  
}