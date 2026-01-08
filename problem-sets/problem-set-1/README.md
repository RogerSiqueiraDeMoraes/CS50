# CS50 Problem Set 1

This repository contains my solutions for **CS50 – Problem Set 1**, written in **C**. These exercises focus on building a strong foundation in programming fundamentals such as input validation, loops, conditionals, and modular code organization.

---

## Mario More (Pyramid)

### Overview
The **Mario More** program is based on the *Mario (more comfortable)* challenge from CS50. It prompts the user for a pyramid height and prints a **double-sided pyramid** made of `#` characters in the terminal.

### Program behavior
- Prompts the user for the pyramid height
- Accepts only **positive integers** (input validation)
- Prints two mirrored pyramids separated by a fixed gap
- Left pyramid is right-aligned, right pyramid is left-aligned

### Concepts practiced
- Functions and function prototypes
- Input validation using `do-while`
- Nested loops
- Output formatting
- Modular program structure in C

---

## Credit (Card Validator)

### Overview
The **Credit** program validates a credit card number and identifies its brand according to the specifications of **CS50 Problem Set 1**.

The program:
- Prompts the user for a credit card number
- Validates the number using the **Luhn algorithm**
- Determines whether the card is **AMEX**, **MASTERCARD**, **VISA**, or **INVALID**

### Card rules

| Brand | Starting digits | Valid length |
|------|-----------------|--------------|
| AMEX | 34 or 37        | 15 digits    |
| MASTERCARD | 51–55     | 16 digits    |
| VISA | 4               | 13 or 16 digits |

Cards are marked as **INVALID** if they:
- Fail the Luhn checksum
- Have an invalid length
- Do not match any known identifying prefix

### Implementation details
- Uses `long` to store card numbers
- Separates logic into small, focused functions
- Extracts digits using division (`/`) and modulo (`%`)
- Handles edge cases and strict output formatting required by CS50

### Concepts practiced
- Checksum algorithms (Luhn)
- Mathematical digit extraction
- Conditional logic and control flow
- Defensive programming
- Writing clean and readable C code

---

## Technologies
- **C language**
- **CS50 Library**
- GCC compiler

---

## Notes
These exercises were completed as part of my learning process with **CS50**, with an emphasis on correctness, clarity, and adherence to the problem specifications.

