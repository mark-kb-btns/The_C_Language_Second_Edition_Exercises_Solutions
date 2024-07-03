#include <stdio.h>

float main() {
        float fahr, celsius;
        float lower, upper, step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        printf("%3s %9s\n", "Celsius", "Fahrenheit");
        while (fahr <= upper) {
                celsius = (5.0/9.0) * (fahr-32.0);
                printf("%3.0f %14.1f\n", celsius, fahr);
                fahr = fahr + step;
        }
        return 0;
}
