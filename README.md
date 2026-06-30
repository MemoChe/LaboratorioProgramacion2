# LaboratorioProgramacion2

Proyecto sencillo en C++ para el laboratorio de Programación 2.

## Estructura

```text
LaboratorioProgramacion2/
├── include/
│   └── ArrayDin.h
├── src/
│   ├── ArrayDin.cc
│   └── main.cc
├── build/
├── Makefile
├── README.md
└── .gitignore
```

## Compilar

```bash
make
```

## Ejecutar

```bash
make run
```

## Limpiar archivos compilados

```bash
make clean
```

## Descripción breve

La clase `ArrayDin` implementa un arreglo dinámico de enteros con operaciones básicas:

- `push_back(value)`: agrega un elemento al final.
- `insert(pos, value)`: inserta un elemento en una posición válida.
- `remove(pos)`: elimina un elemento en una posición válida.
- `getSize()`: devuelve el tamaño actual del arreglo.
