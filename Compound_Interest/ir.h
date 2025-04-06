#ifndef IR_H
#define IR_H

typedef enum {
    FINANCE_COMPOUND_NODE
} NodeType;

typedef struct {
    NodeType type;
    double reg1;  // Principal (P)
    double reg2;  // Interest rate (r)
    double reg3;  // Compounding frequency (n)
    double reg4;  // Time periods (t)
} FinanceCompoundNode;

FinanceCompoundNode* createFinanceCompoundNode(double r1, double r2, double r3, double r4);

#endif