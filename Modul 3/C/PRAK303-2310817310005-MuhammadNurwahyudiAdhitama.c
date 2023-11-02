#include <stdio.h>

int main()
{
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n > 0){
        printf("Positif");
    }
    else if (n < 0){
      
      printf("Negatif");
    }
    else{
        printf("Nol");
    }
}