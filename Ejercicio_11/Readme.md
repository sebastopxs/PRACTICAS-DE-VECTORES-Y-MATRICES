# Ejercicio 11: Suma de la Diagonal Principal 

Escribir un programa que sume los elementos de la diagonal que va de izquierda a derecha en una matriz de m x n.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaDiagonalPrincipal
    Definir n, i Como Entero
    Definir suma Como Real
    Dimension matriz[20, 20]
    
    Escribir "Ingrese tamano de la matriz cuadrada (n):"
    Leer n
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        suma <- suma + matriz[i, i]
    FinPara
    
    Escribir "Suma diagonal principal: ", suma
FinAlgoritmo
