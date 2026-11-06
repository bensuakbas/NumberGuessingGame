#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std ;

int main ()

{
   srand(time(0));  // rastgelelik
   int randsayi = rand() % 100 + 1 ; // 100 - 1 arsında
   int attempt = 5 ;
   int usersayi ;

   cout << "LETS PLAY " << endl;
   cout << "try find my number between 1-100 , I will help you " << endl;



   while (attempt>0)
   {
    cin >> usersayi ;

    if (usersayi < 1 || usersayi > 100)
      {cout << "BETWEEN 1-100" <<endl;
        continue;}

    if (usersayi > randsayi)
    cout << "TRY SMALLER" << endl;

    else if (usersayi < randsayi)
    cout << "TRY BİGGER" <<endl;

    else
    {cout << "YOU WON"<<endl;
    break;}

     attempt -- ;
     cout << "Remaining attempts: " << attempt << endl;
}

     if (attempt == 0) {
     cout << "You lost! My number was: " << randsayi << endl;
    }

   return 0 ;

   }
