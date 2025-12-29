#include <stdio.h>
int main() {
char src[100], dest[100];
int i = 0, count = 0;
printf("Enter a string: ");
scanf("%s", src);
while (src[i] != '\0') {
dest[i] = src[i];
count++;
i++;
}
dest[i] = '\0';
printf("Copied string: %s\n", dest);
printf("Number of characters copied: %d\n", count);
return 0;
}
