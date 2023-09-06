#include <iostream>

using namespace std;

int main() {
  
  int num1, num2;
  char opt;
  int result;
 
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the operator (+, -, *, /): ";
  cin >> opt;

  switch (opt) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      cout << "Invalid operator" << endl;
      cout << "Try Again" << endl;
      
      return 1;
  }

  cout << "The result is: " << result << endl;

  return 0;
}
