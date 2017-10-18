/**
https://www.hackerrank.com/challenges/angry-professor?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign
*/


#include <iostream>
using namespace std;

int main(){
    int t,n,k,late,ontime;
    int a[200];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        late=0;
        ontime=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]>0){
                late++;
            }
            else if(a[j]<=0){
                ontime++;
            }
        }
        if(late<=(n-k))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

}
