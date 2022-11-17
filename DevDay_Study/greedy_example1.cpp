//Greedy example 1
//BOJ : 5585


#include<iostream>
#include<tuple>
using namespace std;

int main() {

	int amount;

	cin >> amount;

	amount = 1000 - amount;
	int coins[] = { 500, 100, 50, 10, 5, 1 };	//동전 리스트
	int count = 0;

	for (int i = 0; i < 6; i++) {
		
		int temp = (int)(amount/coins[i]);
		count += temp;
		amount -= coins[i] * temp;

	}

	cout << count;

	return 0;
}





