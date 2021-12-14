#ifndef ROOTS_H
#define ROOTS_H 
#include<cmath>

class quadratic {
    public:
        float a, b, c;
        float discriminant, reals, imaginary, x1, x2;
        struct quad_roots {
            float root1 = 0.0;
            float root2 = 0.0;
            float realz = 0.0;
            float imagin = 0.0;
        } quad_roots;

        void find_roots(float arr[3]) {
            a = arr[0];
            b = arr[1];
            c = arr[2];
            
            if (a == 0) {
                //redundant
                quad_roots.root1 = 0.0;
                quad_roots.root2 = 0.0;
                quad_roots.realz = 0.0;
                quad_roots.imagin = 0.0;
            }
            else {
                discriminant = b*b - 4*a*c;
                if (discriminant > 0) {
                    quad_roots.root1 = (-b + sqrt(discriminant)) / (2*a);
                    quad_roots.root2 = (-b - sqrt(discriminant)) / (2*a);
                }
                else if (discriminant == 0) {
                    quad_roots.root1 = (-b + sqrt(discriminant)) / (2*a);
                }
                else {
                    quad_roots.realz = (float) -b/(2*a);
                    quad_roots.imagin = sqrt(-discriminant)/(2*a);
                }
            };

        };
};

class cubic {
    public:
        float a, b, c, d;
        float discriminant, reals, imaginary, x1, x2, x3;
        struct cubic_roots {
            float root1 = 0.0;
            float root2 = 0.0;
            float root3 = 0.0;
            float realz = 0.0;
            float imagin = 0.0;
        } cubic_roots;

        void find_roots(float arr[4]) {

        };
};

#endif