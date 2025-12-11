*This project has been created as part of the 42 curriculum by decabral.*

**Description:**
- The goal of this project is to recreate the functionalities of the origianl function `printf` from C library (`stdio.h`). `ft_printf` prints something to the standart output (STOUDT) replicating the behavior of the original for each specific format. This project allows a deeper understanding of variadic functions, memory management and data formatting. 

**Instructions:**
- For compilation this project has a Makefile.
> On terminal in the project root, run:
```
make
```
> This will generate the static library `libftprint.a`.
> Compile the file with the library:
```
cc libftprintf.a
```
> Run the executable:
```
./a.out
```
> Cleaning (to remove the object files and clean the directory):
```
make fclean
```

**Explanation and Justification of Data and Structure**:
- The `printf` function takes an undefined number of arguments. For that, it was implementaded the Variadic Functions (`va_list`) from the `stdarg.h` library, taking as many arguments as it's passed. The va_start, va_arg and va_end are macros that allows the function to access the arguments dynamically as they are found at the format string.

- The main function that iterates through the format string. When it hits at `%`, it checks and "calls" the `check_spec` function. This function has the job to look at the next character and choose wich auxiliar function is appropriate to use.

- The `printf` function also prints numbers (integers, hexadecimals, pointers), to make this work, was necessary to use recursion. This allows the function to breakdown numbers digit by digit and print them one by one making them chars.

**Resources:**
- For this project I saw some videos on youtube that helped me through the understanding of how printf works.
- Here are some links:
[Let's build a mini printf function](https://www.youtube.com/watch?v=byRw36Y3Hjs&t=1903s)
[All you need to know about variadic functions](https://www.youtube.com/watch?v=7Sph8JlRo0g&t=858s)
[What are variadic functions (va_list) in C?](https://www.youtube.com/watch?v=oDC208zvsdg)

Also I saw how the original works on Manual 3 printf `man 3 printf`, and Manual for va_args
`man va_arg`.

> AI
 - Used AI to help me understand and make simpler the technical language in the pages of Manual, asking for it to explain me "like i'm five". Helping to clarify the edge cases and flags.
- Also helped through interpreting some compile error messages that I didn't understand and clarifying some specific rules for makefile.
