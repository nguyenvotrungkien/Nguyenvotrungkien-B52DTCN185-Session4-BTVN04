#include <stdio.h>

int main() {
    int ngay, thang, nam;
    int hopLe = 1; // Gi? s? ban d?u là h?p l?

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Ki?m tra tháng h?p l?
    if (thang < 1 || thang > 12) {
        hopLe = 0;
    } else {
        int soNgayTrongThang;

        // Xác d?nh s? ngày trong tháng
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || 
            thang == 8 || thang == 10 || thang == 12) {
            soNgayTrongThang = 31;
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            soNgayTrongThang = 30;
        } else { // Tháng 2
            // Ki?m tra nam nhu?n
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                soNgayTrongThang = 29;
            else
                soNgayTrongThang = 28;
        }

        // Ki?m tra ngày h?p l?
        if (ngay < 1 || ngay > soNgayTrongThang)
            hopLe = 0;
    }

    if (hopLe)
        printf("Ngay thang nam hop le\n");
    else
        printf("Ngay thang nam khong hop le\n");

    return 0;
}

