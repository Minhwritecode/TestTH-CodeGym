#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    cout << "Nhập số lượng phần tử của mảng (n > 0): ";
    cin >> n;

    // Kiểm tra n > 0
    if (n <= 0) {
        cout << "Số lượng phần tử phải lớn hơn 0." << endl;
        return 1;
    }

    int arr[n];
    cout << "Nhập " << n << " phần tử của mảng:" << endl;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sử dụng set để lưu các giá trị phân biệt
    set<int> distinctValues;
    for (int i = 0; i < n; i++) {
        distinctValues.insert(arr[i]);
    }

    // In ra số lượng các giá trị phân biệt
    cout << "Số lượng các giá trị phân biệt trong mảng là: " << distinctValues.size() << endl;

    return 0;
}