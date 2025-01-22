# 42Madrid Piscina Projects

<p align="center">
  <img src="https://i.ibb.co/2t4TRNB/que-es.jpg" alt="Piscina 42Madrid">
</p>

¡Bienvenido a mis proyectos de la piscina en 42Madrid de Fundación Telefónica! Este repositorio contiene los proyectos realizados durante el programa intensivo de desarrollo de software.

## Tabla de Contenidos

- [Introducción](#introducción)
- [Requisitos](#requisitos)
- [Instalación](#instalación)
- [Proyectos](#proyectos)
  - [Proyecto 1: Hello World](#proyecto-1-hello-world)
  - [Proyecto 2: Biblioteca de Funciones](#proyecto-2-biblioteca-de-funciones)
  - [Proyecto 3: Gestión de Archivos](#proyecto-3-gestión-de-archivos)
- [Contribuciones](#contribuciones)
- [Licencia](#licencia)
- [Agradecimientos](#agradecimientos)

## Introducción

Este repositorio incluye los proyectos desarrollados durante la piscina de 42Madrid, un programa intensivo de formación en programación promovido por Fundación Telefónica. La piscina es una experiencia única donde se aprende a programar a través de la práctica y el trabajo en equipo.

## Requisitos

- [GCC](https://gcc.gnu.org/) o cualquier otro compilador de C
- [Make](https://www.gnu.org/software/make/)
- [Git](https://git-scm.com/)

## Instalación

Para clonar este repositorio y compilar los proyectos, sigue los siguientes pasos:

1. Clona el repositorio:
   ```sh
   git clone https://github.com/tu-usuario/42madrid-piscina-projects.git
   cd 42madrid-piscina-projects
Proyectos
Proyecto 1: Hello World
Este proyecto consiste en escribir un programa que imprima "Hello, World!" en la consola. Es el primer paso para familiarizarse con la sintaxis de C y el entorno de desarrollo.

Archivos:

hello_world.c

Compilación y ejecución:

sh
gcc hello_world.c -o hello_world
./hello_world
Proyecto 2: Biblioteca de Funciones
En este proyecto, se desarrolla una pequeña biblioteca de funciones en C. El objetivo es profundizar en el uso de funciones y la modularización del código.

Archivos:

ft_strlen.c

ft_strcpy.c

ft_bzero.c

Compilación y ejecución:

sh
gcc -c ft_strlen.c ft_strcpy.c ft_bzero.c
ar rcs libft.a ft_strlen.o ft_strcpy.o ft_bzero.o
Proyecto 3: Gestión de Archivos
Este proyecto trata sobre la lectura y escritura de archivos en C. Es fundamental para entender cómo manejar datos externos en programas de C.

Archivos:

file_read.c

file_write.c

Compilación y ejecución:

sh
gcc file_read.c file_write.c -o file_management
./file_management
Contribuciones
¡Contribuciones son bienvenidas! Si deseas contribuir a estos proyectos, por favor sigue estos pasos:

Haz un fork de este repositorio.

Crea una nueva rama (git checkout -b feature/nueva-funcionalidad).

Haz los cambios necesarios y haz commit (git commit -m 'Añadir nueva funcionalidad').

Sube tus cambios (git push origin feature/nueva-funcionalidad).

Abre una solicitud de extracción (Pull Request).

Licencia
Este proyecto está licenciado bajo la Licencia MIT - mira el archivo LICENSE para más detalles.

Agradecimientos

<p align="center">
  **Un agradecimiento especial a todo el equipo de 42Madrid y Fundación Telefónica por esta increíble oportunidad de aprendizaje y crecimiento.**
</p>
