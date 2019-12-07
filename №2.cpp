#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int x,int y) {
    return x <y;
}
int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i=0; i<n; ++i)
		cin >> arr[i];
	    int x,y;
	    cin >> x >> y;
	    sort(arr.begin(),arr.end(), cmp);
	    if (x>y)
        swap(x, y);
	    int granA =0, granB =n;
	    int unit;
	    bool have =false;
	    while (true) {
        unit =(granA +granB)/2;
		if (arr[unit] >x)
			granB =unit;
		else 
		if (arr[unit] ==x) {
			for(int i =unit; i<n; ++i)
				if (arr[i] ==y) {
					cout <<"дю";
					return 0;
				}
			cout << "мер";
			return 0;
		} else
		granA =unit;
		if (granA ==granB) {
			cout << "мер";
		break;
		}
	}
	return 0;
}