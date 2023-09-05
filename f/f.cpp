#include <time.h>
#include <iostream>
#include <random>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));
    bool flag = true;
    while (flag) {
        string answer;
        cout << "Если хотите бросить кости введите любую цифру кроме 0, для выхода введите 0: " << endl;
        cin >> answer;
        if (answer == "0") {
            flag = false;
        }
        else {
            int a = rand() % 6 + 1;
            cout << "Ваша цифра: " << a << endl;
        }
    }
}

