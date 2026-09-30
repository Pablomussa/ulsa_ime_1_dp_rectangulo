# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

Mi programa ayuda a calcular la base y altura de una figura, y serviría en la vida real para medir figuras o piezas mecánicas
_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. _____
2. _____
1. Medida de la Base
2. Medida de la altura

**Salidas:**
1. _____
2. _____
1. Resultado del área
2. Resultado del perímetro

**Fórmulas** (área y perímetro):
_____

Area= base * altura / 2
Perímetro= 2 * (b+a)
## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____
- _____
- Deberá recibir dos variables y entregar dos resultados
- Los valores deberán ser positivos

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
_____
Pide ingresar otro número, no están permitidos

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
_____
leerDecimal revisa que las variables sean números y yo reviso que no se ingrese un negativo o un 0

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
_____
Que será usada como una de las variables

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | _____ | _____ | _____ | _____ |
| 2 (cuadrado) | _____ | _____ | _____ | _____ |
| 3 (con decimales) | _____ | _____ | _____ | _____ |
| 1 | 2 | 6 | 6 | 16 |
| 2 (cuadrado) | 5 | 7 | 35 | 24 |
| 3 (con decimales) | 2.5 | 4.9 | 6.12 | 14.8 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí / No
**¿Tuve que corregirla?** _____
**¿Cuántas versiones de mi receta escribí hasta la final?** _____
**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí
**¿Tuve que corregirla?**si
**¿Cuántas versiones de mi receta escribí hasta la final?** 4

## 6. Cómo compilar y ejecutar (Fase 3)
