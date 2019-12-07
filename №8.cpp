#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Statistika(vector<int> arr, int k) {
	int left =0, right =arr.size();
	while (left <right) {
		int mid =(left +right)/2;
		if (mid ==k)
			return arr[mid];
		else if (k <mid)
			right =mid;
		else
			left =mid +1;
	}
	return 0;
}
int main() {
	int n,k;
	cin >> n>> k;
	vector<int> arr(n);
	for (int j=0; j<n; ++j)
		cin >> arr[j];
	cout <<Statistika(arr,k);
	return 0;
}