# 🧩 Modularidad

La **modularidad** consiste en dividir un programa grande en módulos pequeños e independientes, cada uno con una función específica, con el fin de facilitar su comprensión, mantenimiento y reutilización. Esta técnica se basa en el principio de **divide y vencerás**, lo que permite reducir la complejidad de los algoritmos y mejorar la organización del código. 🚀

La modularidad se relaciona directamente con el **paso de parámetros**, que es el mecanismo mediante el cual se envían datos desde el programa principal hacia las funciones o subprogramas. Este proceso puede realizarse de dos formas:

---

## 🔹 Paso de parámetros por valor
En este caso, se envía una **copia del dato original**, por lo que los cambios realizados dentro de la función **no afectan** a la variable original.

### 🧪 Ejemplo en C: Paso de parámetros por valor

```c
#include <stdio.h>

void modificarValor(int x) {
    x = 10;
    printf("Valor dentro de la función: %i\n", x);
}

int main() {
    int a = 5;

    modificarValor(a);

    printf("Valor fuera de la función: %i\n", a);

    return 0;
}
```
---
## 🔹 Paso de parámetros por referencia

Se envía la **dirección de memoria** del dato, lo que permite que las modificaciones realizadas dentro de la función **sí alteren** el valor original. Esto facilita la comunicación entre módulos y contribuye a una programación más eficiente, estructurada y clara. 

---

### 🔁 Ejemplo en C: Paso de parámetros por referencia

```c
#include <stdio.h>

void intercambiarValores(int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;

    printf("El valor de x es: %i\n", *x);
    printf("El valor de y es: %i\n", *y);
}

int main() {
    int a = 3;
    int b = 5;

    intercambiarValores(&a, &b);

    printf("El valor de a es: %i\n", a);
    printf("El valor de b es: %i\n", b);

    return 0;
}


    return 0;
}
