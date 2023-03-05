#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m=0,x,j=1;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	m=a[1];
	cout<<"#"<<m<<endl;
	while(j!=n){
		if(m<=a[j]){
			m=a[j];
			x=j;
			if(j==n) cout<<"ED^"<<x;
		}
		j++;//.......
	}
	system("pause");
	return 0;
}
