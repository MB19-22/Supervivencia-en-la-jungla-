#include<iostream>

using namespace std;

#include "funciones.h"
#include <ctime>

string nombresOceania[5] = {
    "Aroha", "Keanu", "Manaia", "Tahiri", "Liam"
};
string nombresAsia[6] = {
    "Hiroshi", "Min-seo", "Wei", "Sakura", "Somchai", "Ayu"
};
string nombresEuropa[6] = {
    "Liam", "Sofia", "Mateo", "Elena", "Nikolai", "Anya"
};
string nombresAmerica[6] = {
    "Carlos", "Valentina", "Logan", "Emilia", "Diego", "Camila"
};
string nombresAfrica[5] = {
    "Kwame", "Amina", "Jabari", "Zuri", "Thandiwe"
};
string nombreParticipante[9];
int edadParticipante[9];

float alimentosRecolectados[9];
float tiempoRefugio[9];
bool descalificado[9];
bool descalificado1[9];

float alimentosEtapa2[9];
int tiempoBalsa[9];
bool descalificado2[9];

struct ResultadoEtapa2 {
    int id;
    int tiempo;
    float comida;
    bool desc;

struct ResultadoEtapa3 {
    int id;
    float horas;
    bool desc;
};

};

int main ()
{
    srand (time(NULL));

    int op,d,comida,cot=1,refugio,com,balsa,camino,volver;
    float comrec=0, comtot=0,recmaterial=0,materialtotal=0, balsatotal=0, diasbalsa=0, commov=0, comminima=0, recbalsa=0 ;
    bool control ;

    nombreParticipante[1] = "Jugador";
    nombreParticipante[2] = nombresOceania[rand() % 5];
    nombreParticipante[3] = nombresAsia[rand() % 6];
    nombreParticipante[4] = nombresEuropa[rand() % 6];
    nombreParticipante[5] = nombresEuropa[rand() % 6];
    nombreParticipante[6] = nombresAmerica[rand() % 6];
    nombreParticipante[7] = nombresAmerica[rand() % 6];
    nombreParticipante[8] = nombresAfrica[rand() % 5];
    for(int i = 1; i <= 8; i++){
        edadParticipante[i] = 18 + rand() % 53;
    }

    cout << "+--------------------------------------------------------------+" << endl;
    cout << "|                                                              |" << endl;
    cout << "|                CONCURSO DE SUPERVIVENCIA                     |" << endl;
    cout << "|                        EN LA SELVA                           |" << endl;
    cout << "|                                                              |" << endl;
    cout << "|   ---------------------------------------------------------- |" << endl;
    cout << "|   | Tenes lo necesario para sobrevivir durante 7 dias?       |" << endl;
    cout << "|   | Solo los mas fuertes lograran superar cada etapa!!!      |" << endl;
    cout << "|   ---------------------------------------------------------- |" << endl;
    cout << "|                                                              |" << endl;
    cout << "|       ~ Preparate para tomar decisiones dificiles ~          |" << endl;
    cout << "|     ~ La isla pondra a prueba tu coraje y habilidad ~        |" << endl;
    cout << "|                                                              |" << endl;
    cout << "+--------------------------------------------------------------+" << endl<<endl;

    system ("pause");
    system ("cls");

    cout<<"inicia el juego: jugador 1"<<endl<<endl;

    for (int d=0 ; d<7 ; d++)
    {
        control=true ;
        while (control==true)
        {
            cout<<"Estas en el dia: "<<d+1<<endl ;
            cout<<"Tenes:"<<comtot<<"kg de comida total"<<endl ;
            cout<<"Tenes:"<<materialtotal<<"% del refugio construido"<<endl ;

            cout<<endl<<"Elija una de las opciones:"<<endl;
            cout<<endl<<"1.-Recolectar alimentos"<<endl;
            if (materialtotal < 100) {
                cout<<"2.-Construir el refugio"<<endl;
            }
            cin>>op;

                if (op==1)
                {
                    system ("cls");
                    cout<<endl<<"Elija un alimento"<<endl;
                    cout<<"1.Pesca en el rio"<<endl<<"2.Cosechar en la zona de arbustos"<<endl<<"3.Cosechar en la zona de arboles"<<endl<<"0. CANCELAR"<<endl ;
                    cin>>comida;
                    if (comida==911){
                        system ("cls") ;
                        cout<<"Truco activado!"<<endl;
                        cout<<"Un benefactor anonimo te dono 90Kg de comida!"<<endl<<"Cheese Steak Jimmy's"<<endl;
                        comtot+=90;
                        system ("pause");
                        control=false;
                    }
                    else
                    {
                        if(comida==0)
                        {
                            system ("cls") ;
                            cout<<"Cancelando opcion,regresando atras..."<<endl ;
                            system ("pause");
                        }
                        else
                        {
                            if (comida!=1&&comida!=2&&comida!=3)
                            {
                                system ("cls") ;
                                cout<<"Numero invalido."<<endl ;
                                system ("pause");
                                system ("cls") ;
                            }
                            else
                            {
                                comrec=funcion_comida(comida);
                                cout<<"Recolectaste: "<<comrec<<"Kg de comida"<<endl;
                                comtot=comtot+comrec ;

                                control=false ;
                                system ("pause");
                                system ("cls") ;
                            }
                        }
                    }
                }
                else if (op==2)
                {
                    if (materialtotal == 100) {
                        cout<<"Refugio construido al 100%, ve a buscar comida!"<<endl;
                        system ("pause");
                    } else {
                        if (comtot>=2)
                        {
                            system ("cls");
                            cout<<endl<<"Elija el material que quiera recolectar:"<<endl ;
                            cout<< "1.Ramas de arboles"<<endl<<"2.Ramas de arbustos"<<endl<<"3.Barro"<<endl<<"4.Rocas"<<endl<<"0.CANCELAR"<<endl;
                            cin>>refugio;

                            if (refugio==439)
                            {
                                system ("cls") ;
                                cout<<"Truco activado!"<<endl;
                                cout<<"Se te vienen a la mente los programas de Bear Grylls y construyes en tiempo record un refugio con los materiales que tenes a tu alrededor"<<endl;
                                cout<<"Improvisa. Adaptate. Sobrevive"<<endl;
                                materialtotal=100;
                                system ("pause");
                                control=false;
                                  system ("cls") ;
                            }
                            else
                            {
                                if(refugio==0)
                                {
                                    system ("cls") ;
                                    cout<<"Cancelando opcion,regresando atras..."<<endl ;
                                    system ("pause");
                                      system ("cls") ;
                                }
                                else
                                {
                                    if (refugio>=1&&refugio<=4)
                                    {
                                        comtot-=2 ;
                                        recmaterial=funcion_refugio(refugio);
                                        cout<<"Conseguiste:"<<recmaterial<< "% de material para el refugio"<<endl;
                                        materialtotal+=recmaterial ;
                                        if (materialtotal > 100)
                                        {
                                            materialtotal=100;
                                            diasbalsa = d + 1;
                                            cout<<"El refugio esta completo! Solo puedes recolectar comida" <<endl;
                                            system ("pause");
                                            system("cls");
                                        }
                                        control=false ;

                                        system ("pause");
                                        system ("cls") ;
                                    }
                                    else
                                    {
                                        cout<<"Numero invalido."<<endl ;
                                        system ("pause");
                                        system ("cls") ;
                                    }
                                }
                            }
                        }
                        else
                        {
                            system ("cls");
                            cout<<"Comida insuficiente para salir a recolectar materiales"<<endl ;
                            system ("pause");
                        }
                    }
                }
                else
                {
                    cout<<"Numero invalido."<<endl ;
                    system ("pause");
                }
            }
            system ("cls") ;
        }


    if (materialtotal < 100)
    {
        cout<<"No lograste completar el refugio en 7 días. Estás descalificado."<<endl;
        system("pause");

control=true;
while (control==true){
cout << "Queres jugar otra vez? 1.Si / 0.No" << endl;
cin >> volver;

if (volver == 1) {
    system("cls");
    return main();
    control=false;
} else {
    if(volver==0){
    cout << "Gracias por jugar, vuelva pronto!" << endl;
    system("pause");
    return 0;
}else{
cout<<"Numero invalido"<<endl;
}
}

}
    }

    alimentosRecolectados[1] = comtot;
    tiempoRefugio[1] = materialtotal == 100 ? diasbalsa : 999;
    descalificado[1] = (materialtotal < 100);

    for (int i = 2; i <= 8; i++)
    {
        alimentosRecolectados[i] = 5 + rand() % 25;
        int chance = rand() % 100;

        if (chance < 20)
        {
            tiempoRefugio[i] = 999;
            descalificado[i] = true;
        }
        else
        {
            tiempoRefugio[i] = 3 + rand() % 5;
            descalificado[i] = false;
        }
    }
    float sumaAlimentos = 0;
    for (int i = 1; i <= 8; i++)
    {
        sumaAlimentos += alimentosRecolectados[i];
    }
    float promedioAlimentos = sumaAlimentos / 8;
    int idxRapido = 1;
    float menorTiempo = tiempoRefugio[1];

    for (int i = 2; i <= 8; i++)
    {
        if (!descalificado[i] && tiempoRefugio[i] < menorTiempo)
        {
            menorTiempo = tiempoRefugio[i];
            idxRapido = i;
        }
    }
    int masDeCinco = 0;
    for (int i = 1; i <= 8; i++)
    {
        if (!descalificado[i] && tiempoRefugio[i] > 5)
            masDeCinco++;
    }
    int orden[9];
    for (int i = 1; i <= 8; i++) orden[i] = i;

    for (int i = 1; i <= 7; i++)
    {
        for (int j = i + 1; j <= 8; j++)
        {
            bool cambiar = false;

            if (descalificado[orden[i]] && !descalificado[orden[j]])
                cambiar = true;

            else if (!descalificado[orden[i]] && !descalificado[orden[j]])
            {
                if (tiempoRefugio[orden[j]] < tiempoRefugio[orden[i]])
                    cambiar = true;

                else if (tiempoRefugio[orden[j]] == tiempoRefugio[orden[i]] &&
                         alimentosRecolectados[orden[j]] > alimentosRecolectados[orden[i]])
                    cambiar = true;
            }

            if (cambiar)
            {
                int aux = orden[i];
                orden[i] = orden[j];
                orden[j] = aux;
            }
        }
    }
    system("cls");
    cout << "================ RESULTADOS DE LA ETAPA 1 ================" << endl;

    cout << "Participantes que superaron el promedio de alimentos (" << promedioAlimentos << " kg):"<<endl;
    for (int i = 1; i <= 8; i++)
    {
        if (alimentosRecolectados[i] > promedioAlimentos)
            cout << "- " << nombreParticipante[i] << " (" << alimentosRecolectados[i] << " kg)"<<endl;
    }
    cout << "El participante que construyo el refugio mas rapido fue: ";
    cout << nombreParticipante[idxRapido] << " con " << menorTiempo << " dias."<<endl;

    cout << "Los participantes que tardaron mas de 5 dias: " << masDeCinco << endl;

    cout << "================ TABLA FINAL================"<<endl;
    cout << "Nro  | Nombre              | Dias Refugio  | Kg Comida | Puesto"<<endl;
    cout << "---------------------------------------------------------------"<<endl;

    for (int pos = 1; pos <= 8; pos++)
    {
        int i = orden[pos];

        cout << i << "    | ";
        cout << nombreParticipante[i];

        for (int k = nombreParticipante[i].length(); k < 20; k++) cout << " ";

        if (descalificado[i])
        {
            cout << "| DESCALIFICADO | " << alimentosRecolectados[i] << " kg   | --"<<endl;
        }
        else
        {
            cout << "| " << tiempoRefugio[i] << " dias        | " << alimentosRecolectados[i] << " kg   | " << pos << ""<<endl;
        }

    bool descalificado1[9];
    float alimentosEtapa1[9];
    float tiempoRefugio1[9];

    for (int i = 1; i <= 8; i++) {
    descalificado1[i]  = descalificado[i];
    alimentosEtapa1[i] = alimentosRecolectados[i];
    tiempoRefugio1[i]  = tiempoRefugio[i];
}

}


    system("pause");
    system("cls");

    cout<<endl<<"Avanzaste a la Fase 2!"<<endl;
    cout<<endl<<"En esta etapa deberas construir una balsa y recolectar alimentos"<<endl;
    system ("pause");
    system ("cls");

    int diaBalsaReached = 0;

    for (int dia = 1; dia <= 6; dia++)
    {control=true;
    while (control==true){
        cout << "Usted esta en el dia : " <<dia<<endl;
        cout << "Comida acumulada: " <<comtot<< " kg" << endl;
        cout << "Balsa construida hasta ahora: " <<balsatotal << "%" << endl;

        cout<<endl<<"Elija una de las opciones:"<<endl;
        cout<<endl<<"1.-Recolectar alimentos"<<endl;
        if (balsatotal < 100) {
            cout<<"2.-Construir la balsa"<<endl;
        }
        cin>>op;

        if (op==1)
        {
            system ("cls");
            cout<<endl<<"Elija un alimento"<<endl;
            cout<<"1.Pesca en el rio"<<endl<<"2.Cosechar en la zona de arbustos"<<endl<<"3.Cosechar en la zona de arboles"<<endl<<"0. CANCELAR"<<endl ;
            cin>>com;

            if (com==911){
                system ("cls") ;
                cout<<"Truco activado!"<<endl;
                cout<<"Un benefactor anonimo te dono 90Kg de comida!"<<endl<<"Cheese Steak Jimmy's"<<endl;
                comtot+=90;
                control=false ;
                system ("pause");
                system ("cls") ;

            }
            else if(com==0)
            {
                system ("cls") ;
                cout<<"Cancelando opcion,regresando atras..."<<endl ;
                system ("pause");
                 system ("cls") ;
            }
            else
            {
                if (com!=1&&com!=2&&com!=3)
                {
                    system ("cls") ;
                    cout<<"Numero invalido."<<endl ;
                    system ("pause");
                    system ("cls") ;
                }
                else
                {
                    comrec=funcion_comida(com);
                    cout<<"Recolectaste: "<<comrec<<"Kg de comida"<<endl;
                    comtot=comtot+comrec ;
                    control=false ;
                    system ("pause");
                    system ("cls") ;
                }
            }
        }
        else if (op==2)
          {
             if (balsatotal == 100)
                    {
                        cout<<"balsa construida al 100%, ve a buscar comida"<<endl;
                        system ("pause");
                         system ("cls") ;
                    }else {
            if (comtot>=2)
            {
                system ("cls");
                cout<<endl<<"Elija el material que quiera recolectar para la balsa:"<<endl ;
                cout<< "1. Troncos de arboles"<<endl<<"2. Hojas de palmeras"<<endl<<"3. Cana"<<endl<<"0.CANCELAR"<<endl;
                cin>>balsa;
                  system ("cls");

                if (balsa==314)
                {
                    system ("cls") ;
                    cout<<"Truco activado!"<<endl;
                    cout<<"Mientras buscabas materiales, viste un avion de FedEx al que se le caen dos cajas. La primera tiene una balsa y la segunda tiene una pelota de voley."<<endl;
                    cout<<"Dale las gracias a Wilson!!!"<<endl;
                    balsatotal=100;
                    if (diaBalsaReached == 0) diaBalsaReached = dia;
                    control=false ;
                    system ("pause");
                    system ("cls") ;

                }
                else if(balsa==0)
                {
                    system ("cls") ;
                    cout<<"Cancelando opcion,regresando atras..."<<endl ;
                    system ("pause");
                     system ("cls") ;
                }
                 }else
                {
                system ("cls");
                cout<<"Comida insuficiente para salir a recolectar materiales"<<endl ;
                system ("pause");
                 system ("cls") ;
            }
        }
         }else
        {
            cout<<"Numero invalido."<<endl ;
            system ("pause");
             system ("cls") ;
        }
    }
    }

    if (balsatotal < 100)
    {
        cout<<"No lograste construir la balsa en 6 días. Estás descalificado ."<<endl;
        system("pause");

      control=true;
while (control==true){
cout << "Queres jugar otra vez? 1.Si / 0.No" << endl;
cin >> volver;

if (volver == 1) {
    system("cls");
    return main();
    control=false;
} else {
    if(volver==0){
    cout << "Gracias por jugar, vuelva pronto!" << endl;
    system("pause");
    return 0;
}else{
cout<<"Numero invalido"<<endl;
}
}

}
    }
    alimentosEtapa2[1] = comtot;
    tiempoBalsa[1] = (balsatotal >= 100) ? (diaBalsaReached == 0 ? 6 : diaBalsaReached) : 999;
    descalificado2[1] = (balsatotal < 100);

    for (int i = 2; i <= 8; i++)
    {
        if (descalificado[i])
        {
            alimentosEtapa2[i] = 0;
            tiempoBalsa[i] = 999;
            descalificado2[i] = true;
        }
        else
        {
            alimentosEtapa2[i] = 3 + rand() % 25;
            int chance = rand() % 100;
            if (chance < 20)
            {
                tiempoBalsa[i] = 999;
                descalificado2[i] = true;
            }
            else
            {
                tiempoBalsa[i] = 2 + rand() % 5;
                descalificado2[i] = false;
            }
        }
    }
    float sumaAlimentosEt2 = 0;
int contEt2 = 0;

for (int i = 1; i <= 8; i++) {
    if (!descalificado1[i] && !descalificado2[i]) {
        sumaAlimentosEt2 += alimentosEtapa2[i];
        contEt2++;
    }
}

float promedioEt2 = (contEt2 > 0) ? sumaAlimentosEt2 / contEt2 : 0;

cout << "=============================================" << endl;
cout << "Participantes que superaron el promedio de alimentos" << endl;
cout << "Promedio: " << promedioEt2 << " kg" << endl;

for (int i = 1; i <= 8; i++) {
    if (!descalificado1[i] && !descalificado2[i] && alimentosEtapa2[i] > promedioEt2) {
        cout << " - " << nombreParticipante[i]
             << " (" << alimentosEtapa2[i] << " kg)\n";
    }
}
cout << "=============================================" << endl;


int mejorTiempo = 9999;
int mejorID = -1;

for (int i = 1; i <= 8; i++) {
    if (!descalificado1[i] && !descalificado2[i] && tiempoBalsa[i] < mejorTiempo) {
        mejorTiempo = tiempoBalsa[i];
        mejorID = i;
    }
}

if (mejorID != -1) {
    cout << "El mas rapido en construir la balsa fue: "
         << nombreParticipante[mejorID] << endl;
    cout << "Tardo: " << mejorTiempo << "dias"<< endl;
}


ResultadoEtapa2 r2[9];

int cantR2 = 0;

for (int i = 1; i <= 8; i++) {
    if (!descalificado1[i]) {
        cantR2++;
        r2[cantR2] = {
            i,
            tiempoBalsa[i],
            alimentosEtapa2[i],
            descalificado2[i]
        };
    }
}

for (int i = 1; i <= cantR2; i++) {
    for (int j = i + 1; j <= cantR2; j++) {

        bool cambiar = false;

        if (r2[i].desc && !r2[j].desc) cambiar = true;

        else if (!r2[i].desc && !r2[j].desc) {
            if (r2[i].tiempo > r2[j].tiempo) cambiar = true;
            else if (r2[i].tiempo == r2[j].tiempo &&
                     r2[i].comida < r2[j].comida)
                cambiar = true;
        }

        if (cambiar) {
            ResultadoEtapa2 aux = r2[i];
            r2[i] = r2[j];
            r2[j] = aux;
        }
    }
}

cout << "================ TABLA FINAL ETAPA 2 ================" << endl;
cout << "Nro | Nombre             | Tiempo Balsa | Kg Alim | Puesto" << endl;
cout << "-------------------------------------------------------------" << endl;

int puesto = 1;

for (int i = 1; i <= cantR2; i++) {

    cout << r2[i].id << "   | "
         << nombreParticipante[r2[i].id];

    int largo = nombreParticipante[r2[i].id].size();
    for (int k = largo; k < 20; k++) cout << " ";

    if (r2[i].desc) {
        cout << "| DESCALIFICADO |    --    |  --" << endl;
    } else {
        cout << "| " << r2[i].tiempo << " dias        "
             << "| " << r2[i].comida << " kg"
             << "     | " << puesto << endl;
        puesto++;
    }
}

cout << "=====================================================" << endl;


cout << endl << "Avanzaste a la Fase 3!" << endl;
cout << "Debes recorrer 18 km hasta el punto de llegada usando tu balsa." << endl;
cout << "Dispones de 24 horas para llegar." << endl;
system("pause");
system("cls");
control=true ;
bool caminoSecreto = false;
int tiempoFinal = 0;
while (control==true){

int dig1, dig2, dig3, dig4, dig5;


int opcion;

cout << "Elige un camino:" << endl;
cout << "1. Camino largo" << endl;
cout << "2. Camino corto" << endl;
cin >> opcion;

system("cls");

if (opcion == 50)
{
    cout <<"Truco activado!"<<endl;
    cout << "Ingrese 5 digitos para desbloquear el camino secreto (1-9):" << endl;

    cout << "1° numero: "; cin >> dig1;
    cout << "2° numero: "; cin >> dig2;
    cout << "3° numero: "; cin >> dig3;
    cout << "4° numero: "; cin >> dig4;
    cout << "5° numero: "; cin >> dig5;

    if (dig1 == 3 && dig2 == 9 && dig3 == 4 && dig4 == 8 && dig5 == 7)
        caminoSecreto = true;
    else {
        cout << "Combinacion incorrecta. No desbloqueaste el camino." << endl;
        system("pause");
        system("cls") ;
    }
}

if (caminoSecreto)
{
    tiempoFinal = 3 + (rand() % 4);
    cout << endl << "Combinacion correcta" << endl;
    cout << "Un helicoptero te vio varado en el rio y decidio ayudarte." << endl;
    cout << "Tardaste exactamente " << tiempoFinal << " horas en llegar." << endl;
    cout << "VICTORIA!!!" << endl;
    control=false ;

    system("pause");
    system("cls");
}
else if (opcion == 1)
{
    tiempoFinal = 18 + (rand() % 9);

    cout << "Tomaste el camino mas largo." << endl;
    cout << "Tardaste " << tiempoFinal << " horas." << endl;

    if (tiempoFinal <= 24) cout << "Llegaste a tiempo! VICTORIA!!!" << endl;
    else cout << "Fallaste. Has superado las 24 horas." << endl;
   control=false ;
    system("pause");
    system("cls");
}
else if (opcion == 2)
{
    cout << "Elegiste el camino mas corto" << endl;
    cout << "Existe la posibilidad de una tormenta." << endl;
control=false ;
    int riesgo = rand() % 100;

    if (riesgo < 40)
    {
        cout << "Te agarro una tormenta!" << endl;
        tiempoFinal = 24 + (rand() % 4);
        cout << "Tardaste " << tiempoFinal << " horas." << endl;
        cout << "Perdiste." << endl;
    }
    else
    {
        cout << "No hubo tormenta. El camino es rapido!" << endl;
        tiempoFinal = 5 + (rand() % 4);
        cout << "Tardaste " << tiempoFinal << " horas." << endl;
        cout << "VICTORIA!!!" << endl;

    }
    control=false ;
    system("pause");
    system("cls");
}
else
{
    cout << "Opcion invalida." << endl;
    system("pause");
    system("cls");
}
}

cout << "================ TABLA FINAL ETAPA 3 ====================" << endl;
cout << "Nro | Nombre              | Tiempo Llegada | Puesto" << endl;
cout << "-----------------------------------------------------------" << endl;

struct ResultadoEtapa3 {
    int id;
    int tiempo;
    bool desc;
};

ResultadoEtapa3 r3[9];
int cantR3 = 0;

r3[cantR3].id = 1;
r3[cantR3].tiempo = tiempoFinal;
if (caminoSecreto || tiempoFinal <= 24)
    r3[cantR3].desc = false;
else
    r3[cantR3].desc = true;
cantR3++;

for (int i = 2; i <= 8; i++) {

    if (!descalificado1[i] && !descalificado2[i])
    {
        int t;
        int camino = rand() % 2;

        if (camino == 0) {
            t = 18 + (rand() % 9);
        } else {
            int riesgo = rand() % 100;
            if (riesgo < 40)
                t = 24 + (rand() % 4);
            else
                t = 5 + (rand() % 4);
        }

        r3[cantR3].id = i;
        r3[cantR3].tiempo = t;
        r3[cantR3].desc = (t > 24);
        cantR3++;
    }
}
for (int i = 0; i < cantR3; i++) {
    for (int j = i + 1; j < cantR3; j++) {

        bool cambiar = false;

        if (r3[i].desc && !r3[j].desc) cambiar = true;

        else if (!r3[i].desc && !r3[j].desc && r3[i].tiempo > r3[j].tiempo)
            cambiar = true;

        if (cambiar) {
            ResultadoEtapa3 aux = r3[i];
            r3[i] = r3[j];
            r3[j] = aux;
        }
    }
}

for (int i = 0; i < cantR3; i++) {

    cout << r3[i].id << "   | "
         << nombreParticipante[r3[i].id];

    int largo = nombreParticipante[r3[i].id].size();
    for (int k = largo; k < 20; k++) cout << " ";

    if (r3[i].desc) {
        cout << "| DESCALIFICADO |   --" << endl;
    }
    else {
        cout << "| " << r3[i].tiempo << " hs"
             << "           | " << puesto << endl;
        puesto++;
    }
}

cout << "========================================================" << endl;
control=true;
while (control==true){
cout << "Queres jugar otra vez? 1.Si / 0.No" << endl;
cin >> volver;

if (volver == 1) {
    system("cls");
    return main();
    control=false;
} else {
    if(volver==0){
    cout << "Gracias por jugar, vuelva pronto!" << endl;
    system("pause");
    return 0;
}else{
cout<<"Numero invalido"<<endl;
}
}

}
}


