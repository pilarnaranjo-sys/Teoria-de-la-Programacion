# 🌼 Estructuras Condicionales

## ✨ `If Simple `

El condicional **if** ejecuta un bloque de código solo cuando una condición es verdadera, permitiendo tomar decisiones simples dentro del programa **[2]**. Puede funcionar por sí solo o como base para estructuras más complejas cuando se necesitan varias verificaciones.

---

 ### 🌼 Ejemplo 
 
El programa pide al usuario ingresar un número y usa un if simple para determinar si es positivo. Si la condición se cumple, muestra un mensaje; si no, simplemente termina sin mostrar nada adicional.

### 📊 Diagram de flujo
---
![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/fc8a132b122821e39781f2416dc9235e2e821ccd/Imagenes/Programacion.b.png)

---
### 💻 Codigo en C

---

```c
#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un número: ");
    scanf("%d", &num);
    getchar();

    if (num > 0) {
        printf("El número es positivo.\n");
    }
    if (num < 0) {
        printf("El número es negativo.\n");
    }
    if (num == 0) {
        printf("El número es cero.\n");
    }
    return 0;
}
```

---
## 🌿 `If–Else`

El condicional **if–else** permite elegir entre dos rutas posibles dependiendo de si una condición es verdadera o falsa **[2]**. Si la condición del **if** se cumple, se ejecuta el primer bloque; de lo contrario, se ejecuta el bloque **else**, garantizando que siempre se seleccione una de las dos opciones.

 ---
 ### 🌼 Ejemplo 

El programa solicita la edad del usuario y usa un if–else para comprobar si es mayor o menor de edad. Solo una de las dos opciones se ejecutará.

### 📊 Diagram de flujo

---
### 💻 Codigo en C

---

```c
#include <stdio.h>
int main(){
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18){
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }
    return 0;
}
```

---

## 🌸 `Switch`
La instrucción **switch** es una estructura de decisión que compara una variable con varios valores y ejecuta el bloque correspondiente cuando encuentra una coincidencia **[1]**. Cada **case** representa una opción específica y, si ninguna coincide, se utiliza **default** como alternativa. Además, permite usar patrones constantes o relacionales y condiciones adicionales con **when**, y cada caso debe finalizar con `break`, `goto` o `return` para evitar continuar hacia otros casos **[2]**.

---

### 🌼 Ejemplo 
El programa pide al usuario ingresar un número del **1 al 7** y, mediante la estructura `switch`, identifica qué día de la semana corresponde a ese número.

### 📊 Diagram de flujo

---

### 💻 Codigo en C

---

```c
#include<stdio.h> 
int main(){
    int dia;
    printf("Ingrese el dia de la semana en numero del 1 al 7\n");
    scanf("%i", &dia);
    getchar();

    switch(dia){
        case 1: printf("Es lunes\n"); break;
        case 2: printf("Es martes\n"); break; 
        case 3: printf("Es miercoles\n"); break;
        case 4: printf("Es jueves\n"); break;
        case 5: printf("Es viernes\n"); break;
        case 6: printf("Es sabado\n"); break;
        case 7: printf("Es domingo\n"); break;
        default: printf("Numero no valido\n"); break;
    }
    return 0;
}
```
