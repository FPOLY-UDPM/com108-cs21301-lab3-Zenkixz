/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    
    // Khai báo biến
    int choice;

    // Nhập dữ liệu
    printf("Menu:\n");
    printf("1. Tinh hoc luc\n");

    // Xử lý, tính toán VÀ Hiển thị kết quả
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Giai phuong trinh bac 2\n"); 
    printf("4. Tinh tien dien\n");
    printf("Nhap lua chon cua ban (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            // Gọi hàm hoặc đoạn mã tính học lực
            printf("Ban da chon tinh hoc luc.\n");
            break;
        case 2:
            // Gọi hàm hoặc đoạn mã giải phương trình bậc 1
            printf("Ban da chon giai phuong trinh bac 1.\n");
            break;
        case 3:
            // Gọi hàm hoặc đoạn mã giải phương trình bậc 2
            printf("Ban da chon giai phuong trinh bac 2.\n");
            break;
        case 4:
            // Gọi hàm hoặc đoạn mã tính tiền điện
            printf("Ban da chon tinh tien dien.\n");
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }   
}   