#include <iostream>
#include <vector>

// favorable a la CPU
struct Particle {
    float mass = 0.0;
    double y = 0.0;
    double vy = 0.0;
    bool active = true;
} ;

int main(int argc, char *argv[]) {
    Particle points[2];
    // array of structs
    //std::vector<Particle> points;
    //points.resize(2);

    points[0].y = 2.36;
    
    std::cout << points[0].y << std::endl; // el . accede el elemento interno
    //std::cout << points->y << std::endl; // -> es porque tenemos un puntero
    
    points[1].active = false;
    std::cout << points[1].active << std::endl; // el . accede el elemento interno
    //std::cout << (points+1)->y << std::endl; // -> es porque tenemos un puntero
    
    
    return 0;
}
