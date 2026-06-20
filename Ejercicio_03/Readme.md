# Ejercicio 03: Producto Escalar de dos Vectores 

Escribir un programa que calcule el producto escalar de dos vectores. Si v y w son los vectores y n su tamaño, el producto escalar se calcula como la sumatoria de V(i)*W(i).

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo ProductoEscalar
    Definir n, i Como Entero
    Definir suma Como Real
    Dimension v[100], w[100]
    
    Escribir "Ingrese n:"
    Leer n
    
    Para i <- 1 Hasta n Hacer
        Leer v[i]
    FinPara
    
    Para i <- 1 Hasta n Hacer
        Leer w[i]
    FinPara
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        suma <- suma + (v[i] * w[i])
    FinPara
    
    Escribir "Producto escalar: ", suma
FinAlgoritmo
