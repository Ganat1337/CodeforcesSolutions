#include<iostream>
#include <vector>
using namespace std;
int main (){
    int n , firstIndex , index;
    cin>>n;;
    vector<int>arr(n) ;
   for(int i = 0; i<n; i++){
    cin>>arr[i];}
    
    int minVal = arr[0];
    int minIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }
    cout << minVal << " " << minIndex + 1 << endl;
}