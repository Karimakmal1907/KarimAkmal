#include <iostream>

// A function to find the GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
	if (a == 0) return b; // Base case
	return gcd(b % a, a); // Recursive case
}

// A function to find the LCM of two numbers using the formula
int lcm(int a, int b) {
	return (a * b) / gcd(a, b); // Use the GCD function
}

int main() {
    
        int x, y;
        std::cout << "enter the first number:";
        std::cin >> x;
        std::cout << "enter the second number:";
        std::cin >> y;
       
	std::cout << "The LCM of " << x << " and " << y << " is: " << lcm(x, y) << std::endl; // Print the LCM of the two numbers
	return 0;
}
