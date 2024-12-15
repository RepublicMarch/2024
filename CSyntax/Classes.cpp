#include <iostream>

int main () 
{
    class Cylinder
    {
        private : 
        double Radius_Base {3.14};
        double Height {1.0};
        double PI {3.14};

        public :
        Cylinder()
        {
            Radius_Base = 3.14;
            Height = 2.0;
            PI = 3.14;
        };

        Cylinder(double radius_parameter, double height_parameter)
        {
            Radius_Base = radius_parameter;
            Height = height_parameter;
        }
        double volume()
        {
            return PI * pow(Radius_Base, 2) * Height;
        }
    
    };

    return 0;
}