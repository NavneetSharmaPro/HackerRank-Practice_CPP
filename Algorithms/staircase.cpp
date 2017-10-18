/**
https://www.hackerrank.com/challenges/staircase
*/
#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i=(n-1),j=1;i>=0,j<=n;i--,j++){
        for(int x=0;x<i;x++) cout<<" ";
        for(int y=0;y<j;y++) cout<<"#";
        cout<<endl;

    }
    return 0;
}
