#include <iostream>

using namespace std;

int main() {
    // 整形
    // 1. 短整形 -2^15 - 2^15 -1

    short num1 = 10;

    // 2. 整形 -2^31 - 2^31-1

    int num2 = 10;

    // 3. 长整形

    long num3 = 10;

    // 4. 长长整形 -2^63 - 2^63-1

    long long num4 = 10;

    cout << "short" << num1 << endl;
    cout << "int" << num2 << endl;
    cout << "long" << num3 << endl;
    cout << "long long" << num4 << endl;

    // 小数

    // 1.float 7位有效数字 4 字节

    float f1 = 3.14f;

    // 2.double 15 - 16 位有效数字 8字节

    double d1 = 3.14;

    // 科学计数法
    // 3 * 10 ^ 2
    float f2 = 3e2;
    // 3 * 0.1 ^ 2
    float f3 = 3e-2;

    cout << "float =" << f1 << endl;

    cout << "double =" << d1 << endl;


    cout << "float f2 = " << f2 << endl;
    cout << "float f3 = " << f3 << endl;


    cout << "hello world" << endl;
}