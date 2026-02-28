/******************************************************************************
 * Họ và tên: [Huỳnh Khánh Nam]
 * MSSV:      [PS43500]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[5][100];   
    char temp[100];       // biến tạm để hoán đổi
    int i, j;

    // Nhập 5 chuỗi
    printf("Nhap 5 chuoi bat ky:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        fgets(chuoi[i], sizeof(chuoi[i]), stdin);

        // Xóa ký tự xuống dòng nếu có
        size_t len = strlen(chuoi[i]);
        if (len > 0 && chuoi[i][len - 1] == '\n') {
            chuoi[i][len - 1] = '\0';
        }
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái (bubble sort)
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(chuoi[i], chuoi[j]) > 0) {
                strcpy(temp, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], temp);
            }
        }
    }

    // In kết quả sau khi sắp xếp
    printf("\nThu tu cac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", chuoi[i]);
    }

    return 0;
}
