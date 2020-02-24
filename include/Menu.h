#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <iomanip>
#include <string>
#include <ctype.h>

class Menu
{
  public:
    Menu(std::string title, std::string author);
    virtual ~Menu();
    void displayTitle();
    void displayInstructions();
    void displayCommands();
    char getCommandFlag(std::string stringInput);

  protected:

  private:
    const int WIDTH = 37;
    std::string TITLE;
    std::string AUTHOR;
};

#endif // MENU_H
