<div align="center">
    <h1>ft_chest</h1>
    <img src="https://static.wikia.nocookie.net/minecraft_gamepedia/images/1/16/Chest_GUI.png/revision/latest?cb=20220730054400" alt="ft_chest" width="200px">
</div>

---

## I. Introducción

La *Global Game Jam* está a la vuelta de la esquina, y como siempre, el campus de *42 Málaga* se ha unido a la fiesta; por eso, el objetivo de este proyecto es implementar una de las partes más fundamentales, entretenidas y útiles de un videojuego: **la gestión de inventario.**

Sé que puede no sonar divertido, pero si recuerdas bien, nunca dije que lo fuera.


## II. Instrucciones generales

Este proyecto seguirá la misma dinámica que cualquier otro proyecto del campus respecto a creación del Makefile, aplicación de la Norma, el control de errores... con las siguientes excepciones:

**Se debe aplicar el *Flujo de Trabajo de Git* al desarrollo.**  
El proyecto debe estruturarse y desarrollarse de forma organizada, haciendo uso de los recursos de Git.

**Está permitido usar cualquier librería.**  
No obstante, ten cuidado y no le des muchos celos a *Libft*.


## III. Resultados esperados

**Un uso correcto de Git durante el desarrollo del proyecto.**  
Este taller no trata sobre *lenguaje C*; así que lo importante no será el resultado final, sino el proceso.

Se espera un repositorio que contenga:

- *Commits* bien redactados, relevantes y estructurados.
- *Branches* bien definidas, cuyos cambios reflejen un tema concreto.
- *Merges* que no dejen el repositorio en un estado inconsistente.
- *Tags* que reflejen un estado concreto del proyecto.


## III. Ejercicio

### Parte obligatoria

##### 00 - Repositorio

> *Vas a dejar preparadas algunas cosas en tu entorno de trabajo.*

Primero:
- [ ] Clona este repositorio y elimina su carpeta `.git`.

Después, configura tu repositorio local:
- [ ] Añade tu usuario y correo de GitHub a tu configuración del sistema.
- [ ] Crea un par de claves SSH `github` y `github.pub` de tipo *ED25519*.
- [ ] Añade un remoto a un repositorio vacío en GitHub.

Finalmente:
- [ ] Crea un alias del comando `git log` que muestre el resultado de una forma similar a esta:
```bash
* 1a2b3c4 (HEAD -> master) Mete-saca del cofre implementado
| * 5e6f7g8 (develop) Función add_item() corregida
| * 8h9i0j1 Función remove_item() implementada
| * 2k3l4m5 Función add_item() implementada
|/
* 6n7o8p9 Fichero 'ft_chest.h' añadido
* 9q0r1s2 Fichero '.gitignore' añadido
```

> Si tan solo hubiera una forma de consultar documentación en la consola...


##### 01 - Proyecto

> *Ahora sí, hora de meterle mano al código.*

Implementa un **programa** que gestione un cofre (`array`) de items; **debe poder usarse para validar el funcionamiento de la librería**, si eso se cumple, sea cual sea la complejidad del programa, será válido.

Esto es un item:
```C
/**
 * @brief   Definition of an item.
 * 
 * @param name  Name of the item.
 * @param count Quantity of the item.
 */
typedef struct s_item
{
    char            *name;
    unsigned int    count;
}   t_item;
```

Dicho programa debe **cumplir** lo siguiente:
- [ ] Implementa todas funciones descritas en el fichero `ft_chest.h`.
- [ ] Ejecuta la función `main()` en un fichero `main.c`.
- [ ] Compila correctamente con el comando `make` y las flags habituales.
- [ ] El nombre del ejecutable debe ser `ft_chest`.

El repositorio debe contener:
- [ ] Varias ramas, siendo 2 de ellas la principal (`master`) y la de desarrollo.
- [ ] Varias *tags* (en versionado semántico) que reflejen estados concretos del proyecto.
- [ ] Un archivo `.gitignore` con contenido relevante (relevante para el usuario).

> Un pequeño recordatorio: no olvides tener en cuenta los *casos especiales*. ¡Guíate por tu sentido común!

**El código y los ficheros que necesites para el proyecto quedan a tu libre elección**.  
Plantea cómo quieres desarrollar tu proyecto y organiza tu trabajo acorde a la estructura de esa visión: cantidad de carpetas, nombres de ficheros y su contenido... tienes completa libertad (sin contar los requisitos anteriores) para adaptar el *Flujo de Trabajo de Git* a tu propio estilo de desarrollo.


### Parte bonus

Implementa estas 6 funcionalidades nuevas en tu programa:
- [ ] Ordenar los items por orden alfabético.
- [ ] Ordenar los items por orden inverso al alfabético.
- [ ] Ordenar los items por cantidad ascendente.
- [ ] Ordenar los items por cantidad descendente.
- [ ] Importar un cofre desde un fichero. *
- [ ] Exportar un cofre a un fichero. *

\* Los ficheros contendrán los items en formato de `print_chest()`.

- [ ] Todos los cambios de esta parte deben hacerse en una rama `bonus`.


## Evaluación

Me temo que, *legalmente* hablando, no hay forma de evaluar el proyecto, así que no hay evaluación.

*Sí obstante*, si quieres vacilar sobre *quién tiene la rama más larga*, siempre puedes pedírselo a tus compañeros, ¡nadie te lo va a impedir!
