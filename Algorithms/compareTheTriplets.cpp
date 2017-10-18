/**
https://www.hackerrank.com/challenges/compare-the-triplets
*/
/*#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    if(a0>b0) return 1;
    else if(a0<b0) return 1;
        if(a1>b1) return 1;
    else if(a1<b1) return 1;
        if(a2>b2) return 1;
    else if(a2<b2) return 1;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int a[3],b[3],pointa=0,pointb=0;
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];
    for(int i=0;i<3;i++){
        if(a[i]>b[i]) ++pointa;
        else if(b[i]>a[i]) ++pointb;
    }
    cout<<pointa<<" "<<pointb;
    return 0;
}
