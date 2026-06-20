# Ejercicio 04: Producto de un Número por un Vector 

Escribir el programa que calcule el producto de un número por un vector (devuelve el vector resultante de multiplicar todas las componentes del vector inicial por un número).

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo ProductoNumeroVector
    Definir n, i Como Entero
    Definir k Como Real
    Dimension v[100]
    
    Escribir "Ingrese n y el numero k:"
    Leer n, k
    
    Para i <- 1 Hasta n Hacer
        Leer v[i]
        v[i] <- v[i] * k
    FinPara
    
    Para i <- 1 Hasta n Hacer
        Escribir v[i], " "
    FinPara
FinAlgoritmo
