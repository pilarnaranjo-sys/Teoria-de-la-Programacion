# 🧩 Arreglos 

Los **arreglos** son estructuras de datos **estáticas** que permiten almacenar una colección **fija de elementos del mismo tipo**, los cuales se acceden mediante **índices numéricos que comienzan en 0**. Son ideales para manejar listas ordenadas de datos homogéneos de forma eficiente y organizada. 📊💡

🔹 **Tipos de arreglos:**
- 📌 Unidimensionales (vectores)
- 📌 Bidimensionales (matrices)
- 📌 Multidimensionales

---

## 📍 Arreglos Unidimensionales (Vectores)

Representan una **secuencia lineal de elementos**, utilizando un solo índice. Son finitos, homogéneos y permiten un **acceso directo y rápido**. 🚀

### 🧪 Ejemplo en C:

```c
#include <stdio.h>

int main() {
    int lista[5] = {8, 10, 7, 5, 3};

    for(int i = 0; i < 5; i++) {
        printf("Elemento en la posicion %i: %i\n", i, lista[i]);
    }

    return 0;
}
```

## 📍 Arreglos Bidimensionales (Matrices)

Forman **tablas organizadas en filas y columnas**, accedidas mediante dos índices `[fila][columna]`, simulando una **matriz matemática**. 📐📋

### 🧪 Ejemplo en C

```c
#include <stdio.h>

int main() {
    int matriz[3][4] = {
        {1, 5, 8, 3},
        {2, 3, 6, 8},
        {5, 7, 9, 4}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("Fila %i, Columna %i = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
```
## 📍 Arreglos Multidimensionales

Son la **extensión a tres o más dimensiones**, como cubos `[z][y][x]`, útiles para manejar **datos volumétricos y complejos**. 🧊📊

### 🧪 Ejemplo en C (Arreglo tridimensional)

```c
#include <stdio.h>

int main() {
    int tridimensional[2][3][2] = {
        {{1, 2}, {3, 4}, {5, 6}},
        {{7, 8}, {9, 10}, {11, 12}}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                printf("Capa %i, Fila %i, Columna %i = %d\n",
                       i, j, k, tridimensional[i][j][k]);
            }
        }
    }

    return 0;
}

