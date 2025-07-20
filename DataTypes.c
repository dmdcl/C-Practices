#include <stdio.h>
#include <stdbool.h> // Si quieres usar booleanos, es necesario agregar esta librería


int main(){

    char a = 'C'; // un solo caracter %c
    char b[] = "sexo"; // arreglo de caracteres %s

    float c = 3.141592; // 4 bytes (32 bits de precision) 6 - 7 digitos %f
    double d = 3.14159265358979323846; //8 bytes (64 bits de precision) 15 - 16 digitos %lf

    bool e = true; // 1 byte (falso o verdadero) %d

    char f = 120; // 1 byte (/128 a +127) %d o %c si usas d es un numero, si usas c es codigo ascii para el caracter
    unsigned char g = 200; // 1 byte (0 a +255) %d o $c

    short int h = 32767; // 2 bytes (-32768 a +32767) %d
    unsigned short int i = 65535; // 2 bytes (0 a +65535) %d

}