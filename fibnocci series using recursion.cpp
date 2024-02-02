#include<bits/stdc++.h>
using namespace std;
void rug(int n,int a,int b){
    if(n==1) return;
    int c=a+b;
    cout<<a<<" ";
    a=b;
    b=c;
    rug(n-1,a,b);
}


int main(){
    int n;
    cin>>n;
    rug(n,0,1);
}
