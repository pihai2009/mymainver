#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,z,i=1;
	cin>>n;
	int a[n+1];
	for(i;i<=n;i++) cin>>a[i];				//����ԭ���� step.1
	z=a[1];									//--------------
	for(int j=2;j<=n;j++) a[j-1]=a[j];		//ת������ 
	a[n]=z;									//step.2
	cout<<endl;								//--------------
	for(int y=1;y<=n;y++) cout<<a[y]<<" ";	//������� step.3 
	system("pause");
	return 0;
}
