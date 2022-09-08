#include <iostream>
#include "./include/Shape.h"
#include "./include/Square.h"
#include "./include/Circle.h"
#include "./include/equilateralTriangle.h"
#include "./include/isoscelesTriangle.h"
#include "./include/scaleneTriangle.h"


using namespace std;

Shape* figura[10];
int i = 0;

void crearCirculo()
{    
    int i;
    float radius;
    cout<<"Digite la longitur del radio del circulo:";
    cin>>radius;
   
    figura[i] = new Circle(radius);
    i++;
}    

void crearCuadrado()
{    
    
    float side;
    cout<<"Digite la longitur de un lado del cuadrado:";
    cin>>side;
   
    figura[i] = new Square(side);
    i++;
}
void crearTrianguloEquilatero()
{
     
    float base,altura;
    cout<<"Digite la longitud de la base del triangulo:";
    cin>>base;
    cout << "Digite la altura del triangulo:";
    cin >> altura;
   
    figura[i] = new equilateralTriangle(altura,base);
    i++;
}
void crearTrianguloIsosceles()
{

    float lado1 ,base,altura;
    cout << "Ingrese un lado del triangulo:";
    cin  >> lado1;
    cout<<"Digite la longitud de la base del triangulo:";
    cin >>base;
    cout << "Digite la altura del triangulo:";
    cin >> altura;
   
    figura[i] = new isoscelesTriangle(lado1,base,altura);
    i++;
}
void crearTrianguloescaleno()
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
   
    figura[i] = new scaleneTriangle(lado1,lado2,base,altura);
    i++;
}
void mostrarDatos()
{
    for (int i = 0; i <10; i++)
    {
        cout  << endl;
        cout << "-----MOSTRANDO DATOS-----" << endl;
        cout  << "El área de la figura: " <<  i+1 << " es: " << figura[i]->getArea() << endl;
        cout  << "El perímetro de la figura: " << i+1 << " es: " << figura[i]->getPerimeter() << endl;
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
           crearCirculo();
            break;
        case 2: 
         crearCuadrado();
            break;
         case 3:
         crearTrianguloEquilatero();
            break;
         case 4:
         crearTrianguloescaleno();
            break;
         case 5: 
         crearTrianguloIsosceles();
            break;
        default:
             cout << "error";
            break;
        
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
        cout << "2. Ver áreas y perímetros " << endl;
        cout << "3. Salir " << endl;
       
        cin >>opcion;

        switch (opcion)
        {
            case 1:
                cargarFigura();
                
            break;

            case 2:
                mostrarDatos();
            break;

            case 3: 
                for (int i = 0; i < 10; i++)
                {
                    delete figura[i];
                }
                
                exit(EXIT_SUCCESS);//SALIR CORRECTAMENTE
            break;

            default: 
                cout<< "Opción inexistente." << endl;
            break;
        } 

    } while (opcion<0 && opcion>3);
}

int main(int argc, char const *argv[])
{
    menu();
    pause();
    return 0;
}