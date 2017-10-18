/**
https://www.hackerrank.com/challenges/birthday-cake-candles
*/
#include <iostream>

using namespace std;

int main(){
    long n,i,max=0,count=0;
    cin >> n;
    long arr[n];
    for(i=0;i<n;i++){

        cin>>arr[i];
        if(arr[i]>max) max=arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==max) count++;
    }
    cout<<count;
    return 0;
}
