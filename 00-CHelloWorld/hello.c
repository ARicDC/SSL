#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char cadena[20];
    FILE *archivo;

    strcpy(cadena, "Hola mundo\n");
    
    printf(cadena);

    if((archivo = fopen("output.txt", "a+")) == NULL){
        fprintf(stderr, "No se pudo interactuar con el archivo");
        abort();
    }

    fprintf(archivo, cadena);
    fclose(archivo);
    return 0;
}