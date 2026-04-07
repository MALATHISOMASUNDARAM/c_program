1. What is pointer?
    -> Pointer points to the address of the another variable. It doesn't hold any values.
    -> Syntax to declare a pointer variable:
        Datatype * Variable_Name;  // uint8_t * p or uint8_t* p or uint8_t *p (all are same);

2. Size of pointer
     -> 2 bytes for 16-bit compiler
     -> 4 bytes for 32-bit compiler
     -> 8 bytes for 64-bit compiler

3. Initialize the pointer
        uint8_t var = 5;
        uint8_t *ptr = &var;(pointer to variable) // points the address of another variable, should initilaize/assign the address of same datatype.
        & -> address of, * -> derefrence/Indirection operator.

5. print the value using pointer
       printf("%d", ptr); // prints the address pointed by the ptr
       printf("%d", *ptr); // prints the value pointed in the address of another variable.
       or printf("%u", *(&a);  //*ptr = *(&a);
   printf("%u", &ptr); prints the address of ptr. %u-> unsigned integer, %x -> hex

6. Pointer Assignment
       uint8_t a = 10, b = 5;
       uint8_t *p, *q;
       p = &a; // assigning address of a to p 
       *p = 15; // can assign value directly to p as it holds the address of a
       //////  *q = *p; or *q = 15; // error : as q is not pointed to any variable address   /////
       q = p; // address pointed by p is assigned to q, so q will point the address of a;
       *q = 20; now the q has value of 20 in the address of a, as value of a and p will have 20 only
       if q is pointed to another address such as q = &b; then if you change the value, the value in b also changes.

7. Double pointer (pointer to pointer)
       int **q = &p; // It points to the address of p not the address pointed by p.
    or int **q;
       q = &p; 
       *q = *(&p) // It stores the address pointed by p, which is a another variable address.
   also can extend the level pointer to 3 and so on. such as int ***r = &q;

8. Pointer Arithmetic
   Addition in pointer:
       
       
