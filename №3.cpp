#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int Chisla(int n) {
    if (n ==0)
		return 0;
	if (n ==1||n ==2)
		return 1;
	if (n%2 ==0) {
		n /=2;
		return pow(Chisla(n+1), 2) -pow(Chisla(n-1), 2);
	} else {
		--n;
		n /=2;
		return pow(Chisla(n), 2) +pow(Chisla(n+1), 2);
	}
}
int main() {
	int n;
	cin >>n;
	cout <<Chisla(n);
	return 0;
}