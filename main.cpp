#include <cstdlib>
#include <iostream>
#include <locale>
using namespace std;

int main(int argc, char *argv[])
{
   setlocale (LC_ALL, "RUSSIAN");
   char ss;

   do
   {
       cout << "Введите пример" << endl;

       float x, y, r;
       char o;

       cin >> x;
       cin >> o;
       cin >> y;

       switch (o)
       {
       case '+':
          r = x + y;
            break;
       case '-':
          r = x - y;
            break;
       case '/':
          r = x / y;
            break;
       case '*':
          r = x * y;
            break;
       }
   cout << x << o << y << "=" << r << endl;

   cout << "Продолжить? (y/n)" << endl;
   cin >> ss;
   }
   while (ss == 'y');

   return EXIT_SUCCESS;
}
