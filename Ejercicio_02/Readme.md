# Ejercicio 02: Suma de Cuadrados de las Componentes de un Vector 

Escribir un programa que calcule y devuelva la suma al cuadrado de las componentes de un vector.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo SumaCuadrados
    Definir n, i Como Entero
    Definir suma Como Real
    Dimension v[100]
    
    Escribir "Ingrese n:"
    Leer n
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        Escribir "v[", i, "]:"
        Leer v[i]
        suma <- suma + (v[i] * v[i])
    FinPara
    
    Escribir "Suma de cuadrados: ", suma
FinAlgoritmo
