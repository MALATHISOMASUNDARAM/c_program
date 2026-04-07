1. What is pointer?
    -> Pointer points to the address of the another variable. It doesn't hold any values.
    -> Syntax to declare a pointer variable:
        Datatype * Variable_Name;  // uint8_t * p or uint8_t* p or uint8_t *p (all are same);

2. Size of pointer
     -> 2 bytes for 32-bit compiler
     -> 4 bytes for 64-bit compiler

3. Initialize the pointer
        uint8_t var = 5;
        uint8_t *ptr = &var; // points the address of another variable, should initilaize/assign the address of same datatype.
