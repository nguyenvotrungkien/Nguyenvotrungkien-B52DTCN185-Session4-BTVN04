#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDien;
    long tienDien;

    printf("Nhap chi so cong to dien cu: ");
    scanf("%d", &chiSoCu);

    printf("Nhap chi so cong to dien moi: ");
    scanf("%d", &chiSoMoi);

    if (chiSoMoi < chiSoCu) {
        printf("Chi so moi khong hop le!\n");
        return 0;
    }

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 50) {
        tienDien = soDien * 10000;
    } else if (soDien < 100) {
        tienDien = soDien * 15000;
    } else if (soDien < 150) {
        tienDien = soDien * 20000;
    } else if (soDien < 200) {
        tienDien = soDien * 25000;
    } else {
        tienDien = soDien * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %ld VND\n", tienDien);

    return 0;
}

