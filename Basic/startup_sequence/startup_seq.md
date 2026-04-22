#startup sequence
when the board is powered on, after the bootloader sequence, the startup sequences starts.
1. Vector Table fetch

    Cpu automatically fetches the stack pointer address and reset handler address from the vector table.
2. Reset handler execution
    Here only the actual startu execution starts.
    1. Initializes the stack, the SP already loaded from the vector table.
    2. Initialize data section, copies the data from ROM to ram.
    3. Initialize the .bss section, initialize all the variable to zero.
    4. System initialization occurs such as clock setup, peripheral base setup, MPU and FPU enable if required,
    5. Initialize global and static variable.
    6. Finally executes the main() function.
