#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 자료형 변환
	int i = 123;
	string s = to_string(i);
	cout << "정수 -> 문자열: " << s << endl;
	s = "456";
	i = stoi(s);
	cout << "문자열 -> 정수: " << i << endl;

	// getline(): 공백 포함 한줄 모두 입력
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}
	system("pause");
	return 0;
}
