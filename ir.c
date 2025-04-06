#include <stdlib.h>
#include "ir.h"

FinanceCompoundNode* createFinanceCompoundNode(double r1, double r2, double r3, double r4) {
    FinanceCompoundNode* node = malloc(sizeof(FinanceCompoundNode));
    if (!node) return NULL;
    node->type = FINANCE_COMPOUND_NODE;
    node->reg1 = r1;
    node->reg2 = r2;
    node->reg3 = r3;
    node->reg4 = r4;
    return node;
}