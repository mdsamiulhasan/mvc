==================Note Of  C programming==================
                                      Md Samiul Hasan (Bsc in Cse)
                                    WhatsApp:  01728081275
                                Gmail:   mdsamiulhasanroxy065@gmail.com
                                   


Question 01The main difference between a variable and a constant is how their values are used in a program.
Variable:
1.	What it is: A variable is a container that holds data, and its value can change while the program is running.
2.	Can change: You can update the value of a variable at any time.
3.	Example:
int age = 25;
age = 30; // The value of 'age' is changed
4.	When to use: Use variables when you need to store values that might change during the program.
________________________________________
Constant:
1.	What it is: A constant is a container that holds data, but its value cannot change once it is set.
2.	Cannot change: Once you assign a value to a constant, it stays the same throughout the program.
3.	Example:
const double Pi = 3.14159;
// Pi = 3.14; // This will cause an error because 'Pi' is a constant
4.	When to use: Use constants for fixed values that never change, like mathematical values or configuration settings.
________________________________________
Key Differences:
Feature	Variable	Constant
Value changes	  Can be changed	                         Cannot be changed
Declaration	int, string, etc.	             const, readonly, etc.
Example	int x = 10;	             const double Pi = 3.14;

What are the roll we should follow for a variable name in c
________________________________________
Rules for Variable Names in C
These are mandatory rules defined by the C language:
1.	Start with a Letter or Underscore:
o	Variable names must start with a letter (a-z, A-Z) or an underscore _.
o	Correct: age, _name
o	Incorrect: 1name, @data
2.	Use Only Letters, Digits, and Underscores:
o	Variable names can contain letters, digits (0-9), and underscores _.
o	Correct: user_id, totalMarks1
o	Incorrect: total-marks, total marks
3.	Case Sensitivity:
o	C is case-sensitive, so age and Age are different variables.
4.	No Reserved Keywords:
o	You cannot use C keywords like int, return, while, etc., as variable names.
o	Incorrect: int, while
o	Correct: myInt, whileLoop
5.	Avoid Starting with an Underscore in Global Scope:
o	Names starting with an underscore _ are reserved for system variables in the global scope.
Write an algorthm and also draw the flowchart to calculate and print the total number of student who first division in c program
Ans:
1.	Start
2.	Initialize a variable count to 0 (this will store the total number of students with first division).
3.	Input the total number of students (n).
4.	For each student (from 1 to n):
o	Input the marks obtained by the student.
o	If the marks are greater than or equal to 60, increment the count by 1.
5.	Print the total number of students with first division (count).
6.	End
________________________________________
C Program Implementation
#include <stdio.h>

int main() {
    int n, count = 0, marks;

    // Input the total number of students
    printf("Enter the total number of students: ");
    scanf("%d", &n);

    // Loop through each student
    for (int i = 1; i <= n; i++) {
        printf("Enter marks for student %d: ", i);
        scanf("%d", &marks);

        // Check if marks qualify for first division
        if (marks >= 60) {
            count++;
        }
    }

    // Print the total number of students with first division
    printf("Total number of students with first division: %d\n", count);

    return 0;
}
________________________________________
Flowchart
Description of the Flowchart:
1.	Start the process.
2.	Input the total number of students (n).
3.	Initialize count = 0.
4.	For each student, input marks and check:
o	If marks >= 60, increment count.
5.	Repeat until all students are processed.
6.	Print the count.
7.	End.
Sample diagram
8.	 

What is the purpose of scanf() and printf()
1. scanf() Function:
•	Purpose:
The scanf() function is used to take input from the user. It reads formatted data from the standard input (usually the keyboard).
•	Syntax:
scanf("format_specifier", &variable);
o	format_specifier: Specifies the type of input (e.g., %d for integers, %f for floating-point numbers, etc.).
o	&variable: The address of the variable where the input will be stored.
•	Example:
   int age;
