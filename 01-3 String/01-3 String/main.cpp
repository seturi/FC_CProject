#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// �ڷ��� ��ȯ
	int i = 123;
	string s = to_string(i);
	cout << "���� -> ���ڿ�: " << s << endl;
	s = "456";
	i = stoi(s);
	cout << "���ڿ� -> ����: " << i << endl;

	// getline(): ���� ���� ���� ��� �Է�
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}
	system("pause");
	return 0;
}
