# Ejercicio Adicional 2: Cálculo del Día Numérico del Año

Un programa que almacene en una tabla el número de días que tiene cada mes (año no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el día número 46, el 31 de diciembre sería el día 365).

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo DiaDelAno
    Definir mes, dia, i, totalDias Como Entero
    Dimension dias[12]
    
    dias[1] <- 31; dias[2] <- 28; dias[3] <- 31; dias[4] <- 30
    dias[5] <- 31; dias[6] <- 30; dias[7] <- 31; dias[8] <- 31
    dias[9] <- 30; dias[10] <- 31; dias[11] <- 30; dias[12] <- 31

    Escribir "Ingrese el mes (1-12):"
    Leer mes
    Escribir "Ingrese el dia:"
    Leer dia
    
    totalDias <- 0
    Para i <- 1 Hasta mes - 1 Hacer
        totalDias <- totalDias + dias[i]
    FinPara
    
    totalDias <- totalDias + dia
    Escribir "Es el dia numero ", totalDias, " del ano."
FinAlgoritmo
