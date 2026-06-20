# Ejercicio Adicional 1: Días Correspondientes a cada Mes

Un programa que almacene en una tabla el número de días que tiene cada mes (supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.

---

## Pseudocódigo (PSeInt)

```pascal
Algoritmo DiasDelMes
    Definir mes Como Entero
    Dimension dias[12]
    
    dias[1] <- 31; dias[2] <- 28; dias[3] <- 31; dias[4] <- 30
    dias[5] <- 31; dias[6] <- 30; dias[7] <- 31; dias[8] <- 31
    dias[9] <- 30; dias[10] <- 31; dias[11] <- 30; dias[12] <- 31
    
    Escribir "Ingrese el numero de mes (1-12):"
    Leer mes
    
    Si mes >= 1 Y mes <= 12 Entonces
        Escribir "El mes ", mes, " tiene ", dias[mes], " dias."
    Sino
        Escribir "Mes invalido."
    FinSi
FinAlgoritmo
