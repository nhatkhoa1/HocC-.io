#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ten;
	string ngaysinh;
	float diemmon1,diemmon2,diemmon3; 
};
void Nhap(SinhVien&N){
	getline(cin,N.ten);
	cin>>N.ngaysinh;
	cin>>N.diemmon1>>N.diemmon2>>N.diemmon3;
}
void In(SinhVien N){
	float a=N.diemmon1+N.diemmon2+N.diemmon3;
	cout << N.ten << " "<<N.ngaysinh<<" " <<a<<endl;
}
int main() {
    SinhVien N;
    Nhap(N);
    In(N);
    return 0;
}

