#include <iostream>
using namespace std;
int main() {
    long long l,r;
    long long t;
    cin>>t;
    for(int i=1; i<=t; i++){
        cin>>l>>r;
        long long maxValue =max(l,r);
        long long minValue =min(l,r);

        long long sumR = maxValue * (maxValue+1)/2;
        long long sumL = minValue * (minValue-1)/2;
    
        long long result = sumR - sumL;
        cout<<result<<'\n';
    }

}