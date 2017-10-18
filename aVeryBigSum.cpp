/**
https://www.hackerrank.com/challenges/a-very-big-sum
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;//used endl which didn't matched the output Asshole=me -_-
}
