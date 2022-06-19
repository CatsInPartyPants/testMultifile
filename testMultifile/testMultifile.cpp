#include <iostream>
#include "Header.h"

using std::cout;

int main()
{
    setlocale(LC_ALL, "ru");
    golf myGolf;
    golf arrGolf[LenArr];
    int count_of_users = 0;
    setgolf(myGolf, "John Cina", 20);
    showgolf(myGolf);
    cout << "Заполняем массив Гольф:\n";
    for (int i = 0; i < LenArr; i++)
    {
        int result = setgolf(arrGolf[i]);
        if (result == 1)
        {
            count_of_users++;
            
        }
        else if (result == 0) {
            cout << "Stop!";
            break;
        }
    }

    for (int i = 0; i < count_of_users; i++)
    {
        showgolf(arrGolf[i]);
    }

}