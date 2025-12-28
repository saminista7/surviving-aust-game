# Surviving AUST (OpenGL Game)

Surviving AUST is a 2D game developed in **C++ using OpenGL**, designed to represent the four-year undergraduate journey at **Ahsanullah University of Science and Technology (AUST)** through a series of progressively challenging levels.

This project was developed as part of an undergraduate coursework requirement and focuses on low-level graphics programming, game logic, and asset management.

---

## Overview
The game follows a character navigating multiple obstacles that symbolically represent different stages of university life. Each academic year is represented as a level, with increasing difficulty and limited player lives.

The objective is to survive all four levels and complete the journey successfully.

---

## Game Mechanics
- Four levels representing four academic years
- Limited life system with difficulty progression
- Time-based scoring system
- Collision detection with dynamic obstacles
- Menu system and state-based gameplay flow

---

## Obstacles and Levels
The gameplay includes multiple obstacle types such as:
- Item selection challenges during preparation stages
- Timed road-crossing with moving obstacles
- Staircase navigation with collision avoidance
- Progressive obstacle combinations in later levels

Failure to complete obstacles within time limits or collisions with entities result in life reduction.

---

## Technologies Used
- C++
- OpenGL
- GLUT / GLU
- Visual Studio (Windows)
- stb_image for texture loading

---

## Project Structure
.
├── Main.cpp
├── utilities.cpp
├── random.cpp
├── bitmap_loader.h
├── Graphics.h
├── GameState.h
├── Asset/
├── Background/
├── Basket/
├── Menu/
├── Music/
├── enemy/
├── room/
├── images/
└── SURVIVING AUST.sln

---

## How to Run
1. Open `SURVIVING AUST.sln` using **Visual Studio** (Windows).
2. Ensure OpenGL libraries are properly linked.
3. Build and run the project from Visual Studio.

---

## Academic Context
This project was developed as part of an undergraduate game development / graphics coursework at  
**Ahsanullah University of Science and Technology (AUST)**.

---

## Resources
- Concept inspired by *Dumb Ways to Die*
- Visual assets sourced from Freepik and Google Images

---

## Notes
This repository is maintained for academic reference and demonstration of foundational graphics programming and game development concepts.

