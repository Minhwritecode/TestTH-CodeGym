#include <iostream>
using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
int laSoNguyenTo(int so) {
    if (so < 2) return 0; // Các số nhỏ hơn 2 không phải là số nguyên tố
    for (int i = 2; i * i <= so; i++) {
        if (so % i == 0) return 0; // Không phải số nguyên tố
    }
    return 1; // Là số nguyên tố
}

int main() {
    int n;
    cout << "Nhập số nguyên dương n: ";
    cin >> n;

    // Kiểm tra nếu n không phải là số nguyên dương
    if (n <= 0) {
        cout << "Vui lòng nhập số nguyên dương." << endl;
        return 1;
    }

    // Xử lý trường hợp n <= 2
    if (n <= 2) {
        cout << "Không có số nguyên tố nào nhỏ hơn " << n << "." << endl;
        return 0;
    }

    // In ra tất cả các số nguyên tố nhỏ hơn n
    cout << "Các số nguyên tố nhỏ hơn " << n << " là:" << endl;
    for (int i = 2; i < n; i++) {
        if (laSoNguyenTo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}