# Topic: Foundations

## Concepts Practiced

1. endl and \n
2. The semicolon (;)
3. cin & cout
4. full line input with getline and delimiter
5. cin.ignore();
6. isstringstream - basic

## Files in This Folder

- `add.cpp` – adds augend and the addend and display the sum
- `StringInput.cpp` – showcase the use of getline and delimiter
- `CinIgnore.cpp` - Showcases the importance of cin.ignore();
- `form.cpp` - showcase the usage of istringstream and practice the prior concepts

## Bugs or Confusions Faced

- [ ] [Example: Assigned float to int → lost decimals]
- [ ] [Example: Used = instead of ==]

## Key Learnings

> endl and \n serves the same task, i.e. skipping to the next line
--
> The semicolon (;) is a statement terminator.
--
> cin is for taking the input from console while cout is for giving the output to the console.
--
> getline takes the whole input to the buffer unless specifies using a delimiter or a next line is consoled
--
> If getline is used after cin >>, it may skip input due to leftover newline characters. we fix it with cinIgnore(). `cin.ignore()` clears the leftover newline (`\n`) from the input buffer after `cin >>`, so `getline()` can read the next full line properly.
--
> `istringstream` allows you to treat a string like an input stream, enabling word-by-word extraction using the `>>` operator. It's ideal for parsing space-separated data like names, commands, or tokens from a single string.
--
>

## Next Steps

- [ ] [Optional: Follow-up tasks, like adding more practice or writing review notes]
