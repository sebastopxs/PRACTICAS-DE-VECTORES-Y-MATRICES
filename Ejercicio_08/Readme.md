# Ejercicio 08: Menor y Mayor Elemento de una Matriz 

Escribir un programa que busque el menor y el mayor elemento ingresado en una matriz de m x n.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo MinMaxMatriz
    Definir m, n, i, j Como Entero
    Definir minimo, maximo Como Real
    Dimension matriz[20, 20]
    
    Escribir "Ingrese filas (m) y columnas (n):"
    Leer m, n
    
    Para i <- 1 Hasta m Hacer
        Para j <- 1 Hasta n Hacer
            Escribir "Elemento [", i, "][", j, "]:"
            Leer matriz[i, j]
        FinPara
    FinPara
    
    minimo <- matriz[1, 1]
    maximo <- matriz[1, 1]
    
    Para i <- 1 Hasta m Hacer
        Para j <- 1 Hasta n Hacer
            Si matriz[i, j] < minimo Entonces
                minimo <- matriz[i, j]
            FinSi
            Si matriz[i, j] > maximo Entonces
                maximo <- matriz[i, j]
            FinSi
        FinPara
    FinPara
    
    Escribir "Menor: ", minimo
    Escribir "Mayor: ", maximo
FinAlgoritmo
