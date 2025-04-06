// #include <stdio.h>

// int yyparse(void);

// int main(void) {
//     printf("Enter your instruction:\n");
//     yyparse();
//     return 0;
// }

// void yyerror(const char *s) {
//     fprintf(stderr, "Error: %s\n", s);
// }

#include <stdio.h>
#include <stdlib.h>
#include "ir.h"
#include "codegen.h"

int main() {
    double principal, rate;
    int compounding, years;
    
    printf("\nCompound Interest Calculator\n");
    printf("----------------------------\n");
    
    // Get user inputs
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (e.g., 0.05 for 5%%): ");
    scanf("%lf", &rate);
    
    printf("Enter compounding frequency per year: ");
    scanf("%d", &compounding);
    
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Create and process node
    FinanceCompoundNode* node = createFinanceCompoundNode(
        principal, rate, compounding, years
    );
    
    if(node) {
        generateCode(node);
        free(node);
    } else {
        printf("Error creating calculation node!\n");
    }

    return 0;
}
