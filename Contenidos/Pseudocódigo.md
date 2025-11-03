# 🧮 **Algoritmos, Diagramas de Flujo y Pseudocódigo**

---

## ⚙️ **Algoritmo**

Un **algoritmo** es un conjunto de **pasos ordenados y precisos** que permiten resolver un problema o realizar una tarea específica.  
Todo algoritmo tiene **entrada**, **proceso** y **salida**, y debe cumplir con ciertas características: ser **claro, definido, finito, válido, eficiente y legible** [1].  

> **Ejemplo 1:** Calcular el área de un triángulo a partir de su base y su altura.  
> **Ejemplo 2:** Calcular la longitud (perímetro) y el área de un círculo con un radio dado.  
> **Ejemplo 3:** Calcular el promedio final de un estudiante a partir de tres calificaciones con diferentes ponderaciones.

---

## 💻 **Pseudocódigo**

El **pseudocódigo** es una forma intermedia entre el lenguaje natural y el lenguaje de programación.  
Permite expresar la lógica de un algoritmo sin preocuparse por la sintaxis exacta de un lenguaje específico, lo que facilita su comprensión, modificación y posterior traducción a lenguajes como **Python**, **C** o **Java** [1].

Además, el pseudocódigo es una herramienta fundamental en la enseñanza de la programación, ya que ayuda a los estudiantes a comprender la estructura y la lógica de los algoritmos sin necesidad de conocer la sintaxis formal de un lenguaje real.  
Su principal ventaja es el uso de la **lengua materna**, lo que reduce la carga cognitiva y favorece la comprensión de los conceptos básicos [2].

---

### 🧩 **Ejemplo 1 — Calcular el área de un triángulo**

Calcular el área de un triángulo aplicando la fórmula **(base × altura) / 2**.  
Este pseudocódigo solicita al usuario la base y la altura, realiza el cálculo y muestra el resultado.

**📥 Datos de entrada:** Base (a), Altura (b)  
**⚙️ Proceso:** Multiplicar base por altura y dividir entre 2  
**📤 Salida:** Área del triángulo

```plaintext
Algoritmo Area.triangulo
    // Variables
    Definir a Como Real
    Definir b Como Real
    // Ingreso de datos 
    Escribir "Ingrese el valor de la base"
    Leer a
    Escribir "Ingrese el valor de la altura"
    Leer b
    // Proceso 
    Resultado <- (a * b) / 2
    // Salida de datos 
    Escribir "El área del triángulo es: ", Resultado
FinAlgoritmo
```

### 🧩 **Ejemplo 2 — Longitud y área de un círculo**

Calcular la longitud (perímetro) y el área de un círculo utilizando las fórmulas  
**2 × π × radio** y **π × radio²**.  
El programa solicita el radio y muestra ambos resultados.

**📥 Datos de entrada:** Radio (r)  
**⚙️ Proceso:**  
- Longitud = 2 × π × r  
- Área = π × r²  

**📤 Salida:** Longitud del círculo y área del círculo

```
Algoritmo Longitud.Area
    // Variable
    Definir r Como Real
    // Ingreso de datos 
    Escribir "Ingrese el valor del radio"
    Leer r
    // Proceso 
    Resultado1 <- (2 * PI * r)
    Resultado2 <- (PI * r ^ 2)
    // Datos de salida 
    Escribir "La longitud del círculo es: ", Resultado1
    Escribir "El área del círculo es: ", Resultado2
FinAlgoritmo
```

### 🧩 **Ejemplo 3 — Calcular el promedio de tres notas**

Calcular el promedio final de un estudiante considerando los pesos de cada nota  
**(30%, 30% y 40%)**.  
El programa pide las tres calificaciones, aplica los pesos y muestra el resultado final.

**📥 Datos de entrada:** Nota1, Nota2, Nota3  
**⚙️ Proceso:** (nota1 × 0.3) + (nota2 × 0.3) + (nota3 × 0.4)  
**📤 Salida:** Promedio final del estudiante

```
Algoritmo Promedio.Notas
    // Variables
    Definir nota1, nota2, nota3, promedio Como Real
    // Ingreso de datos
    Escribir "Ingrese la primera nota:"
    Leer nota1
    Escribir "Ingrese la segunda nota:"
    Leer nota2
    Escribir "Ingrese la tercera nota:"
    Leer nota3
    // Proceso
    promedio <- (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4)
    // Datos de salida
    Escribir "El promedio final del estudiante es: ", promedio
FinAlgoritmo
```
---

## 🔷 **Diagrama de flujo**

Un diagrama de flujo es una representación gráfica que muestra de manera clara y ordenada la secuencia de pasos o rutinas que conforman un proceso. Su objetivo principal es visualizar la estructura y el desarrollo de una actividad, permitiendo identificar las unidades involucradas, los responsables y la relación entre las distintas etapas. Se utiliza ampliamente en empresas e instituciones, tanto industriales como de servicios, por su capacidad para representar procedimientos administrativos, técnicos o de cualquier tipo de proceso que requiera organización y análisis[3].

---

### 🧩 *Ejemplo 1:*

![]([Imagenes/Diagrama.md.png](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/3ac089725f035ccd2811bcdc2b54232a53558a3a/Imagenes/Diagrama.md.png))

### 🧩 *Ejemplo 2:*

![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/36c22e6a884e552d58308d31aa062fceb62fc97d/Imagenes/Captura%20de%20pantalla%202025-10-30%20204037.png)

### 🧩 *Ejemplo 3:*

![](https://github.com/pilarnaranjo-sys/Teoria-de-la-Programacion/blob/90c5ffb37bc91c528b2b5106c52c30cab23ab96e/Imagenes/Captura%20de%20pantalla%202025-10-30%20203946.png)
