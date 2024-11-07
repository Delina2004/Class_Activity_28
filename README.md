# Double to String Conversion Utility

This project demonstrates a simple utility function in C++ to convert `double` values to `std::string` with specified precision. The function is split into separate files to illustrate modular programming with header (`.hpp`), implementation (`.cpp`), and main program (`main.cpp`) files.

## Files

- **DoubleToString.hpp**: Header file that declares the `doubleToString` function.
- **DoubleToString.cpp**: Implementation file that defines the `doubleToString` function.
- **main.cpp**: Main program that uses the `doubleToString` function to demonstrate its functionality.

## Functionality

The `doubleToString` function takes two parameters:
1. A `double` value to convert.
2. An integer representing the desired precision (number of decimal places).

The function returns a `string` representing the formatted `double` value.

### Example Output

For a `double` value of `12.34` and a precision of `1`, the output will be: 12.3
