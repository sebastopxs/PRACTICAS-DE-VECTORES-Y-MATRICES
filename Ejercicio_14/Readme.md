# Ejercicio 14: Letra "N" en una Matriz 

Escribir un programa que sume e imprima cada elemento en una matriz de m x n, que forme en ella la letra “N” (como en el bingo).

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo LetraNMatriz
    Definir n, i, j Como Entero
    Definir suma Como Real
    Dimension matriz[10, 10]
    
    Escribir "Tamano de la matriz cuadrada (n):"
    Leer n
    
    suma <- 0
    Escribir "--- Figura N ---"
    Para i <- 1 Hasta n Hacer
        Para j <- 1 Hasta n Hacer
            Si j = 1 O i = j O j = n Entonces
                Escribir Sin Saltar matriz[i, j], "  "
                suma <- suma + matriz[i, j]
            Sino
                Escribir Sin Saltar "   "
            FinSi
        FinPara
        Escribir ""
    FinPara
    
    Escribir "Suma total de la letra N: ", suma
FinAlgoritmo
