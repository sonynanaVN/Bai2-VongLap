#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, tam, sum = 0, r, dem = 0;
    
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n < 0);

    tam = n;
    
    while (n > 0) {
        r = n % 10;
        dem++;
        n /= 10;
    }
    
    n = tam;
    
    while (n > 0) {
        r = n % 10;
        sum += pow(r, dem);
        n /= 10;
    }
    
    if (tam == sum) {
        cout << tam << " la so Armstrong!";
    } else {
        cout << tam << " khong phai la so Armstrong!";
    }
    
    return 0;
}
