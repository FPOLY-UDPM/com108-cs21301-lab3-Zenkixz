/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax^2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>
int main(){
    
    // Khai báo biến
    float a, b, c;

    // Nhập dữ liệu
    printf("Nhap he so a: ");
    scanf("%f", &a);    

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0) {
        float x = -c / b;
        printf("Phuong trinh co nghiem x = %.2f\n", x);
    } else {
        printf("Nhap he so b: ");
        scanf("%f", &b);    
        printf("Nhap he so c: ");
        scanf("%f", &c);    
        
        float delta = b * b - 4 * a * c;
        
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt (delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }  return 0;         
}