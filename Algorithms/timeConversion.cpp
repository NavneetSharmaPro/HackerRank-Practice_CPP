/**
https://www.hackerrank.com/challenges/time-conversion
*/
#include <iostream>
#include<cstring>
using namespace std;

int main(){
    string time12="07:05:45PM";
    //cin >> time12;
    int i;
    char x[10],y[8];
    strcpy(x,time12.c_str());
    if(x[8]=='A')
    {
        for(i=0;i<8;i++) y[i]=x[i];
        for(i=0;i<8;i++) cout<<y[i];
    }

    else if(x[8]=='P')
    {
        int temp=((int)x[0]-48)*10+((int)x[1]-48);
        temp=temp+12;
        if(temp==24) temp=12;
        cout<<temp;
        //x[0]=((char)(temp/10))-48; cout<<x[0];
        //x[1]=((char)(temp%10))-48; cout<<x[1];
        for(i=2;i<8;i++) y[i]=x[i];
        for(i=2;i<8;i++) cout<<y[i];
    }

    return 0;
}
//not accepting in hackerrank
