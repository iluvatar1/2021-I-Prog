#include <iostream>

// declaration
struct Vector3D {
    double x = 0, y = 0, z = 0;
    void print(void);
    Vector3D operator+(const Vector3D & rhs); // overload +
};

//void print(const Vector3D & vec);


int main(int argc, char **argv)
{
    Vector3D a, b, c;
    a.x = 2.3;
    b.y = 4.5;
    a.print();
    b.print();

    c = a; // asignacion por defecto
    c.print();
    c = a + b;
    c.print();
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

// a+b -> a.operator+(b)
// rhs? -> b
Vector3D Vector3D::operator+(const Vector3D & rhs)
{
    Vector3D tmp;
    // vector resultado = a + b // por componentes
    tmp.x = x + rhs.x;
    tmp.y = y + rhs.y;
    tmp.z = z + rhs.z;
    return tmp;
}
