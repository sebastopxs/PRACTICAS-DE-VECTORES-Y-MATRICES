# Ejercicio 07: Máximo Elemento de un Vector 

Escribir un programa que devuelva el máximo de los elementos de un vector.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo MaximoVector
    Definir n, i Como Entero
    Definir maximo Como Real
    Dimension v[100]
    
    Escribir "Ingrese n:"
    Leer n
    
    Para i <- 1 Hasta n Hacer
        Leer v[i]
    FinPara
    
    maximo <- v[1]
    
    Para i <- 2 Hasta n Hacer
        Si v[i] > maximo Entonces
            maximo <- v[i]
        FinSi
    FinPara
    
    Escribir "El maximo es: ", maximo
FinAlgoritmo
