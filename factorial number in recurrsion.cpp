#include<bits/stdc++.h>
using namespace std;
int rug(int n){
    if (n==1){
        return n;
    }
    return n*rug(n-1);
// 	int p=1;
// 	for(int i=1;i<=n;i++) p*=i;
	//return p;
}
int main()
{
	int n;
	cin>>n; //5
	cout<<rug(n); //5
	return 0;
}
