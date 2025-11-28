#include<iostream>
#include <ctime>



using namespace std;

int funcion_comida (int comida)
{
    srand (time(NULL));

    float comrec;
    switch (comida)
    {
    case 1:
        comrec=2+(rand()%8+1);
        break;
    case 2:
        comrec=3+(rand()%5+1);
        break;
    case 3:
        comrec=5+(rand()%1+1);
        break;
    }

    return comrec;
}
int funcion_refugio(int refugio)
{
    srand (time(NULL));

    float recmaterial;
    switch (refugio)
    {
    case 1:
        recmaterial= 15+ (rand()% 20+1);
        break ;
    case 2:
        recmaterial= 18+ (rand ()% 14+1);
        break ;
    case 3:
        recmaterial= 26+ (rand () % 5+1);
        break ;
    case 4:
        recmaterial= 20+ (rand () % 12+1);
        break;
    }

    return recmaterial;
}
int funcion_balsa(int balsa)
{
    srand (time(NULL));

    float recbalsa;
    switch (balsa)
    {
    case 1:
        recbalsa= 30+ (rand()% 10+1);
        break ;
    case 2:
        recbalsa= 20+ (rand ()% 14+1);
        break ;
    case 3:
        recbalsa= 10+ (rand () % 20+1);
        break ;

    }
    return recbalsa;
      }




