#include <stdio.h>
int main(void)
{
  float length, width;
  printf("Enter the length of the rectangle: ");

  while (scanf("%f", &length) == 1) {
    printf("Length = %.2f.\n", length);
    printf("Enter its width: ");
    if (scanf("%f", &width) != 1)
      break;
    printf("Width = %.2f;\n", width);
    printf("Area = %.2f; \n", length * width);
    printf("Enter the length of the rectangle: ");
  }
  printf("Done.\n");
  return 0;
}
