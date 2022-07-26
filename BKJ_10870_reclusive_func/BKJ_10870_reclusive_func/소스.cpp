#include <iostream>
using namespace std;
int arr[21];
int fibo(int num) {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= num; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr[num];
}
int main() {
	int n;
	cin >> n;
	cout << fibo(n);
}