printf("Enter your age: ");
scanf("%d", &age); // Takes an integer input and stores it in 'age'
•	Use Case: To get input values such as numbers, characters, or strings from the user.
________________________________________
2. printf() Function:
•	Purpose:
The printf() function is used to display output on the screen. It prints formatted data to the standard output (usually the console).
•	Syntax:
printf("format_specifier", variable);
o	format_specifier: Specifies the type of data to be printed (e.g., %d for integers, %s for strings).
o	variable: The variable whose value you want to print.
•	Example:
int age = 25;
printf("Your age is %d\n", age); // Displays: Your age is 25



Write the appropriate data type format specifier for both printing and scaning

Explanation of Format Specifiers
1.	Integer (int):
o	printf(): %d
o	scanf(): %d
2.	Floating-point (float):
o	printf(): %f
o	scanf(): %f
3.	Double-precision float (double):
o	printf(): %lf
o	scanf(): %lf
4.	Character (char):
o	printf(): %c
o	scanf(): %c
5.	String (char[]):
o	printf(): %s
o	scanf(): %s
6.	Long Integer (long):
o	printf(): %ld
o	scanf(): %ld
7.	Unsigned Integer (unsigned int):
o	printf(): %u
o	scanf(): %u
8.	Long Double (long double):
o	printf(): %Lf
o	scanf(): %Lf

o	if else structure using proper execution flow diagram
 
Simple Algorithm for an If-Else Structure
1.	Start
2.	Input a value (e.g., number).
3.	Check Condition:
o	If the condition is true (e.g., number > 0), execute the if block.
o	Otherwise, execute the else block.
4.	Output the result based on the condition.
5.	End

Example Algorithm
Check if a number is positive or not:
1.	Start
2.	Input a number (num).
3.	If num > 0:
o	Print "The number is positive."
o	Go to Step 5.
4.	Else:
o	Print "The number is not positive."
5.	End
 
Differences Between Conditional Operators and If-Else
Aspect	Conditional Operator	If-Else
Readability	Concise but harder to read for complex conditions	Clear and structured for multiple conditions
Use Case	For simple, single-line conditions	For complex conditions or multiple statements
Performance	   Slightly faster for single conditions	Suitable for more extensive logic
Example	(a > b) ? a : b;	if (a > b) { return a; } else { return b; }

//More example
#include <stdio.h>

int main() {
    int num = 5;
    char* result = (num % 2 == 0) ? "Even" : "Odd";
    printf("The number is %s\n", result);  // Output: The number is Odd
    return 0;
}
If-Else Statement:
c
Copy code
#include <stdio.h>

int main() {
    int num = 5;
    if (num % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }
    // Output: The number is Odd
    return 0;
}

//when used:
•  Use conditional operators for simple, quick conditions in a single statement.
•  Use if-else statements for more complex, structured, or multi-step logic.




what is looping statement
A looping statement in programming lets you repeat a set of instructions multiple times, as long as a condition is true. It helps avoid writing the same code repeatedly and is useful for tasks that need repetition
Here are the types of loops in C:
1.	for loop
2.	while loop
3.	do-while loop
Choosing the Right Loop
•	Use for when the number of iterations is fixed.
•	Use while when the number of iterations is unknown.
•	Use do-while when you need the loop to execute at least once.
Different between and entry control loop and exit
Difference Between Entry Control Loop and Exit Control Loop
1.	Entry Control Loop:
o	The condition is checked before the loop starts.
o	If the condition is false initially, the loop will not execute.
o	Example: for loop, while loop.
2.	Exit Control Loop:
o	The condition is checked after the loop has executed at least once.
o	The loop will always execute at least once, even if the condition is false.
o	Example: do-while loop.
In Simple Words:
•	Entry Control: Checks the condition first, may skip the loop if the condition is false.
•	Exit Control: Executes the loop at least once before checking the condition.

