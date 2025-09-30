# CPP_Error-Handling

### EXPERIMENT 15
### Name: Gandluri Sai Tejas
### Class:ENTC A
### PRN: 24070123045
### Title: ERROR HANDLING


## Aim  
To implement and demonstrate the concept of **Exception Handling in C++** by writing programs that handle:  
1. Age validation for voting eligibility.  
2. Division of two numbers, preventing division by zero.  

---

## Objectives  
1. To understand the concept of **exceptions and error handling** in C++.  
2. To use `try`, `throw`, and `catch` blocks effectively.  
3. To prevent abnormal termination of a program using exception handling.  
4. To validate user input and handle runtime errors gracefully.  
5. To compare **traditional error handling** with **exception handling**.  

---
# Error Handling in C++

Error handling is the mechanism to detect and respond to runtime errors in a program. Proper error handling ensures that the program does not crash and can either recover or provide meaningful feedback to the user. C++ provides structured exception handling for this purpose.

---

## 1. What is an Exception?

- An **exception** is an abnormal condition that occurs during program execution.
- It interrupts the normal flow of the program.
- Examples: 
  - Division by zero
  - File not found
  - Invalid input
  - Out-of-memory errors
- In C++, exceptions are objects that are thrown when an error occurs.

---

## 2. Keywords in Exception Handling

| Keyword  | Purpose |
|----------|---------|
| `try`    | Contains the code that might generate an exception. |
| `throw`  | Used to **throw** an exception when an error occurs. |
| `catch`  | Catches and handles the exception thrown. |

---



## Flow of Execution  
1. The program enters the **try block**.  
2. If an error occurs, control jumps to the **catch block**.  
3. If no error occurs, the catch block is skipped.  

---

## Comparison: Traditional Error Handling vs Exception Handling  

| Feature                  | Traditional Error Handling     | Exception Handling in C++         |
|---------------------------|--------------------------------|-----------------------------------|
| Method                   | Return codes / Flags           | try, throw, catch                 |
| Error Detection          | Programmer must check manually | Automatic jump to catch block     |
| Code Readability         | Complex, cluttered             | Cleaner and more structured       |
| Abnormal Termination     | Possible                       | Prevented                         |
| Handling Multiple Errors | Difficult                      | Easy with multiple catch blocks   |

---


## 3. Syntax of Exception Handling
~~~cpp

try {
    // Code that may throw an exception
    if (error_condition)
        throw exception_object;   // throw exception
}
catch (exception_type e) {
    // Code to handle the exception
    cout << "Error: " << e << endl;
}
~~~
---

## Programs and their algorithms

## Program Summary  
- Implemented **two programs** to demonstrate exception handling.  
- Used **try, throw, and catch** for error detection and handling.  
- Validated **age input** for voting eligibility.  
- Prevented **division by zero** error.  
- Programs executed without abnormal termination.  

---

## Concepts Used  
- **Object-Oriented Programming (OOPs):** Exception handling mechanism.  
- **try-catch-throw:** Error detection and handling.  
- **Control Structures:** Conditional statements for error conditions.  
- **I/O Handling:** User input via `cin`, output via `cout`.  

---
### Program 1: Age Validation

1. Start.  
2. Input `age` from user.  
3. Inside try block:  
   - If `age < 18`, throw exception.  
   - Else display valid age.  
4. In catch block:  
   - Display error message "Not eligible for voting".  
5. End.  

### Program 2: Division by Zero

1. Start.  
2. Input two numbers `n1` and `n2`.  
3. Inside try block:  
   - If `n2 == 0`, throw exception.  
   - Else compute `ans = n1 / n2` and display result.  
4. In catch block:  
   - Display error message "Division by 0".  
5. End.  

---

## Conclusion  
This experiment demonstrated the use of **exception handling in C++**.  

We observed:  
- Errors can be caught dynamically during runtime using **try, throw, and catch**.  
- The **age validation program** ensured voting eligibility is checked correctly.  
- The **division program** handled the common error of dividing by zero.  
- Exception handling makes programs more **robust, safe, and user-friendly**.  

**Real-life applications include:**  
- Input validation systems.  
- File handling errors.  
- Network communication errors.  
- Database transaction safety.  

---
