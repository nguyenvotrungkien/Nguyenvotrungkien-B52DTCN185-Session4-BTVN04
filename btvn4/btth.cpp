#include <stdio.h>

int main() {
    int namSinh;
    float diemTB;
    int namHienTai = 2025;  // Có th? c?p nh?t theo nam hi?n t?i
    int tuoi;

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    // Ki?m tra nam sinh h?p l?
    if (namSinh <= 1900 || namSinh > namHienTai) {
        printf("Nam sinh khong hop le\n");
        return 0;
    }

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // Tính tu?i
    tuoi = namHienTai - namSinh;

    // In thông tin sinh viên
    printf("\nThong tin sinh vien:\n");
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);

    // X?p lo?i h?c l?c
    if (diemTB < 5.0)
        printf("Hoc luc: Yeu\n");
    else if (diemTB < 6.5)
        printf("Hoc luc: Trung binh\n");
    else if (diemTB < 8.0)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");

    // Ki?m tra d? 18 tu?i
    if (tuoi >= 18)
        printf("Trang thai: Du 18 tuoi\n");
    else
        printf("Trang thai: Chua du 18 tuoi\n");

    return 0;
}

