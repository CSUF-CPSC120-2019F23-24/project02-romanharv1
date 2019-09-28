// Name: Roman Harvey
// Business Trip Tracker
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

int main()
{
  //Introducing variables
  double meal, hotel, total;
  int days;
  std::string location;

  //Program names itself
  std::cout << "Welcome to the Business Trip Tracker!\n";
  std::cout << std::endl; //blank line
  //Obtaining location variable definition
  std::cout << "What is the business trip location? ";
  getline(std::cin, location);
  //Obtaining days variable definition
  std::cout << "How many days will the trip take? ";
  std::cin >> days;
  //Obtaining hotel variable definition
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel;
  //Obtaining meal variable definition
  std::cout << "What is the total meal expense? $";
  std::cin >> meal;

  //Defining total variable
  total = hotel + meal;

  // Output strings
  std::stringstream hotelout, mealout, totalout;
  hotelout << std::setprecision(2) << std::fixed << '$' << hotel;
  mealout << std::setprecision(2) << std::fixed << '$' << meal;
  totalout << std::setprecision(2) << std::fixed << '$' << total;

  //Formatting and presenting information
  std::cout << std::left << std::setw(13) << "Location"
    << std::setw(8) << std::right << "Days"
    << std::setw(12) << "Hotel"
    << std::setw(11) << "Meal"
    << std::setw(12) << "Total" << std::endl;

  std::cout << std::left << std::setw(13) << location.substr(0, 20)
    << std::setw(8) << std::right << days
    << std::setw(12) << hotelout.str()
    << std::setw(11) << mealout.str()
    << std::setw(12) << totalout.str() << std::endl;

  return 0;
}
