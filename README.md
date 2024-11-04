Overview:-
This program is a simple console-based unit converter written in C. It allows users to convert between different units of length (meters, kilometers, and miles) and weight (grams, kilograms, and pounds). The program provides a user-friendly interface to select conversion types and input values.
Features

    Length Conversion:
        Meters to Kilometers
        Kilometers to Meters
        Miles to Kilometers
        Kilometers to Miles
    Weight Conversion:
        Grams to Kilograms
        Kilograms to Grams
        Pounds to Kilograms
        Kilograms to Pounds
    User Interaction:
        Simple menu-driven interface.
        Input validation for user choices.
        Clear output messages indicating conversion success.

Getting Started
Prerequisites
To compile and run this program, you need:

    A C compiler (e.g., GCC).
    Basic knowledge of how to compile and execute C programs.

Compilation
To compile the program, use the following command in your terminal:

gcc unit_converter.c

Execution
After compiling, run the program using:

./a.out

Usage Instructions

   1: Upon running the program, you will see the main menu with options for length conversion, weight conversion, or exiting the program.
   2: Enter your choice (1 for length conversion, 2 for weight conversion, or 3 to exit).
   3: Follow the prompts for the selected conversion type:
       * For length conversions, choose the specific conversion type and enter the value when prompted.
       * For weight conversions, do the same as above.
   4: After completing a conversion, you can either return to the main menu or exit the program.

Example:-

___Unit Converter___
1.Length Conversion
2.Weight Conversion
3.Exit the Program

Enter Your Choice: 1

____Length Conversion___
1.Meters to Kilometers
2.Kilometers to Meters
3.Miles to Kilometers
4.Kilometers to Miles
5.Back to Menu

Enter Your Choice: 1
Enter Value in Meter: 1500

🔹1500.00 Meter=1.50 KiloMeters🔹

Conversion Success🙂

Code Structure

    main(): The entry point of the program that displays the main menu and handles user choices.
    lengthConversion(): Function that handles all length conversion operations.
    weightConversion(): Function that manages weight conversion operations.

Error Handling
The program includes basic error handling for invalid menu choices. If an invalid option is selected, it prompts the user to try again without crashing.

Step 2:-
Clone the repository
git clone
https://github.com/shahanashub/UNIT_CONVERSION_.git
