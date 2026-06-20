# Ejercicio 05: Sumar un Escalar a un Vector 

Escribir un programa que calcule el vector resultante de sumar a cada una de las componentes de un vector dado, un número real.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaEscalar
    Definir n, i Como Entero
    Definir k Como Real
    Dimension v[100]
    
    Escribir "Ingrese n y el numero real k a sumar:"
    Leer n, k
    
    Para i <- 1 Hasta n Hacer
        Escribir "v[", i, "]:"
        Leer v[i]
        v[i] <- v[i] + k
    FinPara
    
    Escribir "Vector resultante:"
    Para i <- 1 Hasta n Hacer
        Escribir v[i], " "
    FinPara
FinAlgoritmo
