#include "Dog.h"
#include "Cat.h"
#include "Elephant.h"
#include "shapes/Circle.h"
#include "shapes/Ellipse.h"
#include "shapes/Rectangle.h"
#include "shapes/Shape.h"
#include "shapes/Square.h"

int main(int argc, char* argv[])
{
    /*
    Animal* obj = nullptr;
    int c = 0;
    cout << "choose animal: " << endl;
    cout << "1 for dog" << endl << "2 for cat" << endl << "3 for elephant" << endl;
    cin >> c;
    switch (c)
    {
    case 1:
        obj = new Dog;
        break;
    case 2:
        obj = new Cat;
        break;
    case 3:
        obj = new Elephant;
        break;
    default:
        cout << "wrong input" << endl;
    }
    obj->makeSound();
    if (obj)
        delete obj;
    */

    Shape** objects = new Shape*[4];
    objects[0] = new Square(1, 1, 3);
    objects[1] = new Circle(2, 2, 5);
    objects[2] = new Rectangle(1, 1, 5, 2);
    objects[3] = new Ellipse(5, 5, 8, 4);
    for (int i=0; i<4; i++)
    {
        objects[i]->Show();
        delete objects[i];
    }
    
    delete [] objects;
    
    return 0;
}
