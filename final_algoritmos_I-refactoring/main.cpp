#include <iostream>
#include "./include/Shape.h"
#include "./include/Square.h"
#include "./include/Circle.h"
#include "./include/equilateralTriangle.h"
#include "./include/isoscelesTriangle.h"
#include "./include/scaleneTriangle.h"


using namespace std;

struct figura{
Shape* Figura[10];
int i = 0;
};

figura F;

void crearCirculo(figura& F)
{    
    
    float radius;
    cout<<"Digite la longitud del radio del circulo:";
    cin>>radius;
   
    F.Figura[F.i] = new Circle(radius);
    F.i++;
}    

void crearCuadrado(figura& F)
{    
    
    float side;
    cout<<"Digite la longitur de un lado del cuadrado:";
    cin>>side;
   
    F.Figura[F.i] = new Square(side);
    F.i++;
}
void crearTrianguloEquilatero(figura& F)
{
     
    float base,altura;
    cout<<"Digite la longitud de la base del triangulo:";
    cin>>base;
    cout << "Digite la altura del triangulo:";
    cin >> altura;
   
    F.Figura[F.i] = new equilateralTriangle(altura,base);
    F.i++;
}
void crearTrianguloIsosceles(figura& F)
{

    float lado1 ,base,altura;
    cout << "Ingrese un lado del triangulo:";
    cin  >> lado1;
    cout<<"Digite la longitud de la base del triangulo:";
    cin >>base;
    cout << "Digite la altura del triangulo:";
    cin >> altura;
   
    F.Figura[F.i] = new isoscelesTriangle(lado1,base,altura);
    F.i++;
}
void crearTrianguloescaleno(figura& F)
{
   float lado1 ,lado2,base,altura;
    cout << "Ingrese la longitud de un lado del triangulo:";
    cin  >> lado1;
    cout << "Ingrese la longitud de el otro lado del triangulo:";
    cin  >> lado1;
    cout <<"Digite la longitud de la base del triangulo:";
    cin  >> base;
    cout << "Digite la altura del triangulo:";
    cin  >> altura;
   
    F.Figura[F.i] = new scaleneTriangle(lado1,lado2,base,altura);
    F.i++;
}
void mostrarDatos(figura& F)
{
    for (int i = 0; i < F.i; i++)
    {
        cout  << endl;
        cout << "-----MOSTRANDO DATOS-----" << endl;
        cout  << "El area de la figura: " <<  F.i+1 << " es: "     << F.Figura[F.i]->getArea() << endl;
        cout  << "El perimetro de la figura: " << F.i+1 << " es: " << F.Figura[F.i]->getPerimeter() << endl;
    }
}

void cargarFigura()
{   
   
        int opc;
        cout << "Indique que figura quiere crear: "        << endl;
        cout<<"Digite el numero de la opcion que desea: "  << endl
            <<"digite 1 para crear un circulo"             <<endl
            <<"digite 2 para crear un cuadrado"            <<endl
            <<"digite 3 para crear un triangulo equilatero"<<endl
            <<"digite 4 para crear un triangulo escaleno"  <<endl
            <<"digite 5 para crear un triangulo isosceles" <<endl; 
            cin >> opc;

        switch (opc)
        {
        case 1:
           crearCirculo(F);
            break;
        case 2: 
         crearCuadrado(F);
            break;
         case 3:
         crearTrianguloEquilatero(F);
            break;
         case 4:
         crearTrianguloescaleno(F);
            break;
         case 5: 
         crearTrianguloIsosceles(F);
            break;
        default:
             cout << "error";
            break;
        
        }
}

void pause()
{
    //system("PAUSE") multiplataforma!:
    cin.ignore();
    cin.get();
}

void menu()
{
    int opcion;
      
    do
    {
        cout << "---MENU---" << endl;
        cout << "1. Cargar una figura " << endl;
        cout << "2. Ver areas y perimetros " << endl;
        cout << "3. Salir " << endl;
       
        cin >>opcion;

        switch (opcion)
        {
            case 1:
                cargarFigura();
                
                
            break;

            case 2:
                mostrarDatos(F);
               
            break;

            case 3: 
              
                
                exit(EXIT_SUCCESS);
           break;

           default: if(opcion<1||opcion>3) cout << "opcion no encontrada intente de nuevo"<<endl<<endl;
            break;

        } 

    } while (opcion!=3);
}

int main()
{
    menu();
   

    for (int i = 0; i < F.i; i++)
                {
                    delete F.Figura[i];
                }
    return 0;
}