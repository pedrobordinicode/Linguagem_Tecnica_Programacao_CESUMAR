#include <stdio.h>

int main() {
    double raio, area;

    if (scanf("%lf", &raio) == 1) {
        area = 3.14159 * raio * raio;

        printf("A=%.4f\n", area);
    }

    return 0;
}
