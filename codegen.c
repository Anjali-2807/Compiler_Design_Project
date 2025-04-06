#include <stdio.h>
#include <math.h>
#include "codegen.h"
#include "ir.h"

void generateCode(FinanceCompoundNode* node) {
    // Generate both assembly-like output and actual calculation
    printf("FINANCE_COMPOUND R1, R2, R3, R4\n");
    printf("MOV R5, (%.2f * (1 + %.2f/%.2f)^(%.2f*%.2f))\n",
           node->reg1, node->reg2, node->reg3, node->reg3, node->reg4);
    
    // Actual calculation
    double result = node->reg1 * pow(1 + node->reg2 / node->reg3, node->reg3 * node->reg4);
    printf("Result: %.2f\n", result);
}