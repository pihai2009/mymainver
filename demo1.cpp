#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,z,i=1;
	cin>>n;
	int a[n+1];
	for(i;i<=n;i++) cin>>a[i];				//输入原数组 step.1
	z=a[1];									//--------------
	for(int j=2;j<=n;j++) a[j-1]=a[j];		//转换数组 
	a[n]=z;									//step.2
	cout<<endl;								//--------------
	for(int y=1;y<=n;y++) cout<<a[y]<<" ";	//输出数组 step.3 
	system("pause");
	return 0;
}
