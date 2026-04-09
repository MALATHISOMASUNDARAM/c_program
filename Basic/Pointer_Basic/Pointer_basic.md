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
       int a[] = {1,2,3,4,5};
       int *p;
       p = a; // only will assign the address of first value.
       p = p+2; // increments the index of array where the pointer point too.
       formula : address + no_of_pos*(sizeof (datatype)) eg: consider p holds address as 100 p = 100 + 2*(4) // if 32-bit compiler, int is 4 bytes
       so the pointer p points to next address of index 108, which holds the value 3. 
       p++; or p = p+1; or p = &a[0+2] // increments the index of array or moves to the next index in the array
       int *q = a;
       q = p+3; // q will have the index of pointer p pointing to addition with index, if p is pointing to index 1, then p+3 so q will points to the address of          4th index in array.

   Note: 
   int a[] = {1,2,3,4};
   int b[] = {5,6,7,8};
   int *p = a;
   int *q = b;
   q = p + 3;   // now it will point to array of a, and prints the value as 4.
   In addition q = p + q; //Not valid, gives invalid operand binary error.

   Subtraction in pointer:
       int a[] = {1,2,3,4,5};
       int *p;
       int *q;
       p = a; q = a;
       q = p + 3; // points the address of 4th index in a array
       int d;
       d = p - q; // subtracts the no.of element present in between p and q and points the index.
       eg: if q early points to 4th index, p points to 1st index, after the subtraction, d will have 2 because the inbetween element was 2, if subtracted with p-q it will print as -2. There won't be changes in the index position for both pointers.

   >> cannot assign to q by subtracting p - q, throws error, assignment to 'int *' from 'long int' makes pointer from integer without a cast
           it prints only the no of elements present inbetween, so need to store it another variable.
   >> if ptr variable points to first index of array if you do subtraction with 1, i.e, p = p-1, it will prints some garbage value as it points to some other memory, won't through error.

   Note:
   >> p = p-q;  //invalid error occurs
   >> p = p-2; //valid
   >> d = p - q; or d = q - p; //valid
   >> p = p+1 //valid
   >> p = p+q //not valid

    ==> Key Points
       *++p     --> *(p+1) or (a[i+1])
       *p++     --> *(p+1) or (a[i+1])
       (*p)++   --> (*p)+1 or (a[i]+1)
       ++(*p)   --> (*p)+1 or (a[i]+1)
       p++      --> *(p+1) or (a[i+1])
       ++p      --> *(p+1) or (a[i+1])

9. Pointer to array (single pointer to whole array)
    int a[5] = {1,2,3,4,5};
    int (*p)[5] = &a;
   for(int i = 0;i<5;i++)
   {
   printf("addresss : %d, value : %d\n", &(*p)[i], (*p)[i]);     // prints from 1 to 4. paranthesis important for pointer to array.
   }

10. array to pointer (single pointer for every member in a array)
    int a[] = {1,2,3,4,5};
    int *p[5] = {&a[0], &a[1], &a[2], &a[3], &a[4]};
    for(int i=0; i<5; i++) {
        printf("Value: %d, Address: %p\n", *p[i], p[i]); 
    }

11. operator precedence for pointer arithmetic
    precedence occur from right to left.
    int a[] = {1,2,3,4};
    int *p = a;
    printf("%d, %d, %d, %d", *p++, *++p, (*p)++, ++(*p));
    output : 2,2,2,2
   
   
   
   
       
       
