#include<iostream>

int main(){

    char op;
    int a;
    int b;
    double result;

    std::cout << "***** BASIC CALCULATOR  ******";

    std::cout << "use (+,-,*,/) ";
    std::cin >> op;

    std::cout << "enter a";
    std::cin >> a;

    std::cout << "enter b";
    std::cin >> b;

    switch(op){
       case '+':
           result = a + b;
        std::cout<< "the ans is" << result;
        break;   
        case '-':
           result = a - b;
        std::cout<< "the ans is" << result;
        break;
        case '*':
           result = a * b;
        std::cout<< "the ans is" << result ;
        break;
        case '/':
           result = a / b;
        std::cout<< "the ans is" << result;
        break;
        default:
        std::cout << "only enter the given operators";



     }
     return 0 ;
}