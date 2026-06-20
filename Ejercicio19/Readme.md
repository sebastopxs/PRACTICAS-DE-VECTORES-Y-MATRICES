# Ejercicio Adicional 6: Resolución de Sistemas de Ecuaciones (Método de Gauss) 

Un programa que use una matriz de 3x4 para resolver un sistema de 3 ecuaciones con 3 incógnitas usando el método de Gauss (hacer ceros por debajo de la diagonal principal para luego aplicar sustitución regresiva).

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SistemaEcuacionesGauss
    Definir i, j Como Entero
    Definir factor1, factor2, factor3 Como Real
    Definir x1, x2, x3 Como Real
    Dimension M[3, 4] // Coeficientes + términos independientes
    
    Escribir "Ingrese la matriz 3x4 (coeficientes y resultados):"
    Para i <- 1 Hasta 3 Hacer
        Para j <- 1 Hasta 4 Hacer
            Leer M[i, j]
        FinPara
    FinPara
    
    // PASO 1: Triangularización (Hacer ceros por debajo de la diagonal)
    
    // Ceros debajo de M[1,1] en la primera columna
    factor1 <- M[2, 1] / M[1, 1]
    Para j <- 1 Hasta 4 Hacer
        M[2, j] <- M[2, j] - (factor1 * M[1, j])
    FinPara
    
    factor2 <- M[3, 1] / M[1, 1]
    Para j <- 1 Hasta 4 Hacer
        M[3, j] <- M[3, j] - (factor2 * M[1, j])
    FinPara
    
    // Cero debajo de M[2,2] en la segunda columna
    factor3 <- M[3, 2] / M[2, 2]
    Para j <- 1 Hasta 4 Hacer
        M[3, j] <- M[3, j] - (factor3 * M[2, j])
    FinPara
    
    // PASO 2: Sustitución Regresiva (Despejar desde abajo hacia arriba)
    x3 <- M[3, 4] / M[3, 3]
    x2 <- (M[2, 4] - (M[2, 3] * x3)) / M[2, 2]
    x1 <- (M[1, 4] - (M[1, 2] * x2) - (M[1, 3] * x3)) / M[1, 1]
    
    Escribir "Solucion del sistema:"
    Escribir "x = ", x1
    Escribir "y = ", x2
    Escribir "z = ", x3
FinAlgoritmo
