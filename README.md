# ECE_528_HW_1

# Question 1a
- The difference between a compiler and an interpreter is that the compiler changes the code we write into machine language. While the interpreter reads the code we write and executes them.
# Question 1b
- By default the output of a C program's main() function is return 0;
# Question 2
- In C header files are files where we can store the definitions and declarations of different functions and variables
# Question 3
- To declare and define a function in C we have to deciede on its type, the name of the function and inputs/arguments padded to the program. The purpose of the return statement in a function is to end the function as well as to return a value that could be used in other functions within the code
# Question 4
- Type casting is when we convert a variable from one data type to another, for example:
```
int sumofdoubletoint(double x, double y)
{
    double sum = x + y;
    return (int)sum;
}

```
# Question 5
- The difference between local and global variables is that a global variable can be used throughout the code that we are writing and a local variable can only be used within the area it was declared in. For example looking at the previous answer we see that the variable sum is a local variable that only works within its function.
# Question 6
- In C we declare a string using the char type, that uses an array to store the data. the null terminator \0 tells us when the string ends, it uses another bit of space
# Question 7
- A pointer in C is when we use a variable to store the address of another variable. To pass a pointer to a function we have to first declare the pointer than pass that variable in the argument of the function. One advantage of using a pointer is that we are able to change the data at the address of the variable.
# Question 8
- The * operator is used to declare a pointer, while the & operator is the address of the variable.
# Question 9
- The while and do while loop both loops a block of code if a condition is met, however for a while loop this condition is first checked before the code loops and in a do while loop the code first runs then we check to see if the condition is met.
# Question 10
- A break statement is used to break out of the current position of code we are in, while the current statement skips the iteration we are on and we move to the next one
# Question 11
- The bitwise operators are used to do bitwise operations. To set a bit we can use |, to clear we can use & and even & ~(val), to toggle we use ^ and to check a specific bit we use &
# Question 12
- The PxSEL0 is the function select register 0 while PxSEL1 is the function select register 1, we replace X with the port we are going to use. These register allow us to select the mode we want the pins to be in for example General Purpose or even Primary module function. 
```
    P1->SEL0 &= ~(0x82);
    P1->SEL1 &= ~(0x82);
```
# Question 13
```
    void P1_1_and_P1_4_Init()
    {
        P1->SEL0 &= ~(0x12);
        P1->SEL1 &= ~(0x12);
        P1->DIR &= ~(0x12);
        P1->REN |= 0x12;
        P1->OUT |= 0x12;
    }
```
# Question 14
```
    void Buttons_Init()
    {
        P3->SEL0 &= ~(0x42);
        P3->SEL1 &= ~(0x42);
        P3->DIR &= ~(0x42);
        P3->REN |= 0x42;
        P3->OUT &= ~(0x42);

        P5->SEL0 &= ~(0x11);
        P5->SEL1 &= ~(0x11);
        P5->DIR &= ~(0x11);
        P5->REN |= 0x11;
        P5->OUT &= ~(0x11);        
    }
```
# Question 15
```
    void LEDs_Init
    {
        P7->SEL0 &= ~(0x81);
        P7->SEL1 &= ~(0x81);
        P7->DIR |= 0x81;
        P7->OUT &= ~(0X81);
    }
```