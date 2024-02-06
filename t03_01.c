// 12S23024 - Eska Natasia Silaen

#include <stdio.h>

int main(int _argc, char **_argv)
{

    int n, angka;
    int min = 100;
    int max = -100;

    scanf("%d", &angka);

    for(int n = 0; n <100 ; n++) {

        if(angka < min) {
            min = angka;
        }

        if(angka > max) {
            max = angka;
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}