#include <stdio.h>

int main() {
    int totalDetik, hari, jam, menit, detik;

    printf("Masukkan total detik: ");
    scanf("%d", &totalDetik);

    if (totalDetik < 0) {
        printf("Total detik tidak boleh negatif.\n");
    } else {
        hari = totalDetik / 86400;
        totalDetik %= 86400;
        jam = totalDetik / 3600;
        totalDetik %= 3600;
        menit = totalDetik / 60;
        detik = totalDetik % 60;

        if (hari > 0) {
            printf("%d hari ", hari);
        }
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}

