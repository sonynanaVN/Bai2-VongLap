#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, dec = 0, p = 1;
	do{
		cout<<"Nhap so nguyen a he thap phan: ";
		cin>>n;
	}while(n < 0);
	int tam = n; 
    while (n > 0) {
        dec = dec + (n % 2) * p;
        n = n / 2;
        p = p * 10; 
    }
    cout <<"So nhi phan cua "<<tam<<" la: "<<dec;
	return 0;
}
