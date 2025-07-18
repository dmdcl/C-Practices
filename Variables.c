#include <stdio.h>
int main() {

    /* variable = es un espacio en memoria al que se le asigna un valor.
       nos referimos al nombre de la variable para acceder a su espacio asignado
       Esa variable se comporta en base al valor que se le asigna
       PERO necesitamos definir el tipo de dato que vamos a almacenar. 
       */
      int x; //declaracion
      x = 123; //inicializacion
      int y = 456; //declaracion e inicializacion

      int age = 22; //entero
      float califacion = 9.5; //decimal
      char letra = 'd'; //un solo caracter
      char nombre[] = "dirgoso"; //arreglo de caracteres

      printf("Hola, %s.\n",nombre);
      printf("la primera letra de tu nombre es: %c\n" ,letra);
      printf("tienes %d anos\t", age);
      printf("y tu calificacion es: %.1f\n",califacion);
return 0;
}