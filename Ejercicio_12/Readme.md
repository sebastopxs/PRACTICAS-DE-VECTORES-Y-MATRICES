# Ejercicio 12: Suma de la Diagonal Secundaria 

Escribir un programa que sume los elementos de la diagonal que va de derecha a izquierda en una matriz de m x n.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaDiagonalSecundaria
    Definir n, i Como Entero
    Definir suma Como Real
    Dimension matriz[20, 20]
    
    Leer n
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        suma <- suma + matriz[i, n - i + 1]
    FinPara
    
    Escribir "Suma diagonal secundaria: ", suma
FinAlgoritmo
