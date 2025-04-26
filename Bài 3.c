#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Khai báo struct SinhVien
struct SinhVien {
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTrungBinh;
};

// Hàm tính điểm trung bình
void tinhDiemTrungBinh(SinhVien &sv) {
    sv.diemTrungBinh = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3;
}

// Hàm nhập danh sách sinh viên
void nhapDanhSachSinhVien(vector<SinhVien> &danhSach, int n) {
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        cout << "Nhập thông tin sinh viên thứ " << i + 1 << ":" << endl;
        cout << "Tên: ";
        cin.ignore(); // Xóa bộ đệm trước khi nhập chuỗi
        getline(cin, sv.ten);
        cout << "Điểm Toán: ";
        cin >> sv.diemToan;
        cout << "Điểm Lý: ";
        cin >> sv.diemLy;
        cout << "Điểm Hóa: ";
        cin >> sv.diemHoa;
        tinhDiemTrungBinh(sv);
        danhSach.push_back(sv);
    }
}

// Hàm in danh sách sinh viên có điểm trung bình >= 8
void inSinhVienDiemCao(const vector<SinhVien> &danhSach) {
    cout << "\nDanh sách sinh viên có điểm trung bình >= 8:" << endl;
    for (const auto &sv : danhSach) {
        if (sv.diemTrungBinh >= 8) {
            cout << "Tên: " << sv.ten << ", Điểm TB: " << sv.diemTrungBinh << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhập số lượng sinh viên: ";
    cin >> n;

    // Kiểm tra n > 0
    if (n <= 0) {
        cout << "Số lượng sinh viên phải lớn hơn 0." << endl;
        return 1;
    }

    vector<SinhVien> danhSach;
    nhapDanhSachSinhVien(danhSach, n);
    inSinhVienDiemCao(danhSach);

    return 0;
}
