#include "Menu.h"

Menu::Menu(std::string title, std::string author)
{
    TITLE = title;
    AUTHOR = author;
  //ctor
}

Menu::~Menu()
{
  //dtor
}




/**
  @brief  retrieve first letter of the string to determine command
  @param  string
  @return lowercase of first character of the string
*/
char Menu::getCommandFlag(std::string stringInput)
{
  char c;
  if(stringInput.length() > 0)
    c = tolower(stringInput[0]);
  else
    c = '0';

  return c;
}



/**
  @brief  prints program title
  @param  none
  @return none
*/
void Menu::displayTitle()
{
  std::cout << std::setfill('=') << std::setw(WIDTH) << "\n";
  std::cout << TITLE << "\n";
  std::cout << "by: " << AUTHOR << "\n";
  std::cout << std::setfill('=') << std::setw(WIDTH) << "\n";
  return;
}




/**
  @brief  prints program instruction
  @param  none
  @return none
*/
void Menu::displayInstructions()
{
  std::cout << "\nInstruction:\n";
  std::cout << "This program prints elements from the binary search"
            << "\ntree that are larger than the inputted minimum integer.\n";
  return;

}


/**
  @brief  prints commands
  @param  none
  @return none
*/
void Menu::displayCommands()
{
  std::cout << "\n\n";
  std::cout << std::setfill('.') << std::setw(WIDTH) << "\n";
  std::cout << "Commands:\n"
            << "H -- for instruction,  Any key -- to quit\n";
  std::cout << std::setfill('.') << std::setw(WIDTH) << "\n\n";
  return;

}
