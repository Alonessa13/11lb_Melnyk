#include <iostream>
#include <regex>
using namespace std;
#include <windows.h>
struct Registration {
    string login;
    string password;
    string email;
    void checkPassword() {
        regex strong("^(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.*[@#$%^&+=]).{8,}$");
        if (regex_match(password, strong)) {
            cout << "Пароль надійний!" << endl;
        }
        else {
            cout << "Пароль ненадійний. Використовуйте великі літери, цифри, символи та мінімум 8 символів." << endl;
        }
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Registration user;
    cout << "Введіть логін: ";
    cin >> user.login;
    cout << "Введіть пароль: ";
    cin >> user.password;
    cout << "Введіть email: ";
    cin >> user.email;
    user.checkPassword();
    return 0;
}
