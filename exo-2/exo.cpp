#include <iostream>

int main(){
  // define variable
  int integer = 45;
  float floating = 34.50;
  double double_value = 38.98;
  char character = '$';
  bool veritas = true;

  // display 
  std::cout<<"Integer value is " << integer << std::endl;
  std::cout<<"Float value is " << floating << std::endl;
  std::cout<<"Double value is " << double_value << std::endl;
  std::cout<<"Char value is " << character << std::endl;
  std::cout<<"Boolean value (veritas) is " <<std::boolalpha<< veritas << std::endl;

  // return 
  return 0; 

}