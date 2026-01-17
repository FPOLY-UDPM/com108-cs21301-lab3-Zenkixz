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
    int sodien;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu hang thang: ");
    scanf("%d", &sodien);    

     if (sodien <= 50) {
        float tien = sodien * 1000;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else if (sodien <= 100) {
        float tien = 50 * 1000 + (sodien - 50) * 1200;
        printf("So tien phai dong: %.2f VND\n", tien);
    } else {
        float tien = 50 * 1000 + 50 * 1200 + (sodien - 100) * 1500;
        printf("So tien phai dong: %.2f VND\n", tien);
    }

    // Xử lý, tính toán VÀ Hiển thị kết quả
    return 0;       
}   