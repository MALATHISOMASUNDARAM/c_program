#compilation process
-> 4 stages : Preprocessor, compiler, Assembler and Linker

#Preprocessor
1. includes the header content.
2. expands/replace the macro with its value.
3. removes the comment line - single comment line, multi comment line.
4. evaluates the condition compilation (#if 1 -> proceed further, #if 0 -> removes the code inside in it).
5. converts.c file to .i file.

#Compiler
1. Compiles the code for the syntax(grammer of c), semantic error(typechecking, declaration,etc..,).
2. It parses error and performs optimiza,tion
3. converts the code to assembly language code.
4. converts the .i file to .s file.

#Assembler
1. Converts the assembly language code into binary code.(machine understandable).
2. converts .s file to .o file format.

#linker
1. Links all the .o files into one .exe file.
2. links the standard library files.
3. resolves the external symbols such as printf, scanf,etc..,(finds actual implementation in libc)
4. assign final address to symbols.
   
