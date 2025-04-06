MOV R1, 1000      ; Principal = 1000
MOV R2, 0.05      ; Interest rate = 5%
MOV R3, 12        ; Compounding frequency = 12 (monthly)
MOV R4, 10        ; Time period = 10 years
FINANCE_COMPOUND R1, R2, R3, R4  ; Expected to compute compound interest; result goes in R5.
