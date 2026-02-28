/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int nguyen_am = 0, phu_am = 0;

    printf("Nhap vao mot chuoi: ");
    gets(chuoi, sizeof(chuoi), stdin);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        char c = tolower(chuoi[i]); // chuyển về chữ thường để dễ so sánh
        if (isalpha(c)) { // chỉ xét ký tự chữ cái
            if (c == 'a' || c == 'e' || c == 'i' || 
                c == 'o' || c == 'u' || c == 'y') {
                nguyen_am++;
            } else {
                phu_am++;
            }
        }
    }

    printf("So nguyen am: %d\n", nguyen_am);
    printf("So phu am: %d\n", phu_am);

    return 0;
}

