#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n, x;
	cout << "우선순위 큐의 길이: ";
	cin >> n;
	priority_queue<int> pq;
	cout << "우선순위 큐에 넣을 원소: ";
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
