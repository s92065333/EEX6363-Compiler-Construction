#ifndef COMMON_H
#define COMMON_H

// === Structure for Symbol Table Record ===
// Stores information related to identifiers in the symbol table.
typedef struct {
    char *lexeme;     // String value representing the identifier's text
    int type;         // Token type (linked to Bison's token codes, e.g., IDENTIFIER)
    // Additional fields can be introduced later for semantic processing (e.g., datatype, scope, assigned value)
    // int value;        // For example: to store variable values if needed
} SymbolEntry;

#endif // COMMON_H
