//Greedy example 3
//���� ī�� ���� : [�̰��� ����� ���� �ڵ��׽�Ʈ��] p.96

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	int n, m;
	
	cin >> n >> m;

	vector<int*> arr;

	for (int i = 0; i < n; i++) {
	
		arr.push_back(new int[m]);

		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
		sort(arr[i], arr[i] + m);
	}

	
	int biggest = arr[0][0];
	for (int i = 0; i < n; i++) {
	
		if (biggest < arr[i][0]) {
			biggest = arr[i][0];
		}
	}

	cout << biggest;


	return 0;
}