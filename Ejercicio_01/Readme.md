# Ejercicio 01: Media de los Elementos de un Vector 📊

Este programa solicita un número `n` de elementos, lee los valores dentro de un arreglo unidimensional y calcula la media aritmética de los mismos.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo MediaVector
    Definir n, i Como Entero
    Definir suma, media Como Real
    Dimension v[100]
    
    Escribir "Ingrese n:"
    Leer n
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        Escribir "v[", i, "]:"
        Leer v[i]
        suma <- suma + v[i]
    FinPara
    
    media <- suma / n
    Escribir "Media: ", media
FinAlgoritmo
