#include <iostream>
#include <string>

int main(){
  std::string first_name = "";
  std::string last_name = "";

  std::cout <<"Please enter your first name: " ;
  std::cin>>first_name;
  std::cout<<std::endl;

  std::cout <<"Please enter your last name: " ;
  std::cin>>last_name;
  std::cout<<std::endl;


std::cout<<"Hello " << first_name << " " << last_name << std::endl; 
}