What are the limitation of an arrray?explain the declaration initialization syntax of 1D and 2D
Limitations of an Array (in Simple Words):
1.	Fixed Size:
Once an array is created, its size cannot be changed. You have to decide how many elements you want to store before using it.
2.	Same Type of Data:
Arrays can only store one type of data, like all numbers or all characters, not a mix of different types.
3.	Memory Usage:
Arrays take up a block of memory, and if the array is large, it can use a lot of memory, which may not always be available.
4.	Cannot Resize:
You can’t change the size of an array once it is created. If you need a bigger or smaller array, you have to create a new one.
5.	Out-of-Bounds Errors:
There is no built-in way to stop you from accessing an array element that doesn’t exist. This can cause errors or crashes.
________________________________________
Array Declaration and Initialization
1D Array (Single Line Array):
•	Declaration:
You declare an array by specifying its size and type.
    data_type array_name[array_size];
•	Initialization:
You can assign values to an array when you declare it.
data_type array_name[array_size] = {value1, value2, value3, ...};
Example:
int numbers[5];   // Declaring an array of 5 integers
numbers[0] = 10;  // Assigning values
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;

// Or initializing in one step:
int numbers[5] = {10, 20, 30, 40, 50};
2D Array (Array with Rows and Columns):
•	Declaration:
You declare a 2D array by specifying rows and columns.
data_type array_name[rows][columns];
•	Initialization:
You can assign values to each row and column.
data_type array_name[rows][columns] = {
    {value1, value2, value3},
    {value4, value5, value6},
    ...
};
Example:
int matrix[2][3];          // Declaring a 2x3 matrix (2 rows, 3 columns)
matrix[0][0] = 1;         // Assigning values to each element
matrix[0][1] = 2;
matrix[0][2] = 3;
matrix[1][0] = 4;
matrix[1][1] = 5;
matrix[1][2] = 6;

// Or initializing in one step:
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};





what are the rule should be followed for the variable naming?
Rules for Naming Variables in C:
1.	Start with a Letter or Underscore (_):
A variable name must begin with a letter (a-z or A-Z) or an underscore (_).
Example: age, _count.
2.	No Special Characters:
Variable names cannot include symbols like @, #, !, etc.
3.	No Spaces:
Variable names cannot have spaces. Use underscores (_) to separate words if needed.
Example: first_name, not first name.
4.	Use Alphanumeric Characters:
Variable names can include letters (a-z, A-Z) and digits (0-9) but cannot start with a digit.
Example: data1 is valid, but 1data is not.
5.	Case-Sensitive:
Variable names are case-sensitive. Age and age are different variables.
6.	No Keywords:
You cannot use reserved keywords (like int, float, if) as variable names.
7.	Meaningful Names:
Use meaningful names that describe the purpose of the variable.
Example: Use totalMarks instead of t.
8.	Length Limit:
Variable names should not exceed 31 characters for portability.
9.	Avoid Starting with Underscore:
Although starting with _ is allowed, it's better to avoid it because some system or library variables use this naming convention.
________________________________________
Example of Valid and Invalid Names:
Valid Names	                 Invalid Names
age	          1age
student_count	          student count
_totalMarks	          total@Marks
marks2024	          int (keyword)
averageSpeed	          average-Speed


Show the flow chart of while loop and do while loop

Ans:





 

How many data type in c programming language

Data Types in C Programming Language


1. Primary (Basic) Data Types
These are the fundamental data types in C.
•	Integer (int): Used for whole numbers.
Example: int age = 25;
•	Floating-point (float): Used for decimal numbers.
Example: float price = 10.99;
•	Double (double): Used for high-precision decimal numbers.
Example: double pi = 3.141592653;
•	Character (char): Used for a single character.
Example: char grade = 'A';
________________________________________
2. Derived Data Types
These are built from basic data types.
•	Array: A collection of elements of the same type.
Example: int numbers[5];
•	Pointer: Stores the memory address of another variable.
Example: int *ptr;
•	Structure (struct): Groups variables of different data types.
Example:
struct Student {
    char name[50];
    int age;
};
•	Union: Like struct, but uses shared memory for all members.
Example:
union Data {
    int id;
    float salary;
};
________________________________________
3. Enumeration (enum)
Used to define a set of named integer constants.
Example:
enum Color { RED, GREEN, BLUE };
________________________________________
4. Void Type
•	Void (void): Represents "no value" or "no type."
o	Used for functions that do not return a value.
Example: void displayMessage();
________________________________________
Detailed Classification of Basic Data Types
Type	Size	Range
char	1 byte	-128 to 127 (or 0 to 255)
int	2 or 4 bytes	-32,768 to 32,767 (or more)
		
