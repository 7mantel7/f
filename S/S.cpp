#include <iostream>
#include <random>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	bool flag = true;
	string phrase;
	string* phrase_list = new string[5]{ "На чиле, на расслабоне", "Нет ничего важнее семьи", "Как тебе такое, Илон Маск", "Ясненько", "Понятненько" };

	while (flag) {
		cout << "Введите команду: ";
		getline(cin, phrase);
		if (phrase == "Привет") {
			cout << "Привет, дружочек" << endl;
		}
		else if (phrase == "Пока") {
			cout << "Ну пока :(" << endl;
			flag = false;
		}
		else {
			int a = rand() % 5;
			cout << phrase_list[a] << endl;
		}
	}

};