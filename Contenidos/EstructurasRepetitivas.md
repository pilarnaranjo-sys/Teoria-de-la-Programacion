# 🔁 Estructuras Repetitivas

Las estructuras repetitivas permiten ejecutar uno o varios bloques de instrucciones varias veces, dependiendo de una condición o de un número determinado de iteraciones.  
Son fundamentales para automatizar tareas que requieren repetición dentro de un programa.  

A continuación se explican los tres tipos principales: **for**, **while** y **do…while** :

---

## 🚀 1. Bucle  `for`

El bucle **for** se utiliza cuando se conoce previamente cuántas veces debe repetirse un proceso. Su estructura integra en una sola línea la **inicialización de la variable de control**, la **condición que determina si continúa el ciclo**, y la **actualización** que se ejecuta al finalizar cada iteración. Esto lo convierte en un ciclo ordenado y fácil de manejar, especialmente útil para **recorrer arreglos**, **generar conteos** o realizar **tareas repetitivas bien definidas**.[9]

 ### 🌼 Ejemplo 

Este programa utiliza **dos ciclos for anidados** para pedir al usuario la temperatura de **cada día del año** y de **cada una de las 24 horas del día**.  
Es una forma práctica de recolectar muchos datos usando repetición automática.

---

### 📊 Diagram de flujo

---

![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/428610aebadcac72e9d33ba7699339ba05826c49/Imagenes/Captura%20de%20pantalla%202025-12-09%20022830.png)

---

## 📌 Código en C

```c
#include<stdio.h>

int main() {
    int dia, hora;
    float temperatura;

    for (dia = 1; dia <= 365; dia++) {
        for (hora = 1; hora <= 24; hora++) {
            printf("Ingrese la temperatura del dia %i en la hora %i:\n", dia, hora);
            scanf("%f", &temperatura);
        }
    }

    return 0;
}
```
---

## 🔄 2. Bucle  `while`

El bucle **while** se utiliza cuando no se sabe cuántas veces se repetirá un proceso, ya que su ejecución depende de una **condición que debe evaluarse antes** de entrar en cada iteración. La variable de control debe **declararse e inicializarse antes del ciclo**, y **actualizarse dentro de él** para evitar repeticiones infinitas. Se usa comúnmente en **validación de datos**, **lectura continua**, o procesos que dependen de **condiciones lógicas cambiantes**.[8]

### 🌼 Ejemplo 
Este programa utiliza un bucle while para pedir al usuario 10 números y calcular su suma total. Es una forma sencilla de recolectar varios datos y procesarlos usando repetición automática.

---

### 📊 Diagram de flujo

---

![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/23fb3fc0612df6b446de888b6d26030ef22aa47c/Imagenes/Captura%20de%20pantalla%202025-12-09%20023735.png)

---

## 📌 Código en C

---

```c
#include<stdio.h>

int main() {
    int va;
    int su = 0;
    int c = 1;

    while(c <= 10) {
        printf("Ingrese un valor:\n");
        scanf("%i", &va);

        su = su + va;
        c = c + 1;
    }

    printf("La suma total es: %i\n", su);

    return 0;
}

```

---

## 🔂 3. Bucle  `do…while`

El bucle **do…while** se emplea cuando se necesita que el bloque de instrucciones se ejecute **al menos una vez**, ya que la condición se evalúa al **final del ciclo**. Esto lo hace ideal para **menús interactivos**, **solicitudes repetidas de datos**, o cualquier proceso que requiera una acción inicial antes de verificar la condición. Asegura que el contenido del bloque se ejecute sin importar si la condición es verdadera en la primera iteración.[10]

### 🌼 Ejemplo 
Este programa utiliza un bucle do…while para generar automáticamente la tabla del 2 y mostrar los resultados en pantalla. No requiere que el usuario ingrese ningún valor.

---

### 📊 Diagram de flujo

---

![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/8f91edd1da0496e292e428d4248af6cb8af90d4f/Captura%20de%20pantalla%202025-12-09%20031158.png)

---

## 📌 Código en C

---

```c
#include <stdio.h>

int main() {
    int i, resultado;
    i = 1;

    do {
        i++;
        resultado = 2 * i;
        printf("2 * %d = %d \n", i, resultado);
    } while(i <= 12);

    return 0;
}
```
---
