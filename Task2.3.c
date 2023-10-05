#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int i, j, n, b, f;
    int a[n];
    printf("Input number of elements in mass and I`ll sort it!\n");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        a[i] = 0 + rand() % 256;
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i=n-1;i>=0;i--) {
        f = 0;
        for (j=0;j<i;j++) {
            if (a[j]>a[j+1]) {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
                f = 1;
            }
        }
    }
printf("Result:\n");
for (i=0;i<n;i++) {
    printf("%d ", a[i]);
}
printf("\n");
}
