//Greedy example 4
//1�� �� ������ : [�̰��� ����� ���� �ڵ��׽�Ʈ��] p.99

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

	int n, k, count=0;

	cin >> n >> k;


	for (int i = 0; i < n; i++) {
		
		if (n % k == 0) {
			n = n / k;
		}
		else {
			n = n - 1;
		}
		count++;
		
	}

	cout << count;


	return 0;
}