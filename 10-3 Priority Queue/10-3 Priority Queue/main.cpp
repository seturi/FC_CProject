#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n, x;
	cout << "�켱���� ť�� ����: ";
	cin >> n;
	priority_queue<int> pq;
	cout << "�켱���� ť�� ���� ����: ";
	for (int i = 0; i < n; i++) {
		cin >> x;
		pq.push(x);
	}
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
	system("pause");
}
