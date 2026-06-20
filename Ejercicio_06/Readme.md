# Ejercicio 06: Mínimo Elemento de un Vector 

Escribir un programa que devuelva el mínimo de los elementos de un vector.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo MinimoVector
    Definir n, i Como Entero
    Definir minimo Como Real
    Dimension v[100]
    
    Escribir "Ingrese n:"
    Leer n
    
    Para i <- 1 Hasta n Hacer
        Leer v[i]
    FinPara
    
    minimo <- v[1]
    
    Para i <- 2 Hasta n Hacer
        Si v[i] < minimo Entonces
            minimo <- v[i]
        FinSi
    FinPara
    
    Escribir "El minimo es: ", minimo
FinAlgoritmo
