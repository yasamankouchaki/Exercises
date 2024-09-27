#include <iostream>
using namespace std;

struct Calculator {
    float num1; // عدد اول
    float num2; // عدد دوم

    // تابع برای جمع
    float add() {
        return num1 + num2;
    }

    // تابع برای تفریق
    float subtract() {
        return num1 - num2;
    }

    // تابع برای ضرب
    float multiply() {
        return num1 * num2;
    }

    // تابع برای تقسیم
    float divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "خطا: تقسیم بر صفر!" << endl;
            return 0; // یا می‌توانید از throw استفاده کنید
        }
    }
};

int main() {
    Calculator calc;
    char operation;
    char continueCalc;

    do {
        // دریافت اعداد از کاربر
        cout << "لطفاً دو عدد وارد کنید: ";
        cin >> calc.num1 >> calc.num2;

        // انتخاب عملیات
        cout << "عملیات را انتخاب کنید (+, -, *, /): ";
        cin >> operation;

        // انجام عملیات بر اساس انتخاب کاربر
        switch (operation) {
            case '+':
                cout << "نتیجه: " << calc.add() << endl;
                break;
            case '-':
                cout << "نتیجه: " << calc.subtract() << endl;
                break;
            case '*':
                cout << "نتیجه: " << calc.multiply() << endl;
                break;
            case '/':
                cout << "نتیجه: " << calc.divide() << endl;
                break;
            default:
                cout << "عملیات نامعتبر!" << endl;
        }

        // پرسش از کاربر برای ادامه یا خاتمه
        cout << "آیا می‌خواهید محاسبه دیگری انجام دهید؟ (y/n): ";
        cin >> continueCalc;
    } while (continueCalc == 'y' || continueCalc == 'Y');

    return 0;
}