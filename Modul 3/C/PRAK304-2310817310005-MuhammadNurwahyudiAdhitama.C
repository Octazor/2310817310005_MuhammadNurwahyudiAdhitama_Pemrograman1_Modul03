#include <stdio.h>

int main()
{
    int a;
    printf("Input :");
    scanf("%d", &a);

    if (a == 0)
    {
       printf("Nol");
    }
    else if (a >= 100){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    else if (a<10 || a == 1){
        printf("Satuan");
    }
    else if (a > 20){
        printf("Puluhan");
    }
    else if (a <20 || a > 10){
        printf("Belasan");
    }
}