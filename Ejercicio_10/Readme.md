# Ejercicio 10: Suma por Columnas de una Matriz 

Escribir un programa que sume los elementos de cada columna de una matriz de m x n.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaColumnas
    Definir m, n, i, j Como Entero
    Definir suma Como Real
    Dimension matriz[20, 20]
    
    Leer m, n
    
    Escribir "--- Suma por Columnas ---"
    Para j <- 1 Hasta n Hacer
        suma <- 0
        Para i <- 1 Hasta m Hacer
            suma <- suma + matriz[i, j]
        FinPara
        Escribir "Columna ", j, ": ", suma
    FinPara
FinAlgoritmo
