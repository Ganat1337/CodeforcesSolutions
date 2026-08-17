#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        int Negative = 2;
        int Positive = 1;
        if(arr[i]<0){
        arr[i] = Negative;
        }
        else if(arr[i]>0){
            arr[i] = Positive;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}