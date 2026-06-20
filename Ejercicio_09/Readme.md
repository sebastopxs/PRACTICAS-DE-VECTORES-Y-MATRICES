# Ejercicio 09: Suma por Filas de una Matriz 

Escribir un programa que sume los elementos de cada fila de una matriz de m x n.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaFilas
    Definir m, n, i, j Como Entero
    Definir suma Como Real
    Dimension matriz[20, 20]
    
    Escribir "Ingrese filas (m) y columnas (n):"
    Leer m, n
    
    Para i <- 1 Hasta m Hacer
        Para j <- 1 Hasta n Hacer
            Leer matriz[i, j]
        FinPara
    FinPara
    
    Escribir "--- Suma por Filas ---"
    Para i <- 1 Hasta m Hacer
        suma <- 0
        Para j <- 1 Hasta n Hacer
            suma <- suma + matriz[i, j]
        FinPara
        Escribir "Fila ", i, ": ", suma
    FinPara
FinAlgoritmo
