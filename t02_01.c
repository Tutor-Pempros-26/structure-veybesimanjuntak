// 12S25024 - Veybe Youlanda K M Simanjuntak

#include <stdio.h>

int main(int _argv, char **_argc)
{
    int jumlah;
    double harga, total, diskon = 0, total_bayar;

    // Input
    scanf("%d", &jumlah);
    scanf("%lf", &harga);

    total = jumlah * harga;

    if (total > 500000) {
        diskon = 0.15 * total;
    } else if (total >= 100000) {
        diskon = 0.10 * total;
    } else if (total > 50000) {
        diskon = 0.05 * total;
    } else {
        diskon = 0;
    }

    total_bayar = total - diskon;

    // Output
    if (diskon == 0) {
        printf("---\n");
    } else {
        printf("%.2lf\n", diskon);
    }

    printf("%.2lf\n", total_bayar);

    return 0;
}
