#include <iostream>
using namespace std;
long long power(long long a, long long b) {
    long long result = 1;
    for(int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
 }
int main() {
    long long a, b, result;
    printf("\nNhap so a = ");
	scanf("%d",&a);
	printf("\nNhap so n = ");
	scanf("%d",&b);
	printf("\nLuy thua = ");
    result = power(a, b);
    cout << result << endl;
}