float	4 bytes	±3.4E-38 to ±3.4E+38
double	8 bytes	±1.7E-308 to ±1.7E+308
________________________________________
What is a Keyword in C?
In C programming, keywords are reserved words that have a predefined meaning in the language. These words are part of the syntax and cannot be used as variable names, function names, or identifiers because they are already defined for specific tasks by the compiler.
Characteristics of Keywords:
1.	Predefined: Keywords have a fixed meaning in the C language and cannot be redefined.
2.	Lowercase: All keywords in C are written in lowercase.
3.	Reserved Words: These words are reserved for specific purposes like defining data types, controlling program flow, etc.
List of Keywords in C:
Category	Keywords
Data Types	int, float, char, double, void, long, short
Control Flow	if, else, switch, case, default, for, while, do, goto, break, continue
Storage Classes	auto, static, register, extern
Modifiers	signed, unsigned, const, volatile
Others	return, sizeof, typedef, struct, union, enum
Memory Management	malloc, free (in standard libraries, not strict keywords)
What is the purpose of the keyword void in c
Purpose of the void Keyword in C
The void keyword in C serves multiple purposes and indicates the absence of a value or type. It is used in various contexts to define functions, pointers, and return types.
1. As a Function Return Type
•	Purpose: Specifies that a function does not return any value.
•	Example:
void displayMessage() {
    printf("Hello, World!");
}

2. As a Void Pointer (void *)
•	Purpose: Acts as a generic pointer that can hold the address of any data type.
•	Example:
    void *ptr;
