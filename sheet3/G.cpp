#include<iostream>
#include <vector>
using namespace std;
int main (){
    int n ;
    cin>>n;;
    vector<int>arr(n) ;
   for(int i = 0; i<n; i++){
    cin>>arr[i];
}
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++)
    {
        if(arr[i] != arr[n - 1 - i]){
            isPalindrome = false;
        }
    }
    if (isPalindrome == true) cout<<"YES";
    else cout<<"NO"; 
    
}