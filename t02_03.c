// 12S25024 - Veybe Youlanda K M Simanjuntak

#include <stdio.h>

// Struct untuk menyimpan operasi
struct Operasi {
    char op;
    int hasil;
};

int main(int _argv, char **_argc)
{
    struct Operasi operasi;
    int angka;
    int count = 0;

    scanf(" %c", &operasi.op);

    if (operasi.op == '*') {
        operasi.hasil = 1;
    } else {
        operasi.hasil = 0;
    }

    printf("%c\n", operasi.op);

    while (count < 5) {
        scanf("%d", &angka);

        if (angka == -1) {
            printf("-1\n");
            printf("0\n");
            break;
        }

        printf("%d\n", angka);

        if (operasi.op == '+') {
            operasi.hasil += angka;
        } else if (operasi.op == '-') {
            operasi.hasil -= angka;
        } else if (operasi.op == '*') {
            operasi.hasil *= angka;
        }

        printf("%d\n", operasi.hasil);

        count++;

        if (count == 5) {
            break;
        }
    }

    return 0;
}
