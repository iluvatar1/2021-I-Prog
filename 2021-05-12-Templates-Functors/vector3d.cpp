#include <iostream>

// declaration and implementation
struct Vector3D {
    double x = 0, y = 0, z = 0;  
    void print(void);
};

//void print(const Vector3D & vec);


int main(int argc, char **argv)
{
    Vector3D a, b, c;
    a.x = 2.3;
    b.y = 4.5;
    a.print();
    b.print();
    
    //c = a + b;
    //c.print();
    //c = a - b;
    //c.print();
    //c = 2*a;
    //c.print();
    //double dotproduct = a*b;
    //std::cout << "d:" << d << std::endl;
    //Vector3D d = a^b;  // cross product
    //d.print();
    
    return 0;
}

// implementation
void Vector3D::print(void)
{
    std::cout << "( " << x
              << ", " << y
              << ", " << z
              << " )\n";
}
