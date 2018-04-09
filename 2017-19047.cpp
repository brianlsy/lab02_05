#include <iostream>
#include <vector>

using namespace std;

void main() {
	vector<int> NumberList;

	int num;

	while (cin >> num) {
		NumberList.push_back(num);
	}


	for (auto &i : NumberList) {
		for (auto &j : NumberList) {
			if (i > j) {
				int temp = i;
				i = j;
				j = temp;
			}
		}
	}

	for (auto i : NumberList) {
		cout << i << " ";
	}
	cout << endl;

	system("pause");
}