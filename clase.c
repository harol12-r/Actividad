#include <stdio.h>

//float calcularPromedioxRef(float *ptr);
int main (int argc, char *argv[]) {
   
   float notas[5] = {6.5, 7.1, 8, 6, 5};
   
   printf("promedio: %.2f\n", calcularPromedioxRef(notas));
   return 0;
}

float calcularPromedioxRef(float *ptr) {
   float suma = 0; 
   for (int i = 0; i < 5; i++) {
       printf("notas[%d] %.1f\n", i, ptr[i]); 
       suma += ptr[i];
   }
   float promedio = suma / 5.0f;
   return promedio;
}