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
  - Printing even numbers.   
  - Validating passwords.    
  - Reversing digits.    
  - Generating star, number, and alphabet patterns.     

---

## Theory

### Looping in C++

Looping allows a block of code to be executed multiple times until a condition becomes false.

#### 1. `for` Loop
Used when the number of iterations is known.

```cpp
for(initialization; condition; update) {
    // loop body
}
```

#### 2. `while` Loop

Used when the number of iterations is not predetermined.

```cpp
while(condition) {
    // loop body
}```

#### 3. `do-while` Loop (Not used here)

Executes the loop body at least once.

```cpp
do {
    // code
} while(condition);
```


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

```cpp
Hi.        
Hi.        
Hi.        
Hi.        
Hi.        
```

---

 ### Program2. Print Even Numbers (0 to 20)

Algorithm:

 - Start from 0 and loop till 20.

 - Check if number is even using %.

 - Use continue to skip odd numbers.


Output:

```cpp
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
```

---

### Program3. Password Validation (working login)

Algorithm:

 - Take email and set password.      

 - Use while loop to check entered password.    
  
 - If incorrect,Retry.   
 




Sample Output:

```cpp
Enter your email : xyz@gmail.com
Enter the password : 547
Incorrect Password !
Enter the password : 123
account unlocked !         
```

---

### Program4. Reverse Digits of a Number.     

Algorithm:

 - Input number

 - While number > 0:

 - Get last digit: number % 10

 - Print digit

 - Update number: number = number / 10



Output:

```cpp
Enter num:
23069.       
9.     
0.     
3.     
2.      
```

---

### Program 5. Nested for Loops – Pattern Printing

 Left-Aligned Triangle

```cpp
*
**
***
****
*****
```

 Right-Aligned Triangle

```cpp
    *
   **
  ***
 ****
*****
```

 Inverted Triangle
```cpp
*****
****
***
**
*
```

 Equilateral Triangle

 ```cpp
    *
   * * 
  * * * 
 * * * * 
* * * * *
```

 Hourglass Pattern
```cpp
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
```

 Pyramid
```cpp
     *
    ***
   *****
  *******
 *********
```

 Floyd’s Triangle
```cpp
1
2 3
4 5 6
7 8 9 10
```

 Diamond Pattern
```cpp
    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    *
```

 Reverse Pyramid
```cpp
* * * * * *
  * * * *
   * * *
    * *
     *
```

 Mirrored Right-Angled Triangle
```cpp
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
```

 Row Number Pyramid
```cpp
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
```
 Number Triangle
```cpp
    1
   23
  345
 4567
56789
```
 Alphabet Pyramid
```cpp
A
BB
CCC
DDDD
EEEEE
```
 Continuous Alphabet Pyramid
```cpp
A
BC
DEF
GHIJ
KLMNO
```
 Half Diamond Pattern
```cpp
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
```

---

## Concepts Used

 - for, while, and nested loops

 - continue, exit(0)

 - % and / for digit manipulation

 - strcmp() for string comparison

 - <cstring> for C-style string operations

 - User-defined inputs, menu logic, pattern















