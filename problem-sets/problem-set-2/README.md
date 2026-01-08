# CS50 Problem Set 2

This repository contains my solution for **CS50 – Problem Set 2**, written in **C**. This exercise focuses on string manipulation, arrays, conditionals, and applying logic to solve a real-world inspired problem.

---

## Scrabble (Word Scoring Game)

### Overview
The **Scrabble** program simulates a simplified version of the Scrabble word scoring system. Two players input a word, and the program calculates and compares their scores based on predefined letter values.

### Program behavior
- Prompts **Player 1** and **Player 2** to enter a word
- Accepts only non-empty input (basic validation)
- Calculates each word’s score based on Scrabble letter points
- Compares the scores and declares:
  - **Player 1 wins**
  - **Player 2 wins**
  - **Tie**

### Letter scoring system
Each letter has a predefined point value stored in an array:

| Letters | Points |
|--------|--------|
| A, E, I, L, N, O, R, S, T, U | 1 |
| D, G | 2 |
| B, C, M, P | 3 |
| F, H, V, W, Y | 4 |
| K | 5 |
| J, X | 8 |
| Q, Z | 10 |

The program is **case-insensitive**, meaning uppercase and lowercase letters are treated the same.

### Implementation details
- Uses arrays to store:
  - Letter point values
  - Player words
  - Player scores
- Uses `islower()` and `isupper()` from `<ctype.h>` to handle character cases
- Converts characters to array indices using ASCII arithmetic
- Separates logic into small functions:
  - `get_word()` for input handling
  - `compute_score()` for score calculation

### Concepts practiced
- Strings and character manipulation
- Arrays and indexing
- ASCII value arithmetic
- Functions and return values
- Loops and conditional logic
- Defensive input handling
- Clean and modular C code

---

## Technologies
- **C language**
- **CS50 Library**
- Standard C libraries (`stdio.h`, `string.h`, `ctype.h`)
- GCC compiler

---

## Notes
This program was developed as part of **CS50 Problem Set 2**, focusing on clarity, correctness, and following the problem’s specifications while reinforcing core C programming concepts.
