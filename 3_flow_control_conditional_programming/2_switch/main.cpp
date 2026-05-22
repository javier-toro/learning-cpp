#include <iostream>

/*
En este modulo nos interesamos por switch, es una estructura de control
que nos permite ejecutar diferentes bloques de codigo dependiendo 
del valor de una variable.

Es importante ocupar bien break, ya que si no lo hacemos,
el programa seguira ejecutando el siguiente bloque de codigo,
incluso si no se cumple la condicion.

La condición puede solo ser de tipo entero o de tipo caracter.
*/

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};


int main(){

    int tool {Eraser};

    switch (tool)
    {

        case Pen: {
            std::cout << "Pen selected" << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Marker selected" << std::endl;
        }
        break;

        case Eraser: {
            std::cout << "Eraser selected" << std::endl;
        }
        break;

        case Rectangle: {
            std::cout << "Rectangle selected" << std::endl;
        }
        break;

        case Circle: {
            std::cout << "Circle selected" << std::endl;
        }
        break;

        case Ellipse: {
            std::cout << "Ellipse selected" << std::endl;
        }
        break;

        default:{
            std::cout << "Invalid tool selected" << std::endl;
        }
        break;
    }
    return 0;

}