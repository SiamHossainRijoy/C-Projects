# C-Projects: Century Challenge

A simple C programming game where players choose numbers from 1 to 10.
The first player to reach a total of 100 wins. The game supports
**Player vs Player** and **Player vs CPU** modes.

## Requirements

-   A C compiler, such as GCC
-   A terminal or command prompt

## How to Compile and Run

### Windows

Compile with GCC:

``` bash
gcc century-challenge.c -o century-challenge
```

Run:

``` bash
century-challenge.exe
```

### macOS / Linux

Compile:

``` bash
gcc century-challenge.c -o century-challenge
```

Run:

``` bash
./century-challenge
```

## Windows Compatibility: `system("clear")`

The source code currently uses `system("clear");` in **three places**.
The `clear` command is typically available on macOS/Linux terminals, but
it does not work in the standard Windows Command Prompt.

### Quick fix for Windows

Find each occurrence of:

``` c
system("clear");
```

Replace it with:

``` c
system("cls");
```

In the code you shared, these are the three calls: the first screen in
`main()`, the Player vs Player case, and the Player vs CPU case. Search
for `system("clear")` in your editor to locate all three occurrences.
Line numbers can change if lines are added or removed.

### Recommended: support Windows and macOS/Linux

For code that works on both platforms, add this helper near the top of
the file, after the `#include` lines:

``` c
void clear_screen(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
```

Then replace all three lines containing `system("clear");` with:

``` c
clear_screen();
```

This uses `cls` on Windows and `clear` on macOS/Linux. Note that
`system()` runs a command through the operating system shell; use it
only when appropriate for your project.

## Project Features

-   Player vs Player mode
-   Player vs CPU mode
-   Number selection from 1 to 10
-   First to reach 100 wins
-   Colored terminal text on terminals that support ANSI color codes

## Learning Goals

This project is part of my C programming practice. It helps me practise:

-   Variables and conditional statements
-   Loops and `switch` statements
-   Functions
-   Random numbers using `rand()` and `srand()`
-   Basic terminal interaction

## Note

Terminal color support can vary by terminal and compiler environment. If
colors do not display correctly, try running the program in a modern
terminal.
