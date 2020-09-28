#include<stdio.h>
 
int main() {
   float a, r;
 
   printf("Ingresa el radio del circulo: ");
   scanf("%f", &r);
 
   a = r * r *3.14;
   printf("\nArea del circulo es : %f", a);
 
   return (0);
}
