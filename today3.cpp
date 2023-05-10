#include<bits/stdc++.h>
using namespace std;

int main (){
	ofstream f;		//mo file moi va ghi du lieu
	f.open("D:\\test1.dat");
	int n; cin>>n;
	f<<n<<endl; 
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		f<<a[i]<<" ";
	}

}
