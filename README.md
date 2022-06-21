# C Language Notes

>C Language -> Assembly Language -> Machine Code

- ## Assembler
converts assembly language code into machine language

Compiler | Interpreter
-- | --
Scans the entire program and translates it as a whole into machine code | Translates program one statement at a time
take a large amount of time to analyze the source code (overall execution time is faster) | take less amount of time to analyze the source code (overall execution time is slower)
Generates Object Code which further requires linking, hence requires more memory. | No Object Code is generated, hence are memory efficient
Dubugging Difficult | Debugging Easy
E.g. C, Cpp | E.g. Python, Javascript, Ruby

#
## Features of C
- High level Language
- small language, 32 keywords
- core language
- portable
- built-in functions and operators
- structural language, supports modular programming
- pointers, good memory control
- extensible
- compiled language
- dynamic memory allocation
- case sensitive
- microcontroller language, system programming
- platform dependent language

#
## Structure of C program
- Documentation Section (Commented)
- Linking Section (Preprocessors)
- Definition Section
- Global Declaration
- Main Functions
- Other Functions (Optional)

#
## Execution of a C program
1) C program (source code) is sent to preprocessor first. The preprocessor is responsible to convert preprocessor directives into their respective values. The preprocessor generates an expanded source code.
2) Expanded source code is sent to compiler which compiles the code and converts it into assembly code.
3) The assembly code is sent to assembler which assembles the code and converts it into object code. Now a simple.obj file is generated.
4) The object code is sent to linker which links it to the library such as header files. Then it is converted into executable code. A siple.exe file is generated.
5) The executable code is sent to loader which loads it into memory and then it is executed. After execution, output is sent to console.
#
>main.c->(preprocessor)-> main.i->(compiler) main.asm->(assembler)-> main.obj->(linker) main.exe
#

