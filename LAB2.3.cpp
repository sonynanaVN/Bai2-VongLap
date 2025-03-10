#include<iostream>
using namespace std;
int main(){
	int n, tam, sum = 0, r;
	cout<<"Nhap n: ";
	cin>>n;
	tam = n;
	while(n > 0){ 
		r = n % 10;
		sum = (sum * 10) + r;
		n = n / 10;
	}
	if(tam == sum){
		cout<<"So ban da nhap la so Palidrome!";
	}else{
		cout<<"So ban da nhap khong phai la so Palidrome!";
	}
	return 0;
}
