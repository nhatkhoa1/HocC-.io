#include<bits/stdc++.h>
using namespace std;

int main (){
	ifstream f("D:\\test1.dat"); 
	int n;
	f>>n; 
	int a[n];
	for(int i=0;i<n;i++){
		f>>a[i]; // 
	}
	f.close();

	cout << " tong Cac so nguyen le trong file la: ";
	double sum=a[0]; 
	for(int i=0;i<n;i++){
		if(a[i]%2 == 1){ // tính t?ng các s? nguyên l?
         sum += a[i];
        }
	}
	cout <<sum<<endl;
	cout << " tong Cac so nguyen lon nhat trong file la: ";
	int max=a[0]; 
	for(int i=0;i<n;i++){
		if(a[i]>max){ // tính t?ng các s? nguyên l?
         max=a[i]; 
        }
	}
	cout << max<<endl; 
	cout << " tong Cac so nguyen giam dan nhat trong file la: ";
    int temp = 0;
    for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i] < a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp; 
        }
          
    }
  
} 
	return 0;
}












