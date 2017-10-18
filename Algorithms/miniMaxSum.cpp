/**
https://www.hackerrank.com/challenges/mini-max-sum
*/
#include<iostream>
using namespace std;
int main(){
    long a[5]; //long because the people of hackerearth are asshats
    long smin=0,smax=0,temp;
    int i,j;
    for(i=0;i<5;i++) cin>>a[i];
    //hadto use bubble fuckin sort duh!
    for(i=1;i<5;i++){
        for(j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=1;i<5;i++) smax+=a[i];
    for(i=0;i<4;i++) smin+=a[i];
    cout<<smin<<" "<<smax;
    return 0;
}
