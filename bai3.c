/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int kWh;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu hang thang: ");
    scanf("%d", &kWh);      
     if (kWh <= 50) {
        float tien = kWh * 1.678;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (kWh <= 100) {
        float tien = 50 * 1.678 + (kWh - 50) * 1.734;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (kWh > 100) {
        float tien = 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (kWh > 200) {
        float tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (kWh > 300) {
        float tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (kWh > 400) {
        float tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kWh - 400) * 2.927;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else {
        printf("So dien tieu thu khong hop le.\n");
    }       

    // Xử lý, tính toán VÀ Hiển thị kết quả 
    return 0;             
}   