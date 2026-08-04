#include<iostream>
using namespace std;
int main(){
int n,x;
cin>>n;
int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            index=i;
            break;
        }
    }
    cout<<index;
}