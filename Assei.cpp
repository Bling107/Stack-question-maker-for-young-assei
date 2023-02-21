#include<iostream>
#include<fstream>
#include <string>
#include<Windows.h>

using namespace std;

string question;
int stack_cnt;
string stackq1;
string stackq2[119];
int i;


int main() {
		
		setlocale(LC_ALL, "");

		ifstream stack; //파일 오픈
		stack.open("69중첩의문문.txt", ifstream::in); //열기 모드

		while (getline(stack, stackq1)) {
				stackq2[i] = stackq1;
				i++;

		}
		stack.close();

		cout << "질문을 입력하고 엔터를 친후 중첩의문문의 수를 입력하세요!" << endl;
		cin >> question;
		cin >> stack_cnt;

		cout << question;
		for (int l = 0; l < stack_cnt; l++) {
			cout << stackq2[l];

		}
		

		if (stack_cnt < 118) {
			cout <<"를 감히 제가 알아도 되겠습니까?";
			return 0;
		}
		else {
			return 0;
		}

}