int num = 10;
ptr = &num; 
2. As a Function Parameter Type
•	Purpose: Indicates that a function takes no arguments.
•	Example:
void greet(void) {
    printf("Good Morning!");
}
What is a Function in C?
A function in C is a block of reusable code designed to perform a specific task. It allows you to divide a program into smaller, manageable, and reusable components, making it easier to write, debug, and maintain.
________________________________________
Key Features of a Function:
1.	Modularity: Breaks the program into smaller parts.
2.	Reusability: Once defined, a function can be called multiple times.
3.	Readability: Makes the code easier to understand.
4.	Parameterization: Functions can accept input values (parameters) and return results.
what is different user defined and built in function
Difference Between User-Defined and Built-In Functions in C
Aspect	User-Defined Function	Built-In Function
Definition	Functions created by the programmer to perform specific tasks.	Predefined functions provided by the C standard library.
Purpose	Used to handle tasks specific to the program's needs.	Used for common operations like input/output, math, etc.
Creation	Programmer writes the code for the function.	Already defined and available in libraries.
Examples	int add(int a, int b) { return a + b; }	printf(), scanf(), strlen(), sqrt()
Customization	Fully customizable to fit the programmer's requirements.	Cannot be modified; functionality is fixed.
Requires Declaration	Yes, before use (prototype needed).	No, just include the appropriate header file.
Header File	No predefined header file required.	Requires appropriate standard library header (e.g., #include <stdio.h>, #include <math.h>).
Examples in Use	Custom logic for calculations or operations specific to a program.	Directly handles standard input, output, math, and string operations.

What is struct in C?
In C, a struct (short for structure) is a user-defined data type that allows grouping variables of different data types together under one name. It is used to represent more complex data by combining multiple related variables into a single unit.
________________________________________
Features of struct:
1.	Combines Multiple Variables: Can include variables of different types (e.g., integers, floats, characters).
2.	User-Defined: Created by the programmer to suit specific needs.
3.	Efficient Organization: Makes handling related data more manageable.
4.	Memory Allocation: Allocates memory for all the variables defined within the structure.
________________________________________
Syntax of struct:
struct StructureName {
    data_type member1;
    data_type member2;
    ...
};
________________________________________
Example:
Let's define a struct to represent a student:
#include <stdio.h>

// Define a structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to the structure members
    student1.id = 1;
    student1.marks = 95.5;
    snprintf(student1.name, 50, "Alice");

    // Print the values
    printf("Student ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}

Here’s a curated list of 50 important C programs frequently asked in university exams. These programs cover a range of topics, including loops, arrays, functions, strings, file handling, and pointers.
________________________________________
Basic Programs
1.	Print "Hello, World!"
2.	Find the sum of two numbers.
3.	Find the maximum of three numbers using if-else.
4.	Check if a number is even or odd.
5.	Swap two numbers without using a third variable.
________________________________________
Loop and Conditional Programs
6.	Print the first n natural numbers using a loop.
7.	Calculate the sum of digits of a number.
8.	Reverse a given number.
9.	Check if a number is a palindrome.
10.	Check if a number is prime.
11.	Print all prime numbers in a given range.
12.	Find the factorial of a number.
13.	Generate the Fibonacci series up to n terms.
14.	Check if a number is an Armstrong number.
15.	Find the greatest common divisor (GCD) of two numbers using loops.
________________________________________
Array Programs
16.	Find the largest and smallest element in an array.
17.	Calculate the sum and average of elements in an array.
18.	Reverse an array.
19.	Search for an element in an array (linear search).
20.	Sort an array (bubble sort or selection sort).
21.	Merge two arrays into one.
22.	Find the frequency of an element in an array.
23.	Remove duplicate elements from an array.
________________________________________
String Programs
24.	Find the length of a string (without using strlen).
25.	Reverse a string.
26.	Check if a string is a palindrome.
27.	Count vowels and consonants in a string.
28.	Concatenate two strings (without using strcat).
29.	Compare two strings (without using strcmp).
30.	Convert a string to uppercase and lowercase.
31.	Find the frequency of characters in a string.
32.	Remove spaces from a string.
________________________________________
Functions and Recursion
33.	Write a function to find the square of a number.
34.	Write a recursive function to find the factorial of a number.
35.	Write a recursive function for the Fibonacci series.
36.	Implement a calculator using functions (add, subtract, multiply, divide).
37.	Write a function to check if a number is prime.
________________________________________
Structure and Pointers
38.	Create a structure to store student details and display them.
39.	Write a program to demonstrate the use of pointers.
40.	Swap two numbers using pointers.
41.	Write a program to find the length of a string using pointers.
42.	Write a program to add two numbers using pointers.
________________________________________
File Handling
43.	Write a program to create a file and write data into it.
44.	Read data from a file and display it.
45.	Count the number of characters, words, and lines in a file.
46.	Append data to an existing file.
47.	Copy the contents of one file to another.
________________________________________
Pattern Printing Programs
48.	Print a right-angled triangle of stars.
*
**
***
****
49.	Print a pyramid pattern.
   *
  ***
 *****
50.	Print Pascal’s triangle.
________________________________________
How to Practice These Programs
•	Understand the Logic: Don’t just memorize; understand how the logic works.
•	Modify the Programs: Try adding extra features to the basic versions.
•	Debug Errors: Practice debugging for better understanding.
•	Use Comments: Add comments in your programs to explain the steps.
Let me know if you need the implementation of any specific program!
2/2
4o
______________________________HERE SOLOTION ALL PROGRAMS____________________

1. Print "Hello, World!"
#include <stdio.h>

int main() {
    // Printing "Hello, World!" to the console
    printf("Hello, World!\n");
    return 0;
}
________________________________________
2. Find the Sum of Two Numbers
#include <stdio.h>

int main() {
    int a, b, sum;
    // Taking input of two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;  // Adding the two numbers
    // Printing the result
    printf("Sum: %d\n", sum);
    return 0;
}
________________________________________
3. Find the Maximum of Three Numbers Using If-Else#include <stdio.h>

int main() {
    int a, b, c;
    // Taking input of three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking the maximum using if-else
    if (a >= b && a >= c)
        printf("Maximum number: %d\n", a);
    else if (b >= a && b >= c)
        printf("Maximum number: %d\n", b);
    else
        printf("Maximum number: %d\n", c);

    return 0;
}
________________________________________
4. Check if a Number is Even or Odd
#include <stdio.h>

int main() {
    int n;
    // Taking input of a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if the number is even or odd
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}
________________________________________
5. Swap Two Numbers Without Using a Third Variable
#include <stdio.h>

int main() {
    int a, b;
    // Taking input of two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping the numbers without using a third variable
    a = a + b;  // a now holds the sum of both numbers
    b = a - b;  // Subtracting b from the new a gives the value of a
    a = a - b;  // Subtracting new b from a gives the value of b

    // Printing the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

Loop and Conditional Programs
6. Print the first n natural numbers using a loop
#include <stdio.h>

int main() {
    int n;
    // Taking input of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Printing the first n natural numbers using a loop
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
________________________________________
7. Calculate the sum of digits of a number
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating the sum of digits using a loop
    while (num != 0) {
        remainder = num % 10;  // Extracting the last digit
        sum += remainder;
        num /= 10;  // Removing the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
________________________________________
8. Reverse a given number
#include <stdio.h>

int main() {
    int num, reversed = 0;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number using a loop
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}
________________________________________
9. Check if a number is a palindrome
#include <stdio.h>

int main() {
    int num, original, reversed = 0;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if (original == reversed) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
________________________________________
10. Check if a number is prime
#include <stdio.h>

int main() {
    int num, isPrime = 1;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Not a prime number
            break;
        }
    }

    if (isPrime && num > 1) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}
________________________________________
11. Print all prime numbers in a given range
#include <stdio.h>

int main() {
    int start, end, isPrime;
    // Taking input of the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    // Printing all prime numbers in the range
    for (int num = start; num <= end; num++) {
        isPrime = 1;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && num > 1) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
________________________________________
12. Find the factorial of a number

#include <stdio.h>

int main() {
    int num, factorial = 1;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial: %d\n", factorial);
    return 0;
}
________________________________________
13. Generate the Fibonacci series up to n terms
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    // Taking input of the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Printing the Fibonacci series
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}
________________________________________
14. Check if a number is an Armstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, sum = 0, remainder, original, n = 0;
    // Taking input of the number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    // Finding the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;
    // Checking if the number is an Armstrong number
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if (sum == num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}
________________________________________
15. Find the greatest common divisor (GCD) of two numbers using loops
#include <stdio.h>

int main() {
    int a, b;
    // Taking input of two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Finding GCD using a loop
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("GCD: %d\n", a);
    return 0;
}


Array Programs
16. Find the largest and smallest element in an array
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
________________________________________
17. Calculate the sum and average of elements in an array
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = (float)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
________________________________________
18. Reverse an array
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
________________________________________
19. Search for an element in an array (linear search)
#include <stdio.h>

int main() {
    int n, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element %d found at index %d\n", key, i);
            break;
        }
    }

    if (!found) {
        printf("Element %d not found.\n", key);
    }

    return 0;
}
________________________________________
20. Sort an array (bubble sort)
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
________________________________________
21. Merge two arrays into one
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter number of elements for first array: ");
    scanf("%d", &n1);
    
    int arr1[n1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements for second array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
________________________________________
22. Find the frequency of an element in an array
#include <stdio.h>

int main() {
    int n, key, frequency = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            frequency++;
        }
    }

    printf("Frequency of %d: %d\n", key, frequency);
    return 0;
}
________________________________________
23. Remove duplicate elements from an array
#include <stdio.h>

int main() {
    int n, k = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], result[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            result[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
________________________________________
String Programs
24. Find the length of a string (without using strlen)
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of string: %d\n", length);
    return 0;
}
________________________________________
25. Reverse a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    printf("Reversed string: %s\n", reversed);
    return 0;
}
________________________________________
26. Check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
________________________________________
27. Count vowels and consonants in a string
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

28. Concatenate Two Strings (without using strcat)
This program takes two strings as input and concatenates the second string to the first one manually, without using the strcat function.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);  // Taking input for first string
    printf("Enter the second string: ");
    gets(str2);  // Taking input for second string

    int i = 0, j = 0;

    // Finding the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Concatenating second string to the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Adding null character at the end of the concatenated string
    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
