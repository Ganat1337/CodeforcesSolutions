// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int GCD=1;
//     for(int i=1; i<=(a,b);i++){
        
//         if(a%i==0 && b % i == 0){
//             GCD=i;
//         }    
        
//     }
//     cout<<GCD<<" ";
// }
#include<iostream>
#include<numeric> 

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n'; 
}