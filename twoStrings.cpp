/**
https://www.hackerrank.com/challenges/two-strings?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=7-day-campaign
*/
#include <iostream>
#include <string.h>
#define MAX 100000
using namespace std;


int main()
{
    int p;
    char a[MAX],b[MAX];

    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a;
        cin>>b;
        int counter=0;
        for(int j=0;j<strlen(a);j++){
            for(int k=0;k<strlen(b);k++){
                if(a[j]==b[k])
                    counter++;
            }
        }
        if(counter == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