________________________________________
29. Compare Two Strings (without using strcmp)
This program compares two strings character by character to determine if they are equal or not, without using the strcmp function.
c
Copy code
#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }

    // If both strings end at the same time, they are equal
    if (str1[i] == str2[i]) {
        return 1;  // Strings are equal
    }
    return 0;  // Strings are not equal
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);  // Taking input for first string
    printf("Enter the second string: ");
    gets(str2);  // Taking input for second string

    if (compareStrings(str1, str2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
________________________________________
30. Convert a String to Uppercase and Lowercase
This program converts the given string to both uppercase and lowercase using the toupper and tolower functions.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    // Convert string to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase: %s\n", str);

    // Convert string to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s\n", str);

    return 0;
}
________________________________________
31. Find the Frequency of Characters in a String
This program calculates the frequency of each character in the input string using an array to store the count for each ASCII character.
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Array to store frequency of each character
    printf("Enter a string: ");
    gets(str);  // Taking input string

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;  // Increment frequency of the character
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
________________________________________
32. Remove Spaces from a String
This program removes all spaces from the input string and stores the result in another string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    printf("Enter a string: ");
    gets(str);  // Taking input string

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];  // Copy characters that are not spaces
        }
    }

    result[j] = '\0';  // Null terminate the result string

    printf("String without spaces: %s\n", result);
    return 0;
}

