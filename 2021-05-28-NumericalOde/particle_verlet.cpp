#include <iostream>
#include <vector>

// constantes globales
const double G = 9.81;
const double DT = 0.01;
const double K = 237.98;

// favorable a la CPU
struct Particle {
    float mass = 0.0;
    double rad = 0.0;
    double yold = 0.0;
    double y = 0.0;
    double vy = 0.0;
    double fy = 0.0;
    bool active = true;
} ;

// functions
void start(std::vector<Particle> & particles);
void timestep(std::vector<Particle> & particles);
void forces(std::vector<Particle> & particles);

int main(int argc, char *argv[]) {
    //Particle points[2];
    // array of structs
    std::vector<Particle> points;
    points.resize(1);
    // initial conditions
    points[0].mass = 1.98;
    points[0].rad = 0.23;
    points[0].y = 2.36;
    points[0].vy = 0.0;
    forces(points);
    start(points);

    // temporal evolution
    for (int tstep = 0; tstep < 500; ++tstep){
        forces(points);
        timestep(points);
        std::cout << tstep*DT << "\t"
                  << points[0].y << "\t"
                  << points[0].vy << std::endl;  
    }
    
    return 0;
}

void start(std::vector<Particle> & particles)
{
    for(auto & body: particles) {
        body.yold = body.y - DT*body.vy + DT*DT*body.fy/(body.mass)/2;
    }
}


void timestep(std::vector<Particle> & particles)
{
  // Euler 
  /*
    // dy/dt = (y(t+dt) - y(t))/dt -> y(t+dt) = y(t) + dt*(vy(t)) // euler
    // dv/dt = (v(t+dt) - v(t))/dt -> vy(t+dt) = vy(t) + dt*(ay(t)) // euler, ay = Fy/mass
    for(auto & body: particles) {
        body.y = body.y + DT*body.vy;
        body.vy = body.vy + DT*body.fy/body.mass;
    }
*/
///*
    // Verlet
  for(auto & body: particles) {
    double tmp = body.y;
    body.y = -body.yold + 2*body.y + DT*DT*body.fy/(body.mass);
    body.vy = (body.y - body.yold)/(2*DT); 
    body.yold = tmp; 
  }
//*/
}

void forces(std::vector<Particle> & particles)
{
    // reset force
    for(auto & body: particles) {
        body.fy = 0.0; 
    }
    // add gravitationl force
    for(auto & body: particles) {
        body.fy -= body.mass*G; 
    }    
    // bouncing with the floor
    for(auto & body: particles) {
      double delta = body.rad - body.y;
      if (delta > 0) {
        body.fy += K*delta;
      } 
    }    
}
