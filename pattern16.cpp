/* 
A
B C
D E F
G H I J */



#include<iostream>
using namespace std;
int main(){
    int i=1,n;
    cin>>n;
    char start='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<start<<" ";
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}