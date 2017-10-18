/**
https://www.hackerrank.com/challenges/diagonal-difference
*/
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n,arr[100][100],suma=0,sumb=0;
    cin >> n;
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0,j=0;i<n,j<n;i++,j++){
        suma+=arr[i][j];
    }
    for(i=0,j=(n-1);i<=(n-1),j>=0;i++,j--){
        sumb+=arr[i][j];
    }
    cout<<abs(suma-sumb);
    return 0;
}
