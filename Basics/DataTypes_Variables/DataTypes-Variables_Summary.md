# Topic: Data types and Variables

---

## Concepts Practiced

1. variables: declaration and initialization

2. character: declaration and complexities

3. `sizeof();`

4. `setprecision(n);`

5. boolean data type

---

## Files in This Folder

- `VarDecInit.cpp`: showcase variable declaration and initialization
- `CharDecInit.cpp`: showcase character declaration and ASCII manipulations with char
- `sizeOf.cpp`: showcase various data types and their size
- `SetPrecision.cpp`: showcase the usage of setprecision();
- `vote.cpp`: showcase boolean data type working.
- `bool01.cpp`: showcase bool value under the hood.
- `typecasting.cpp`: showcase basic typecasting; float to int

---

## Key Learnings

1. a garbage value is stored if variable is not initialized with a value.

2. every character should be declared inside the single quotation

3. a character stores the ASCII value if the value initialized is numeric and not surrounded by single quotations

4. 2 digits are treated as double characters; throws warning and prints last digit. the result varies across compilers

5. `sizeof()` gives the amount of bytes a variable will use in the memory.

6. Iomanip – Input/Output Manipulator
    is a C++ header file that gives you control over how data is displayed when you output it using cout.

7. setprecision(n) – Control Decimal Precision

8. the placement of variable name while adding the complexities matter. place the variablename before the complexities declared and it won't work.
        cout << "your cgpa is " << fixed << setprecision(2) << cgpa << endl; works
        cout << "your cgpa is " << cgpa << fixed << setprecision(2) << endl; does't work

9. A boolean is a data type that holds only two possible values: true or false. It's used to control logic flow, especially in conditions and decision-making statements like if, while, or for.

10. A bool:
           false is represented by 0
           true is represented by any non-zero value, but usually 1

11. Typecasting is the process of converting a variable from one data type to another to ensure compatibility or precision control in computations.

---

## Next Steps

- [ ] [Optional: Follow-up tasks, like adding more practice or writing review notes]
