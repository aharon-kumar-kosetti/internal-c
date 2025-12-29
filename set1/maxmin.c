#include <stdio.h>
int main() {
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
if (a > b) {
printf("Maximum = %d\n", a);
printf("Minimum = %d\n", b);
} else {
printf("Maximum = %d\n", b);
printf("Minimum = %d\n", a);
}
return 0;
}
