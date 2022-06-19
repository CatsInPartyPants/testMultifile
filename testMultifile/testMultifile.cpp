#include <iostream>
#include "Header.h"

using std::cout;

int main()
{
    golf myGolf;
    setgolf(myGolf, "John Cina", 20);
    showgolf(myGolf);
    golf TestInteractive;
    int result = setgolf(TestInteractive);
    if (result == 0)
    {
        cout << "! Empty name! Error!" << std::endl;
    }
    showgolf(TestInteractive);

}