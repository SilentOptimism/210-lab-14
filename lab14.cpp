// library headers
#include <iostream>
#include <iomanip>
#include <array>

// brings the std namespace into global scope
using namespace std;

// Color: a simple class that contains 3 integers for color values RGB
class Color
{
private:
    // Member variables
    int red;
    int green;
    int blue;

public:
    // Uses a bracket initializer list to prevent user from inputing doubles avoiding narrowing conversions
    Color(int Red, int Green, int Blue) : red{Red}, green{Green}, blue{Blue} {};

    Color(){};

    // Our setter functions
    void setRed(int Red)        {red = Red;}
    void setGreen(int Green)    {green = Green;}
    void setBlue(int Blue)      {blue = Blue;}

    // Our getter variables
    int getRed()       {return red;}
    int getGreen()     {return green;}
    int getBlue()      {return blue;}

    // Prints a color
    void print(){
        cout << setw(1) << left << "R:";
        cout << setw(4) << left << red;
        cout << setw(1) << left << "G:";
        cout << setw(4) << left << green;
        cout << setw(1) << left << "B:";
        cout << setw(4) << left << blue;
        cout << "\n\n";
    }
};

const int SIZE = 12; // array size

int main(int argc, char const *argv[])
{
    array<Color, SIZE> colorList;

    // Fills the colorList with colors
    for(int i = 0; i < SIZE; i++){
        colorList.at(i) = Color(256-i*5, i*18, i+100);
    }

    // Prints out all the colors
    for(auto colors : colorList){
        colors.print();
    }

    return 0;
}