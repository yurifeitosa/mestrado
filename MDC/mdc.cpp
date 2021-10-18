#include <stdio.h>

int MDC(int a, int b){
  int resto;
  while(b != 0){
    resto = a % b;
    a = b;
    b = resto;
  }
  return a;
}

int main() {
   int a=0, b = 0;   
   scanf("%d %d", &a, &b);
   printf("MDC(%d,%d) = %d\n", a, b, MDC(a,b));
   }
