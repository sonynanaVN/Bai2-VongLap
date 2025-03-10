#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	int sum = 0;
	int dv, ch, tr;
	while(n > 0){
		dv = n % 10;
		sum = sum + dv;
		n = n / 10;
	}
	cout<<"Tong la: "<<sum;
	return 0;
}

