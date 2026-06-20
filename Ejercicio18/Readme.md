# Ejercicio Adicional 5: Multiplicación de dos Matrices 2x2 

Un programa que pida al usuario los datos de dos matrices de 2x2, y calcule y muestre su producto mediante el algoritmo clásico de tres bucles anidados.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo ProductoMatrices2x2
    Definir i, j, k Como Entero
    Dimension A[2, 2], B[2, 2], C[2, 2]
    
    Escribir "--- Datos Matriz A ---"
    Para i <- 1 Hasta 2 Hacer
        Para j <- 1 Hasta 2 Hacer
            Leer A[i, j]
        FinPara
    FinPara
    
    Escribir "--- Datos Matriz B ---"
    Para i <- 1 Hasta 2 Hacer
        Para j <- 1 Hasta 2 Hacer
            Leer B[i, j]
        FinPara
    FinPara
    
    // Inicializar matriz resultante C en 0 y calcular el producto
    Para i <- 1 Hasta 2 Hacer
        Para j <- 1 Hasta 2 Hacer
            C[i, j] <- 0
            Para k <- 1 Hasta 2 Hacer
                C[i, j] <- C[i, j] + (A[i, k] * B[k, j])
            FinPara
        FinPara
    FinPara
    
    Escribir "Matriz Producto:"
    Para i <- 1 Hasta 2 Hacer
        Para j <- 1 Hasta 2 Hacer
            Escribir Sin Saltar C[i, j], "    "
        FinPara
        Escribir ""
    FinPara
FinAlgoritmo
