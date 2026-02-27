#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;

string prompter(string a, string* save) {
    string result = "";
    for (int i = 0;i < 30;i++) {
        if (save[i].find(a) != string::npos) {
            result = save[i];
            break;
        }
       
    }
    if (result == "") {
        for (int j = 0; j < 30; j++) {
            if (save[j] == "") {
                save[j] = a;
                result = a;
                break;
            }
        }
    }
    return result;
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string save[30] = {};
    cout << prompter("Why do you cry, Willy?", save) << endl;
    cout << prompter("Why, Willy?", save) << endl;
    cout << prompter("Why do", save) << endl;
}

// как правильно передать длинну массива в циклы функции?