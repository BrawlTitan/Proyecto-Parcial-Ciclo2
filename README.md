# 🐀 Ratatouille: Juego de Consola / Console Game

🇪🇸 [Español](#-español) | 🇬🇧 [English](#-english)


---

## 🇪🇸 Español

Videojuego de consola desarrollado en C++ e inspirado en la película *Ratatouille*.
Controla a Remy, ayuda a Linguini en la cocina y enfrenta al chef Skinner a lo
largo de tres niveles, con gráficos hechos con bloques de colores RGB.

Proyecto del curso **Algoritmos** (2.º ciclo de **Ingeniería de Software**) de la
**Universidad Peruana de Ciencias Aplicadas (UPC)**.

### Niveles

| Nivel | Personaje | Mecánica |
|-------|-----------|----------|
| 1 | Remy | Recolecta 7 ingredientes en movimiento antes de que se acaben los 15 segundos. |
| 2 | Linguini | Cocina 3 platos repitiendo las teclas que aparecen en pantalla. Con 2 o más errores, el plato se quema. |
| 3 | Skinner | Remy aparece en distintos agujeros y debes pulsar el número correcto a tiempo. Tienes 3 vidas y 7 rondas, seguidas de una fase final de revisión. |

### Finales
El desenlace depende de **dos factores a la vez**: el desempeño en los niveles
(que determina la empatía acumulada) y la **decisión final de Skinner**. Si se
pierde en algún nivel, el juego termina. ¡Descubre todos los finales!

### Controles

| Nivel | Teclas |
|-------|--------|
| 1 | `W` `A` `S` `D` para mover a Remy |
| 2 | `1` a `9` y `0`, según lo que aparezca en pantalla |
| 3 | `1` a `5` para elegir el agujero donde está Remy |

### Conceptos de programación aplicados

- **Herencia:** `Chef` → `Linguini`, `Skinner`
- **Polimorfismo y clases abstractas:** `Comida` → `Sarten`, `Comida2`, `Comida3`
- **Listas dinámicas:** `ListaAgujeros`, `ListaIngredientes`
- **Gestión de memoria** con `new` / `delete`
- **Colisiones, animaciones y temporizadores** en consola

### Requisitos

- Windows
- Visual Studio con soporte para C++/CLI (proyecto de consola CLR)

### Instalación y ejecución

1. Clona el repositorio:
   ```bash
   git clone https://github.com/BrawlTitan/nombre-repo.git
   ```
2. Abre la solución en Visual Studio.
3. Compila y ejecuta `Ratatouille-Game.cpp`.

> Se recomienda maximizar la consola para ver bien los gráficos.

### Autores

| Nombre | GitHub | Aporte |
|--------|--------|--------|
| Mateo Alvarado | [@BrawlTitan](https://github.com/BrawlTitan) | Lógica, programación, arte e ideas |
| Aaron Badajos | [@Bucheria](https://github.com/Bucheria) | Programación, música e ideas |
| Jeremy Advincula | — | Programación |

### Licencia

Proyecto académico con fines educativos. *Ratatouille* y sus personajes son
propiedad de Disney/Pixar; este proyecto no tiene fines comerciales.

---

## 🇬🇧 English

A C++ console game inspired by the movie *Ratatouille*. Control Remy, help
Linguini in the kitchen and face Chef Skinner across three levels, with
graphics made from colored RGB blocks.

Project for the **Algorithms** course (2nd semester of **Software Engineering**)
at the **Universidad Peruana de Ciencias Aplicadas (UPC)**, Peru.

### Levels

| Level | Character | Mechanic |
|-------|-----------|----------|
| 1 | Remy | Collect 7 moving ingredients before the 15-second timer runs out. |
| 2 | Linguini | Cook 3 dishes by pressing the keys shown on screen. With 2 or more mistakes, the dish burns. |
| 3 | Skinner | Remy pops up in different holes and you must press the right number in time. You have 3 lives and 7 rounds, followed by a final inspection phase. |

### Endings
The outcome depends on **two factors at once**: your performance in the levels
(which determines accumulated empathy) and **Skinner's final decision**. If you
lose a level, the game ends. Discover every ending!

### Controls

| Level | Keys |
|-------|------|
| 1 | `W` `A` `S` `D` to move Remy |
| 2 | `1` to `9` and `0`, as shown on screen |
| 3 | `1` to `5` to pick the hole where Remy is |

### Programming concepts applied

- **Inheritance:** `Chef` → `Linguini`, `Skinner`
- **Polymorphism and abstract classes:** `Comida` → `Sarten`, `Comida2`, `Comida3`
- **Dynamic lists:** `ListaAgujeros`, `ListaIngredientes`
- **Memory management** with `new` / `delete`
- **Collisions, animations and timers** in the console

### Requirements

- Windows
- Visual Studio with C++/CLI support (CLR console project)

### Installation and running

1. Clone the repository:
   ```bash
   git clone https://github.com/BrawlTitan/repo-name.git
   ```
2. Open the solution in Visual Studio.
3. Build and run `Ratatouille-Game.cpp`.

> Maximize the console window for the best visual experience.

### Authors

| Name | GitHub | Contribution |
|------|--------|--------------|
| Mateo Alvarado | [@BrawlTitan](https://github.com/BrawlTitan) | Logic, programming, art and ideas |
| Aaron Badajos | [@Bucheria](https://github.com/Bucheria) | Programming, music and ideas |
| Jeremy Advincula | — | Programming |

### License

Academic project for educational purposes. *Ratatouille* and its characters are
property of Disney/Pixar; this project is non-commercial.
