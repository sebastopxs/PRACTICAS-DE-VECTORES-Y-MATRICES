# Ejercicio Adicional 4: Cálculo de la Matriz Inversa (Gauss-Jordan) 

Un programa que pida al usuario los datos de una matriz de 3x3, y calcule y muestre su matriz inversa utilizando el método de eliminación de Gauss-Jordan.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo MatrizInversaGaussJordan
    Definir i, j, k Como Entero
    Definir pivote, factor Como Real
    Dimension M[3, 6] // Matriz aumentada (3x3 original + 3x3 Identidad)
    
    Escribir "Ingrese la matriz 3x3:"
    Para i <- 1 Hasta 3 Hacer
        Para j <- 1 Hasta 3 Hacer
            Leer M[i, j]
        FinPara
        // Crear la matriz identidad en el lado derecho (columnas 4 a 6)
        Para j <- 4 Hasta 6 Hacer
            Si j = (i + 3) Entonces
                M[i, j] <- 1
            Sino
                M[i, j] <- 0
            FinSi
        FinPara
    FinPara
    
    // Proceso de Gauss-Jordan
    Para i <- 1 Hasta 3 Hacer
        pivote <- M[i, i]
        
        // Dividir la fila actual entre el pivote para hacer el 1 en la diagonal
        Para j <- 1 Hasta 6 Hacer
            M[i, j] <- M[i, j] / pivote
        FinPara
        
        // Hacer ceros en el resto de la columna i
        Para k <- 1 Hasta 3 Hacer
            Si k != i Entonces
                factor <- M[k, i]
                Para j <- 1 Hasta 6 Hacer
                    M[k, j] <- M[k, j] - (factor * M[i, j])
                FinPara
            FinSi
        FinPara
    FinPara
    
    Escribir "Matriz Inversa:"
    Para i <- 1 Hasta 3 Hacer
        Para j <- 4 Hasta 6 Hacer
            Escribir Sin Saltar M[i, j], "    "
        FinPara
        Escribir ""
    FinPara
FinAlgoritmo
