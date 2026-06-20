# Ejercicio 13: Copiar Bordes en Sentido Horario 

Escribir un programa que copie los elementos de los bordes en sentido horario en una matriz de m x n en un vector resultante llamado v.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo BordesHorario
    Definir m, n, i, j, k Como Entero
    Dimension matriz[10, 10], v[100]
    
    Escribir "Filas (m) y Columnas (n):"
    Leer m, n
    
    k <- 1
    
    Para j <- 1 Hasta n Hacer
        v[k] <- matriz[1, j]
        k <- k + 1
    FinPara
    
    Para i <- 2 Hasta m Hacer
        v[k] <- matriz[i, n]
        k <- k + 1
    FinPara
    
    Si m > 1 Entonces
        Para j <- n - 1 Hasta 1 Con Paso -1 Hacer
            v[k] <- matriz[m, j]
            k <- k + 1
        FinPara
    FinSi
    
    Si n > 1 Entonces
        Para i <- m - 1 Hasta 2 Con Paso -1 Hacer
            v[k] <- matriz[i, 1]
            k <- k + 1
        FinPara
    FinSi
    
    Escribir "Vector Resultante:"
    Para i <- 1 Hasta k - 1 Hacer
        Escribir Sin Saltar v[i], " "
    FinPara
FinAlgoritmo
