#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float sonuc, landa;
    int eksik, olasilik, i;

    while (1) {
        printf("\nIstenilen olasiligi giriniz: ");
        scanf("%d", &olasilik);
        printf("Ortalama olay sayisini giriniz: ");
        scanf("%f", &landa);

        eksik = 1;
        for (i = 1; i <= olasilik; i++) {
            eksik *= i;
        }

        sonuc = (pow(landa, olasilik) * exp(-landa)) / eksik;

        printf("\nIste dagilimin sonucu: %f\n", sonuc);
    }

    return 0;
}
