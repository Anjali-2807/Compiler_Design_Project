; Custom Instruction: FINANCE_COMPOUND
; Operands:
;   R1 - Principal (P)
;   R2 - Annual Interest Rate (r, as a decimal, e.g., 0.05 for 5%)
;   R3 - Compounding Frequency (n)
;   R4 - Number of Time Periods (t)
; Operation:
;   Compute compound interest: A = P * (1 + r/n)^(n*t)
;   The result is stored in R5.

# Custom Instruction: FINANCE_COMPOUND

## Purpose
To compute the compound interest using the formula:
\[
A = P \times \left(1 + \frac{r}{n}\right)^{n \times t}
\]
where:
- **P**: Principal
- **r**: Annual Interest Rate (decimal)
- **n**: Compounding Frequency
- **t**: Time Periods

## Instruction Format
(Define the exact syntax of your instruction if needed)

## Operation Details
1. **Input Registers:**
   - **R1:** Principal amount \(P\)
   - **R2:** Interest rate \(r\)
   - **R3:** Compounding frequency \(n\)
   - **R4:** Number of time periods \(t\)

2. **Calculation:**
   - Compute: \(1 + \frac{r}{n}\)
   - Compute exponent: \(n \times t\)
   - Raise the first term to the exponent.
   - Multiply the result by \(P\) and store it in **R5**.

## Integration into the Compiler
- **Lexer/Parser Modification:**  
  Add a rule to recognize the `FINANCE_COMPOUND` keyword.
- **Intermediate Representation (IR):**  
  Create a new IR node that holds operands R1–R4.
- **Code Generation:**  
  Implement code to translate the IR node into target machine instructions.

## Example Use-Case
```assembly
MOV R1, 1000      ; Principal = 1000
MOV R2, 0.05      ; Interest rate = 5%
MOV R3, 12        ; Compounding frequency = 12 (monthly)
MOV R4, 10        ; Time period = 10 years
FINANCE_COMPOUND R1, R2, R3, R4  ; Computes compound interest; result in R5.
