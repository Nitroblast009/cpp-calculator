#include "calculator.cpp"

double getUserOperand(std::string message) {
    double userOperand;
    std::cout << message;
    std::cin >> userOperand;
    return userOperand;
}

char getUserOperationType() {
    char userOperationType;
    std::cout << "Which operation would you like to perform (+ for addition, - for subtraction, * for multiplication, / for division)? ";
    std::cin >> userOperationType;
    return userOperationType;
}

int main() {
    while(true)   {
        double num1 = getUserOperand("\nWhat is the first number you would like to use? ");
        double num2 = getUserOperand("What is the second number you would like to use? ");
        switch(getUserOperationType()) { }
        break;
    }
    return EXIT_SUCCESS;
}