#include <iostream>
#include <limits>
using namespace std;

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n == 1 || n == 2) return 1; // F(1) = 1, F(2) = 1
    return fibonacci(n - 1) + fibonacci(n - 2); // F(n) = F(n-1) + F(n-2)
}

int main() {
    int n;

    // Nhập giá trị n và kiểm tra n <= 30
    do {
        cout << "Nhập n (1 <= n <= 30): ";
        cin >> n;

        if (cin.fail() || n <= 0 || n > 30) {
            cin.clear(); // Xóa trạng thái lỗi
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bỏ qua các ký tự không hợp lệ
            cout << "Vui lòng nhập một số nguyên trong khoảng từ 1 đến 30." << endl;
        }
    } while (n <= 0 || n > 30);

    // In ra dãy Fibonacci từ F(1) đến F(n)
    cout << "Dãy Fibonacci từ F(1) đến F(" << n << ") là:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}