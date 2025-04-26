#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;

    // Kiểm tra và yêu cầu nhập n > 0
    do {
        cout << "Nhập số lượng phần tử của mảng (n > 0): ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cin.clear(); // Xóa trạng thái lỗi
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bỏ qua các ký tự không hợp lệ
            cout << "Vui lòng nhập một số nguyên dương lớn hơn 0." << endl;
        }
    } while (n <= 0);

    vector<int> arr(n);
    cout << "Nhập " << n << " số nguyên:" << endl;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Tìm số lớn nhất chia hết cho 3
    int maxDivisibleBy3 = -1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            if (!found || arr[i] > maxDivisibleBy3) {
                maxDivisibleBy3 = arr[i];
                found = true;
            }
        }
    }

    // In kết quả
    if (found) {
        cout << "Số lớn nhất chia hết cho 3 là: " << maxDivisibleBy3 << endl;
    } else {
        cout << "Không có" << endl;
    }

    return 0;
} 