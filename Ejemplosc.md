# ⚙️ Ejemplos de algoritmos con estructuras lineales / secuenciales

Los **algoritmos secuenciales** o **lineales** son aquellos en los que las instrucciones se ejecutan **de forma ordenada**, una tras otra, sin condiciones ni repeticiones.  
Este tipo de estructura se utiliza cuando el flujo del programa **no requiere decisiones ni ciclos**, es decir, cada paso depende únicamente del anterior.  

A continuación, se presentan **tres ejemplos en lenguaje C** que aplican estructuras secuenciales para resolver distintos problemas prácticos.

---

## 🧮 Ejemplo 1: Conversión de medidas (de pies a yardas, pulgadas, centímetros y metros)

```c
#include <stdio.h>
#include <string.h>

int main() {
    float pie, yardas, pulgadas, centimetros, metros;
    printf("Ingrese la medida en pies:\n");
    scanf("%f", &pie);

    yardas = pie / 3; 
    pulgadas = pie * 12;
    centimetros = pie * 30.48;
    metros = pie / 3.28;

    printf("Valor en yardas: %.2f\n", yardas);
    printf("Valor en pulgadas: %.2f\n", pulgadas);
    printf("Valor en centímetros: %.2f\n", centimetros);
    printf("Valor en metros: %.2f\n", metros);

    return 0;
}
```

---

## 🚗 Ejemplo 2: Cálculo de la aceleración de un cuerpo

```c
#include <stdio.h>
#include <string.h>

int main() {
    float a, vi, vf, t;

    printf("Ingrese el valor de la velocidad inicial (m/s):\n");
    scanf("%f", &vi);

    printf("Ingrese el valor de la velocidad final (m/s):\n");
    scanf("%f", &vf);

    printf("Ingrese el valor del tiempo (s):\n");
    scanf("%f", &t);

    a = (vf - vi) / t;

    printf("La aceleración del cuerpo es: %.2f m/s²\n", a);

    return 0;
}
```

---

## 📏 Ejemplo 3: Cálculo de la distancia entre dos puntos

---

```c
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, d;

    printf("Ingrese las coordenadas del primer punto (x1, y1):\n");
    scanf("%f %f", &x1, &y1);

    printf("Ingrese las coordenadas del segundo punto (x2, y2):\n");
    scanf("%f %f", &x2, &y2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distancia entre los puntos es: %.2f\n", d);

    return 0;
}
```

---

- Estos ejemplos muestran cómo los algoritmos secuenciales permiten ejecutar operaciones paso a paso, asegurando claridad y precisión en la resolución de problemas simples.

