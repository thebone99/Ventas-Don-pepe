# Registro de Ventas Semanales - Colmado "Don Pepe"

## Descripción
Programa desarrollado en C++ para el colmado "Don Pepe" que registra las ventas diarias de lunes a domingo utilizando arreglos unidimensionales. El programa valida que no se ingresen montos negativos, muestra el listado de ventas registradas y presenta un resumen con el total semanal, el promedio diario, los días de mayor y menor venta, y cuáles días superaron el promedio.

## Estudiante
* **Nombre:** Omar Farias
* **Matrícula:** 1407

## Instrucciones para compilar y ejecutar

1. Clona este repositorio o descarga el archivo `main.cpp`.
2. Abre una terminal en la carpeta del archivo.
3. Compila el código con `g++`:
   ```bash
   g++ main.cpp -o ventas_don_pepe
   ```
4. Ejecuta el programa:
   * **Windows:**
     ```bash
     ventas_don_pepe.exe
     ```
   * **Linux / macOS:**
     ```bash
     ./ventas_don_pepe
     ```

## Ejemplo de ejecución

```text
=== REGISTRO DE VENTAS SEMANALES ===
Ventas del Lunes: RD$ 3500
Ventas del Martes: RD$ 2800
Ventas del Miercoles: RD$ 4100
Ventas del Jueves: RD$ 3200
Ventas del Viernes: RD$ 5000
Ventas del Sabado: RD$ 6200
Ventas del Domingo: RD$ 4600

=== VENTAS DEL COLMADO DON PEPE ===
Lunes:      RD$ 3500.00
Martes:     RD$ 2800.00
Miercoles:  RD$ 4100.00
Jueves:     RD$ 3200.00
Viernes:    RD$ 5000.00
Sabado:     RD$ 6200.00
Domingo:    RD$ 4600.00

=== RESUMEN SEMANAL ===
Total vendido en la semana: RD$ 29400.00
Promedio diario de ventas:  RD$ 4200.00
Dia con mayor venta:        Sabado (RD$ 6200.00)
Dia con menor venta:        Martes (RD$ 2800.00)

Dias que superaron el promedio:
- Viernes (RD$ 5000.00)
- Sabado (RD$ 6200.00)
- Domingo (RD$ 4600.00)
Cantidad de dias sobre el promedio: 3
```
