// 12S25024 - Veybe Youlanda K M Simanjuntak

#include <stdio.h>

struct Makanan {
    char nama[50];
};

int main(int _argv, char **_argc)
{
    int level;

    // Inisialisasi data menggunakan struct
    struct Makanan staple = {"staple food"};
    struct Makanan side = {"side dishes"};
    struct Makanan veg = {"vegetables"};
    struct Makanan fruit = {"fruits"};
    struct Makanan milk = {"milk"};

    scanf("%d", &level);

    switch(level) {
        case 1:
            printf("%s\n", staple.nama);
            printf("you need side dishes\n");
            break;

        case 2:
            printf("%s\n", side.nama);
            printf("%s\n", staple.nama);
            printf("you need vegetables\n");
            break;

        case 3:
            printf("%s\n", veg.nama);
            printf("%s\n", side.nama);
            printf("%s\n", staple.nama);
            printf("good\n");
            break;

        case 4:
            printf("%s\n", fruit.nama);
            printf("%s\n", veg.nama);
            printf("%s\n", side.nama);
            printf("%s\n", staple.nama);
            printf("very good\n");
            break;

        case 5:
            printf("%s\n", milk.nama);
            printf("%s\n", fruit.nama);
            printf("%s\n", veg.nama);
            printf("%s\n", side.nama);
            printf("%s\n", staple.nama);
            printf("perfect\n");
            break;
    }

    return 0;
}
