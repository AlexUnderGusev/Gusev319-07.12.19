#include <iostream>
using namespace std;
int main() {
	double n, granB, granA;
	cin >> n;
	for (int j=1; true; ++j) 	{
		if (j*j >n) {
    	granB =j;
		granA = j-1;
		break;
        } else 
        if (j*j ==n) {
		cout << j;
    	return 0;
		}
	}
	double unit;
	for (int j=0; j<20; ++j) {
		unit =(granA +granB)/2;
		if (unit*unit >n)
		granB =unit;
		else if (unit*unit ==n)
		break;
		else
		granA =unit;
	}
	cout << unit;
	return 0;
}