33. Write a Function to Find the Square of a Number
This program defines a simple function to find the square of a given number.
#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Taking input from the user

    printf("Square of %d is: %d\n", num, square(num));  // Calling the function

    return 0;
}
________________________________________
34. Write a Recursive Function to Find the Factorial of a Number
This program defines a recursive function to find the factorial of a number.
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {  // Base case: 0! = 1 and 1! = 1
        return 1;
    }
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Taking input from the user

    printf("Factorial of %d is: %d\n", num, factorial(num));  // Calling the function

    return 0;
}
________________________________________
35. Write a Recursive Function for the Fibonacci Series
This program defines a recursive function to find the nth Fibonacci number.
#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {  // Base case: Fibonacci of 0 and 1 is 0 and 1, respectively
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);  // Taking input from the user

    printf("Fibonacci number at position %d is: %d\n", n, fibonacci(n));  // Calling the function

    return 0;
}
________________________________________
36. Implement a Calculator Using Functions (Add, Subtract, Multiply, Divide)
This program implements a simple calculator using functions for basic arithmetic operations.
#include <stdio.h>

// Functions to perform basic operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;  // Returning 0 in case of division by zero
    }
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Taking input for two numbers

    printf("Select an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);  // Taking input for the operation choice

    switch (choice) {
        case 1:
            printf("Result: %d\n", add(a, b));  // Calling add function
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));  // Calling subtract function
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));  // Calling multiply function
            break;
        case 4:
            printf("Result: %.2f\n", divide(a, b));  // Calling divide function
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
________________________________________
37. Write a Function to Check if a Number is Prime
This program defines a function to check if a number is prime or not.
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Taking input from the user

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);  // If prime
    } else {
        printf("%d is not a prime number.\n", num);  // If not prime
    }

    return 0;
}

38. Create a Structure to Store Student Details and Display Them
This program defines a structure to store student details like name, roll number, and marks, and then displays them.
#include <stdio.h>

// Defining the structure for student details
struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    // Declare a variable of type struct Student
    struct Student student;

    // Input student details
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);  // Taking name input
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);  // Taking roll number input
    printf("Enter marks: ");
    scanf("%f", &student.marks);  // Taking marks input

    // Display student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);  // Displaying name
    printf("Roll Number: %d\n", student.roll_no);  // Displaying roll number
    printf("Marks: %.2f\n", student.marks);  // Displaying marks

    return 0;
}
________________________________________
39. Write a Program to Demonstrate the Use of Pointers
This program demonstrates basic pointer usage, such as declaring pointers and dereferencing them to access variables.
#include <stdio.h>

