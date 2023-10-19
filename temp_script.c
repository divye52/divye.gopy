#include <stdio.h>

// 1. Function to add two integers
int add(int a, int b) {
    return a + b;
}

// 2. Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// 3. Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// 4. Function to divide two integers
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
}

// 5. Function to calculate the square of an integer
int square(int a) {
    return a * a;
}

// 6. Function to calculate the factorial of a non-negative integer
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// 7. Function to check if an integer is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// 8. Function to reverse a string
void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// 9. Function to count vowels in a string
int countVowels(char* str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

// 10. Function to find the maximum element in an integer array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// 11. Function to find the minimum element in an integer array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// 12. Function to check if a string is a palindrome
int isPalindrome(char* str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

// 13. Function to capitalize the first letter of a string
void capitalizeFirstLetter(char* str) {
    if (strlen(str) > 0) {
        str[0] = toupper(str[0]);
    }
}

// 14. Function to generate the Fibonacci sequence up to n terms
void generateFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Sequence (First %d terms): ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// 15. Function to calculate the nth Fibonacci number
int nthFibonacci(int n) {
    if (n <= 0) {
        return -1; // Invalid input
    }
    else if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

// 16. Function to calculate the LCM of two integers
int findLCM(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

// 17. Function to calculate the GCD of two integers
int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
}

// 18. Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    }
    return 0; // Not a leap year
}

// 19. Function to calculate the area of a circle
float calculateAreaOfCircle(float radius) {
    return 3.14159265359 * radius * radius;
}

// 20. Function to calculate the area of a rectangle
float calculateAreaOfRectangle(float length, float width) {
    return length * width;
}

// 21. Function to calculate the area of a triangle
float calculateAreaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

// 22. Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// 23. Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// 24. Function to calculate the power of a number
double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// 25. Function to check if a number is even
int isEven(int n) {
    return (n % 2 == 0);
}

// 26. Function to check if a number is odd
int isOdd(int n) {
    return (n % 2 != 0);
}

// 27. Function to find the absolute value of a number
int absoluteValue(int n) {
    return (n >= 0) ? n : -n;
}

// 28. Function to check if a number is a perfect square
int isPerfectSquare(int n) {
    int i = 1;
    while (i * i < n) {
        i++;
    }
    return (i * i == n);
}

// 29. Function to calculate the square root of a number
double squareRoot(double n) {
    if (n < 0) {
        return -1.0; // Invalid input
    }
    return sqrt(n);
}

// 30. Function to round a floating-point number to the nearest integer
int roundToNearestInteger(double n) {
    return (int)(n + 0.5);
}

// 31. Function to calculate the sum of digits in an integer
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 32. Function to find the largest common divisor of an array of integers
int findLCMOfArray(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result = findLCM(result, arr[i]);
    }
    return result;
}

// 33. Function to calculate the sum of an integer array
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 34. Function to calculate the product of elements in an integer array
int productOfArray(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

// 35. Function to find the first occurrence of an element in an integer array
int findFirstOccurrence(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

// 36. Function to find the last occurrence of an element in an integer array
int findLastOccurrence(int arr[], int size, int element) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

// 37. Function to remove duplicates from an integer array
int removeDuplicates(int arr[], int size) {
    if (size <= 1) {
        return size; // No duplicates to remove
    }
    int index = 0;
    for (int i = 1; i < size; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == index) {
            arr[index++] = arr[i];
        }
    }
    return index; // Size of the array with duplicates removed
}

// 38. Function to reverse an integer array
void reverseArray(int arr[], int size) {
    int i, j;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// 39. Function to find the number of elements greater than a given threshold in an integer array
int countGreaterThanThreshold(int arr[], int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold) {
            count++;
        }
    }
    return count;
}

// 40. Function to find the number of elements less than a given threshold in an integer array
int countLessThanThreshold(int arr[], int size, int threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < threshold) {
            count++;
        }
    }
    return count;
}

// 41. Function to find the median of an integer array
double findMedian(int arr[], int size) {
    if (size % 2 == 0) {
        int mid1 = size / 2 - 1;
        int mid2 = size / 2;
        return (arr[mid1] + arr[mid2]) / 2.0;
    }
    else {
        int mid = size / 2;
        return arr[mid];
    }
}

// 42. Function to check if an integer is a perfect number
int isPerfectNumber(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return (sum == n && n != 1);
}

// 43. Function to find the next prime number greater than a given integer
int nextPrime(int n) {
    n++;
    while (1) {
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            return n;
        }
        n++;
    }
}

// 44. Function to calculate the sum of an arithmetic progression
int sumOfAP(int a, int d, int n) {
    return (n * (2 * a + (n - 1) * d)) / 2;
}

// 45. Function to calculate the sum of a geometric progression
double sumOfGP(double a, double r, int n) {
    return a * (1 - pow(r, n)) / (1 - r);
}

// 46. Function to find the reverse of a number
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// 47. Function to check if a number is a palindrome
int isNumberPalindrome(int n) {
    return (n == reverseNumber(n));
}

// 48. Function to find the number of trailing zeros in the factorial of a number
int countTrailingZerosInFactorial(int n) {
    int count = 0;
    for (int i = 5; n / i > 0; i *= 5) {
        count += n / i;
    }
    return count;
}

// 49. Function to find the number of divisors of an integer
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

// 50. Function to calculate the sum of a series (1/1! + 1/2! + 1/3! + ... + 1/n!)
double sumOfSeries(int n) {
    double sum = 0.0;
    double factorial = 1.0;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += 1.0 / factorial;
    }
    return sum;
}

int main() {
    return 0;
}
