#include <stdio.h>

float calcularPromedio(float arregloNotas[], int tamano) {
   float suma = 0.0; 
   for (int i = 0; i < tamano; i++) {
       printf("notas[%d] %.1f\n", i, arregloNotas[i]);
       suma += arregloNotas[i]; 
   }
   return suma / tamano; 
}
int main (int argc, char *argv[]) {

   float notas[5] = {6.5, 7.1, 8, 6, 5};
   
   float promedio = calcularPromedio(notas, 5);
  
   printf("promedio: %.2f\n", promedio);
   return 0;
}