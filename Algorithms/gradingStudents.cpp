/**
https://www.hackerrank.com/challenges/grading
*/

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int marks[n],update[n];
    for(i=0;i<n;i++){
        cin>>marks[i];
        int temp=(marks[i]/5+1)*5 - marks[i];
        //cout<<temp;
        if(temp<3){
            if(marks[i]<38) update[i]=marks[i];
        else{
            if(temp==1) update[i]=marks[i]+1;
            if(temp==2) update[i]=marks[i]+2;
            if(temp==3) update[i]=marks[i];
        }
        }
        else
            update[i]=marks[i];
    }
    for(i=0;i<n;i++){
        cout<<update[i]<<endl;
    }
    return 0;
}
