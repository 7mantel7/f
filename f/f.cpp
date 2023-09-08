#include <time.h>
#include <iostream>
#include <random>
using namespace std;

int* bublesort(int* list, int len);

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
            int* player = new int[5];
            cout << "Ваши числа: ";
            int l = 0;
            for (int i = 0; i < 5; i++) {
                //player[i] = rand() % 6 + 1;
                player[i] = l++;
                cout << player[i] << " -/- ";
            }
            cout << "\nЧисла ИИ: ";
            int* ai = new int[5];
            for (int i = 0; i < 5; i++) {
                ai[i] = rand() % 6 + 1;
                cout << ai[i] << " -_- ";
            }
            cout << endl;
            if (player[0] + player[1] + player[2] + player[3] + player[4] == player[0] * 5) {
                cout <<"Вы выиграли!" << endl;
            }
            else if (ai[0] + ai[1] + ai[2] + ai[3] + ai[4] == ai[0] * 5) {
                cout << "Вы проиграли!" << endl;
            }
            else {
                player = bublesort(player, 5);
                ai = bublesort(ai, 5);
                if (player[0] + 1 == player[1] && player[1] + 1 == player[2] && player[2] + 1 == player[3] && player[3] + 1 == player[4]) {
                    cout << "Вы выиграли!" << endl;
                }
                else if (ai[0] + 1 == ai[1] && ai[1] + 1 == ai[2] && ai[2] + 1 == ai[3] && ai[3] + 1 == ai[4]) {
                    cout << "Вы проиграли!" << endl;
                }
                else {
                    int player_sum = 0;
                    int ai_sum = 0;
                    for (int i = 0; i < 5; i++) {
                        ai_sum += ai[i];
                        player_sum += player[i];
                    }
                    if (player_sum > ai_sum) {
                        cout << "Вы выиграли!" << endl;
                    }
                    else if (player_sum == ai_sum) {
                        cout << "Ничья!" << endl;
                    }
                    else {
                        cout << "Вы проиграли!" << endl;
                    }
                }
            }
        }
    }
}
int* bublesort(int* list, int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
            }
        }
    }
    return list;
}

