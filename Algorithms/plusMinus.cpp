/**
https://www.hackerrank.com/challenges/plus-minus
*/
#include <iostream>
using namespace std;

int main(){
    int n,arr[100];
    int i,nzero=0,nnegetive=0,npositive=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0) npositive++;
        else if(arr[i]<0) nnegetive++;
        else if(arr[i]==0) nzero++;
    }
    //cout<<npositive<<nnegetive<<nzero;
    double x,y,z;
    x=(double)npositive/(double)n;
    y=(double)nnegetive/(double)n;
    z=(double)nzero/(double)n;
    cout<<x<<endl<<y<<endl<<z<<endl;
    return 0;
}
