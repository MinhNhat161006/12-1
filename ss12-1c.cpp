#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Nhập hai số: ");
    scanf("%d %d", &x, &y);
    printf("Tổng: %d\n", tinhTong(x, y));
    return 0;
}
