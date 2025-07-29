# Loops In C++

## Name: Maitraiyee Vashistha
## PRN: 24070123057
## Division: ENTC-A3
## Title: loops In C ++
---
## Aim

*To study and implement different types of loops in C++, including `for` and `while`, and apply them to real-world problems such as password validation, pattern printing, and number reversal.*

---

##  Objectives

- Understand the syntax and behavior of `for`, `while`, and nested loops.
- Implement control flow using `continue` and `exit(0)`.
- Solve real-world logic problems like:
  - Printing even numbers
  - Validating passwords
  - Reversing digits
  - Generating star, number, and alphabet patterns

---

## Theory

### Looping in C++

Looping allows a block of code to be executed multiple times until a condition becomes false.

#### 1. `for` Loop
Used when the number of iterations is known.

`for(initialization; condition; update) {
    // loop body
}`

#### 2. `while` Loop

Used when the number of iterations is not predetermined.

`while(condition) {
    // loop body
}`

#### 3. `do-while` Loop (Not used here)

Executes the loop body at least once.

`do {
    // code
} while(condition);`


---

### Loop Control Statements

 - `continue`: Skips the current iteration and proceeds to the next cycle.

 - `exit(0)`: Exits the program immediately, usually after a success or error condition.



---

#### Header File Used: <string>

Used for handling C-style strings (char arrays).


#### Important functions:

 - `strlen()` – Get string length

 - `strcpy()` – Copy strings

 - `strcmp()` – Compare strings

 - `strcat()` – Join strings

 - `strchr()`, `strstr()` – Search in strings



---

## Summary of Programs

### Program1. Print “Hi” 5 Times (for loop)

Algorithm:

 - Initialize a counter from 0.

 - Loop until counter < 5.

 - Print "Hi" in each iteration.


Output:

Hi.    
Hi.    
Hi.    
Hi.    
Hi.    


---

 ### Program2. Print Even Numbers (0 to 20)

Algorithm:

 - Start from 0 and loop till 20.

 - Check if number is even using %.

 - Use continue to skip odd numbers.


Output:

0
2
4
6
8
10
12
14
16
18
20


---

### Program3. Password Validation (working login)

Algorithm:

 - Take email and set password.

 - Use while loop to check entered password.

 - If incorrect, show menu:

1. Retry


2. Change password


3. Forgot password


4. Exit




Sample Output:

Enter your Email : abc@gmail.com 
Set your password: abc
Enter your password: abc
Incorrect password!
--- MENU ---
1. Retry login
2. Change password
3. Forgot password
4. Exit
Enter choice: 1
Enter password: abcd
Login successful! Welcome to your portal.


---

### Program4. Reverse Digits of a Number

Algorithm:

 - Input number

 - While number > 0:

 - Get last digit: number % 10

 - Print digit

 - Update number: number = number / 10



Output:

Enter num:
23069
9
6
0
3
2


---

### Program 5. Nested for Loops – Pattern Printing

 Left-Aligned Triangle

*
**
***
****
*****

 Right-Aligned Triangle

    *
   **
  ***
 ****
*****

 Inverted Triangle

*****
****
***
**
*

 Equilateral Triangle

    *
   * * 
  * * * 
 * * * * 
* * * * *

 Hourglass Pattern

* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *

 Pyramid

     *
    ***
   *****
  *******
 *********

 Floyd’s Triangle

1
2 3
4 5 6
7 8 9 10

 Diamond Pattern

    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    *

 Reverse Pyramid

* * * * * *
  * * * *
   * * *
    * *
     *

 Mirrored Right-Angled Triangle

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *

 Row Number Pyramid

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

 Number Triangle

    1
   23
  345
 4567
56789

 Alphabet Pyramid

A
BB
CCC
DDDD
EEEEE

 Continuous Alphabet Pyramid

A
BC
DEF
GHIJ
KLMNO

 Half Diamond Pattern

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *


---

## Concepts Used

 - for, while, and nested loops

 - continue, exit(0)

 - % and / for digit manipulation

 - strcmp() for string comparison

 - <cstring> for C-style string operations

 - User-defined inputs, menu logic, pattern















