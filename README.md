# Primer Taller - Algoritmos en C

##  Descripción breve
Este programa en C permite:
- Registrar 10 enteros positivos.
- Mostrar el arreglo original.
- Ordenar los datos de forma ascendente con **Selection Sort**, mostrando el proceso paso a paso.
- Ordenar los datos de forma descendente con **Insertion Sort**, mostrando el proceso paso a paso.

Se incluye un menú interactivo que permite realizar estas operaciones sin alterar el arreglo original.

---

##  Cómo compilar y ejecutar

1. Compilar el programa con `gcc`:
   ```bash
   gcc primertaller.c -o primertaller
   ```

2. Ejecutar:
   ```bash
   ./primertaller
   ```

---

## Ejemplo de ejecución

### Entrada de datos
```
===== MENÚ =====
1. Registrar números
2. Mostrar arreglo original
3. Ordenar (Selection Sort ASC)
4. Ordenar (Insertion Sort DESC)
5. Salir
Elige una opción: 1
Ingrese un número positivo [1/10]: 5
Ingrese un número positivo [2/10]: 9
Ingrese un número positivo [3/10]: 2
Ingrese un número positivo [4/10]: 8
Ingrese un número positivo [5/10]: 1
Ingrese un número positivo [6/10]: 4
Ingrese un número positivo [7/10]: 7
Ingrese un número positivo [8/10]: 6
Ingrese un número positivo [9/10]: 3
Ingrese un número positivo [10/10]: 10
 Datos registrados.
```

### Mostrar arreglo original
```
Arreglo original: [ 5 9 2 8 1 4 7 6 3 10 ]
```

### Selection Sort (ascendente)
```
Proceso Selection Sort (ascendente):
Paso 1: [ 1 9 2 8 5 4 7 6 3 10 ]
Paso 2: [ 1 2 9 8 5 4 7 6 3 10 ]
Paso 3: [ 1 2 3 8 5 4 7 6 9 10 ]
Paso 4: [ 1 2 3 4 5 8 7 6 9 10 ]
Paso 5: [ 1 2 3 4 5 8 7 6 9 10 ]
Paso 6: [ 1 2 3 4 5 6 7 8 9 10 ]
Resultado final: [ 1 2 3 4 5 6 7 8 9 10 ]
```

### Insertion Sort (descendente)
```
Proceso Insertion Sort (descendente):
Inserción 1: [ 9 5 2 8 1 4 7 6 3 10 ]
Inserción 2: [ 9 5 2 8 1 4 7 6 3 10 ]
Inserción 3: [ 9 8 5 2 1 4 7 6 3 10 ]
Inserción 4: [ 9 8 5 2 1 4 7 6 3 10 ]
Inserción 5: [ 9 8 5 4 2 1 7 6 3 10 ]
Inserción 6: [ 9 8 7 5 4 2 1 6 3 10 ]
Inserción 7: [ 9 8 7 6 5 4 2 1 3 10 ]
Inserción 8: [ 9 8 7 6 5 4 3 2 1 10 ]
Inserción 9: [ 10 9 8 7 6 5 4 3 2 1 ]
Resultado final: [ 10 9 8 7 6 5 4 3 2 1 ]
```

### Salir
```
👋 Saliendo...
```
