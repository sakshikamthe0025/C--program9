# C--program9

# Addition of Two Integers Using a Function in C

## 1. Description
This C program accepts two integers from the user, calculates their sum using a user-defined function named `Addition()`, and displays the result.

## 2. Algorithm
1. Start.
2. Accept the first integer from the user.
3. Accept the second integer from the user.
4. Call the `Addition()` function by passing both integers as arguments.
5. Add the two integers inside the `Addition()` function.
6. Return the calculated sum.
7. Display the addition result.
8. Terminate the program successfully using `EXIT_SUCCESS`.

## 3. Function Details

| Property | Details |
|---|---|
| Function Name | `Addition()` |
| Input | Two integers |
| Return Type | `int` |
| Description | Adds two integers and returns their sum |
| Header Files | `stdio.h`, `stdlib.h` |

## 4. Sample Output

```text
Enter first number :
10
Enter Second number :
11
Addition is : 21
```

## 5. Test Cases

| First Number | Second Number | Expected Result |
|---:|---:|---:|
| 10 | 11 | 21 |
| 11 | 0 | 11 |
| 0 | 11 | 11 |
| 20 | -9 | 11 |
| -9 | 20 | 11 |
| -20 | -11 | -31 |

## 6. Concepts Used
- User-defined functions
- Function arguments and return values
- Integer variables
- `scanf()` for accepting input
- `printf()` for displaying output
- `EXIT_SUCCESS` for successful program termination

## 7. Compilation and Execution

Compile using GCC:

```bash
gcc program.c -o program
```

Run on Windows:

```bash
program.exe
```

Run on Linux/macOS:

```bash
./program
```

## 8. Author
**Sakshi Sandip Kamthe**

## 9. Conclusion
This program demonstrates modular programming in C by performing addition through a user-defined function. The function receives two integers, calculates their sum, and returns the result to `main()`. The program uses `EXIT_SUCCESS` to indicate successful termination.