int main() {
    int num = 10;      // Regular integer variable
    int *ptr = &num;   // Pointer to store the address of num

    // Displaying the value of num using the pointer
    printf("Value of num: %d\n", num);  // Directly
    printf("Value of num using pointer: %d\n", *ptr);  // Dereferencing pointer

    // Displaying the address of num using the pointer
    printf("Address of num: %p\n", &num);  // Address of num directly
    printf("Address of num using pointer: %p\n", ptr);  // Address through pointer

    return 0;
}
________________________________________
40. Swap Two Numbers Using Pointers
This program swaps two numbers using pointers, demonstrating pointer dereferencing for modifying values.
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Using pointer to get the value of a
    *a = *b;        // Assign the value of b to a
    *b = temp;      // Assign the original value of a to b
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Calling the swap function
    swap(&num1, &num2);

    // Displaying the swapped numbers
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
________________________________________
41. Write a Program to Find the Length of a String Using Pointers
This program finds the length of a string using a pointer, without using the strlen() function.
#include <stdio.h>

// Function to find the length of a string using a pointer
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {  // Traverse the string until the null terminator
        length++;
        str++;  // Move the pointer to the next character
    }
    return length;
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Taking input string

    // Finding and displaying the length of the string
    printf("Length of the string: %d\n", stringLength(str));

    return 0;
}
________________________________________
42. Write a Program to Add Two Numbers Using Pointers
This program adds two numbers using pointers.
#include <stdio.h>

// Function to add two numbers using pointers
int addNumbers(int *a, int *b) {
    return *a + *b;  // Dereference the pointers and add the values
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calling the add function and displaying the result
    printf("The sum of the two numbers is: %d\n", addNumbers(&num1, &num2));

    return 0;
}


43. Write a Program to Create a File and Write Data into It
This program creates a file and writes data into it using file handling functions.
#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "This is the content of the file.";

    // Open the file for writing (creates the file if it doesn't exist)
    file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data has been written to the file.\n");

    return 0;
}
________________________________________
44. Read Data from a File and Display It
This program reads data from an existing file and displays its contents.
#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file for reading
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display the content of the file
    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display each character
    }

    // Close the file
    fclose(file);

    return 0;
}
________________________________________
45. Count the Number of Characters, Words, and Lines in a File
This program counts the number of characters, words, and lines in a file.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file for reading
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Count characters, words, and lines
    while ((ch = fgetc(file)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;  // End of word
        } else if (!inWord) {
            words++;  // Start of a new word
            inWord = 1;
        }
    }

    // Display the counts
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    // Close the file
    fclose(file);

    return 0;
}
________________________________________
46. Append Data to an Existing File
This program appends data to an existing file.
#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "\nThis is the appended content.";

    // Open the file for appending (creates the file if it doesn't exist)
    file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Append data to the file
    fprintf(file, "%s", data);

    // Close the file
    fclose(file);

    printf("Data has been appended to the file.\n");

    return 0;
}
________________________________________
47. Copy the Contents of One File to Another
This program copies the contents of one file to another.
#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open the source file for reading
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;	––––––––––––––––––––––––––––––––––––
    }

    // Open the destination file for writing
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);  // Write each character to destination file
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("Contents have been copied to the destination file.\n");

    return 0;
}
________________________________________
Pattern Printing Programs
________________________________________
48. Print a Right-Angled Triangle of Stars
This program prints a right-angled triangle of stars.

#include <stdio.h>

int main() {
    int i, j, n;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print right-angled triangle
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
Output (for n = 4):
*
**
***
****
________________________________________
49. Print a Pyramid Pattern
This program prints a pyramid pattern of stars.
#include <stdio.h>

int main() {
    int i, j, k, n;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print pyramid pattern
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
Output (for n = 4):
   *
  ***
 *****
*******
________________________________________
50. Print Pascal’s Triangle
This program prints Pascal’s Triangle.
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (n choose r)
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print values in Pascal's triangle
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }

        printf("\n");
    }

    return 0;
}
Output (for n = 5):
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 



===========================The  End 👍👍👍👍👍👍👍👍==================
