#include <iostream>

int main(){
  float temperarturecelcius = 0;
  float humidityPercentage = 0;

  std::cout<<"*******************************"<<std::endl;
  std::cout<<"PLease enter the temperature in Celcius";
  std::cin>> temperarturecelcius;
 
  std::cout<<"*******************************"<<std::endl;
  std::cout<<"PLease enter the humidity in percentage";
  std::cin>> humidityPercentage;

  // determice the temperature in farenheit

  float temperatureFarenheit = ((temperarturecelcius + 32) * 9)/5;

// output
std::cout<<"The temperature in:  " << std::endl;
std::cout<<"       ** celcius:   " << temperarturecelcius << std::endl;
std::cout<<"       ** farenheit: " << temperatureFarenheit << std::endl;
std::cout<<"The humidity level is " << humidityPercentage << "%" << std::endl;

//return
return 0;
}