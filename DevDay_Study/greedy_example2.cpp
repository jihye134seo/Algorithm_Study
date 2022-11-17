//Greedy example 2
//큰 수의 법칙 : [이것이 취업을 위한 코딩테스트다] p.92

#include <iostream>
#include <algorithm>
#include <String>
#include <vector>
using namespace std;

int main() {


	int n, m, k;

	cin >> n >> m >> k;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	sort(arr.begin(), arr.end());

	int sum = 0;

	int temp = k;

	for (int i = 0; i < m; i++) {
		if (temp > 0) {
			sum += arr[arr.size() - 1];
			temp--;
		}
		else {
			sum += arr[arr.size() - 2];
			temp = k;
		}
		
	}

	cout << sum;


	

	return 0;
}
