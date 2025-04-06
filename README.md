# Finance Compound Instruction Compiler

A compiler that extends a custom assembly-like instruction set with the `FINANCE_COMPOUND` instruction to compute compound interest using the formula:  
\[ A = P \times \left(1 + \frac{r}{n}\right)^{n \times t} \]

---

## Table of Contents
- [Custom Instruction](#custom-instruction)
- [Installation](#installation)
- [Usage](#usage)
- [Compiler Design](#compiler-design)
- [Edge Cases & Error Handling](#edge-cases--error-handling)
- [License](#license)
- [References](#references)

---

## Custom Instruction: `FINANCE_COMPOUND`

### Purpose
Computes the compound interest for a principal amount over time with a given interest rate and compounding frequency.

### Operands
| Register | Description                         | Example Value |
|----------|-------------------------------------|---------------|
| `R1`     | Principal \( P \)                   | `1000`        |
| `R2`     | Annual interest rate \( r \) (decimal) | `0.05` (5%)   |
| `R3`     | Compounding frequency \( n \)       | `12` (monthly)|
| `R4`     | Time periods \( t \)                | `10` (years)  |
| `R5`     | Result \( A \)                      | `1647.01`     |

### Formula
\[ A = P \times \left(1 + \frac{r}{n}\right)^{n \times t} \]

### Example
```assembly
MOV R1, 1000      ; Principal = 1000
MOV R2, 0.05      ; Annual interest rate = 5%
MOV R3, 12        ; Compounding frequency = 12 (monthly)
MOV R4, 10        ; Time periods = 10 years
FINANCE_COMPOUND R1, R2, R3, R4  ; Result stored in R5

### How to run
In the Compound_Interest folder, run :

./compiler
