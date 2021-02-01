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
    //get user input
    double num1 = getUserOperand("What is the first number you would like to use? ");
    double num2 = getUserOperand("What is the second number you would like to use? ");
    double res;
    
    //do calculations
    while(true) {
        switch(getUserOperationType()) {
            case '+': res = add(num1, num2); break;
            case '-': res = sub(num1, num2); break;
            case '*': res =  mul(num1, num2); break;
            case '/': res = div(num1, num2); break;
            default: std::cout << "\nThat isn't a valid option!\n"; continue;
        }
        break;
    }
    
    //print output
    std::cout << "The answer is " << res << ".";
    return EXIT_SUCCESS;
}