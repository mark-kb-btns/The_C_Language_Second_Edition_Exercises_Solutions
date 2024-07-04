#include <stdio.h>

main() {
    printf("Fahrenheit\tCelsius\n");
for(int fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%d\t\t%.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
