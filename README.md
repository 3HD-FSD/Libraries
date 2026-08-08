# C++ Utility Library

A lightweight collection of reusable C++ header-only utility classes for common programming tasks such as date manipulation, string processing, input validation, periods/ranges, random generation, sorting, searching, encryption, and more.

The library is designed to be simple to copy into a C++ project and use without a separate build system.

---

## ✨ Features

### Date.h
A complete date utility class providing:

- Date construction from day/month/year
- Date parsing from DD/MM/YYYY
- Current system date
- Leap-year detection
- Days, hours, minutes, and seconds in a year/month
- Day-of-week calculation
- Day and month names
- Calendar printing
- Date validation
- Date comparison
- Adding days, weeks, months, years, decades, and centuries
- Calculating the difference between two dates
- Calculating age in days
- Converting a date to/from its day order within a year

### String.h
A reusable string utility class providing:

- String storage with getter/setter support
- Splitting and joining strings
- Trimming
- String length
- Reversing words
- Replacing words
- Smart string replacement
- Upper/lower-case conversion
- Capitalizing the first letter of each word
- Inverting letter case
- Counting letters and words
- Counting vowels
- Checking vowels
- Printing the first letter of each word

### InputValidation.h
Utilities for validating and safely reading user input:

- Reading numbers safely from std::cin
- Reading numbers within a specific range
- Checking whether a number is between two values
- Validating dates
- Checking whether a date is within a date range
- Basic email-domain validation

### Period.h
Utilities for working with date periods:

- Start/end date representation
- Checking whether a date belongs to a period
- Checking whether two periods overlap
- Printing period information

### Util.h
General-purpose utilities including:

- Random number generation
- Random character generation
- Random word generation
- Random key generation
- Generating multiple keys
- Swapping values
- Array shuffling
- Tab generation
- Simple string encryption/decryption
- Insertion sort
- Bubble sort
- Selection sort
- Binary search
- Linear search

---

## 📦 Installation

This is a header-only library, so no compilation or linking step is required.

### Option 1: Copy the headers

Copy the required .h files into your project:
```
YourProject/
├── main.cpp
└── include/
    ├── Date.h
    ├── InputValidation.h
    ├── Period.h
    ├── String.h
    └── Util.h
```
Then include the headers you need:

#include "Date.h"
#include "String.h"
#include "InputValidation.h"
#include "Period.h"
#include "Util.h"
### Option 2: Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/YOUR_REPOSITORY.git
```
Then copy the header files into your project or add the repository's directory to your compiler's include path.

---

## 📚 API Overview

### Date

| Function | Description |
|---|---|
| getSystemDate() | Returns the current system date |
| isLeap(year) | Checks whether a year is a leap year |
| numberOfDaysInThisYear(year) | Returns the number of days in a year |
| numberOfDaysInThisMonth(month, year) | Returns the number of days in a month |
| dayOfWeekOrder(day, month, year) | Returns the day-of-week index |
| dayName(...) | Returns the day name |
| monthName(month) | Returns the month name |
| dateToString(date) | Converts a date to a string |
| isValid() | Checks whether a date is valid |
| addDays(date, days) | Adds days to a date |
| addOneDay(date) | Adds one day |
| getDifferenceInDays(date1, date2) | Calculates the difference in days |
| increaseDateByOneWeek() | Adds one week |
| increaseDateByXWeeks() | Adds multiple weeks |
| increaseDateByOneMonth() | Adds one month |
| increaseDateByXMonths() | Adds multiple months |
| increaseDateByOneYear() | Adds one year |
| increaseDateByXYears() | Adds multiple years |
| increaseDateByOneDecade() | Adds ten years |
| increaseDateByOneCentury() | Adds one hundred years |
| before(date) | Checks whether a date is before another date |
| equal(date) | Checks whether two dates are equal |
| after(date) | Checks whether a date is after another date |

---

### String

| Function | Description |
|---|---|
| split() | Splits a string using a delimiter |
| join() | Joins strings using a delimiter |
| trim() | Removes leading and trailing spaces |
| leftTrim() | Removes leading spaces |
| rightTrim() | Removes trailing spaces |
| upperFirstLetterInEachWord() | Capitalizes the first letter of every word |
| lowerFirstLetterInEachWord() | Converts the first letter of every word to lowercase |
| upperAllLetters() | Converts all letters to uppercase |
| lowerAllLetters() | Converts all letters to lowercase |
| invertAllLetters() | Inverts letter case |
| countCapitalLetters() | Counts uppercase letters |
| countSmallLetters() | Counts lowercase letters |
| countLetter() | Counts a specific character |
| countVowelLetters() | Counts vowels |
| countWords() | Counts words |
| reverseWords() | Reverses the order of words |
| replace() | Replaces matching words |
| smartReplace() | Replaces occurrences of a substring |
| isVowel() | Checks whether a character is a vowel |

---

### InputValidation

| Function | Description |
|---|---|
| readNumber<T>() | Safely reads a number |
| readNumberBetween<T>() | Reads a number within a range |
| isNumberBetween<T>() | Checks whether a number is within a range |
| isValidDate() | Checks whether a date is valid |
| isDateBetween() | Checks whether a date is within a range |
| isValidEmail() | Performs basic email-domain validation |

---

### Util

| Function | Description |
|---|---|
| Srand() | Initializes random number generation |
| randomInteger() | Generates a random integer |
| randomChar() | Generates a random character |
| generateWord() | Generates a random word |
| generateKey() | Generates a formatted random key |
| generateKeys() | Generates multiple random keys |
| shuffle() | Shuffles an integer/string array |
| encrypt() | Applies a simple character-shift transformation |
| decrypt() | Reverses the character-shift transformation |
| insertionSort() | Sorts an integer array using insertion sort |
| bubbleSort() | Sorts an integer array using bubble sort |
| selectionSort() | Sorts an integer array using selection sort |
| binarySearch() | Searches a sorted integer array |
| linearSearch() | Searches an integer array sequentially |

---

## 🗂️ Project Structure
```
.
├── Date.h
├── InputValidation.h
├── Period.h
├── String.h
├── Util.h
└── README.md
```
The library intentionally keeps each utility in a separate header so you can include only what your project needs.

---

> [!NOTE]
> - The library uses using namespace std; in several headers.
> - Date expects dates in the day/month/year format when constructed from a string.
> - Util::binarySearch() expects the array to already be sorted.
> - The encrypt() / decrypt() functions provide a simple character-shift transformation and should **not** be considered secure cryptography.
> - Some utilities are intentionally lightweight and intended for learning, small projects, and general-purpose use rather than production-grade frameworks.
> - The library is header-only and does not require CMake or a separate build step.

---

## 🎯 Intended Use

This library is useful for:

- C++ learning projects
- Console applications
- University assignments
- Small utility programs
- Practicing OOP and reusable code
- Date and string manipulation
- Input validation
- Basic algorithms and data structures

---

## 🤝 Contributing

Contributions are welcome.

If you find a bug or have an idea for an improvement:

1. Fork the repository.
2. Create a new branch.
3. Make your changes.
4. Test your changes.
5. Open a Pull Request.

For larger changes, consider opening an issue first to discuss the proposed improvement.

---

## ⭐ Support

If you find this library useful, consider giving the repository a ⭐ on GitHub.

Happy coding! 🚀
