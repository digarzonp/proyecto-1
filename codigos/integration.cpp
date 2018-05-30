#include "simulation.h"



void initial_conditions(std::vector<Particle> & balls)
{

  
  const int NX=1.0;
  for(int id=0; id<balls.size(); ++id){
  balls[id].Rx =id*NX ;
    balls[id].Vx = 0.0;
 
  }
}
  
void compute_force(std::vector<Particle> & balls)
{
  for(auto & body : balls){
    
    
    body.Fx += -2*k*balls[n].Rx+k*balls[n-1].Rx;
  }
}

void start_integration(std::vector<Particle> & balls)
{
  for(auto & body : balls){
    body.Vx -= 0.5*body.Fx*DT/body.mass;
  }
}

void integrate(std::vector<Particle> & balls)
{
  // use simple leap-frog
  for(auto & body : balls){
    body.Vx += body.Fx*DT/body.mass;
    body.Rx += body.Vx*DT;
  
  }
}

// void print_info(const std::vector<Particle> & balls, const double & time)
// {
//   // here we print something useful
//   // for now is just a test
//   std::cout.precision(16);
//   std::cout.setf(std::ios::scientific);

//   std::cout << time
//             << "\t" << balls[0].Rx
//             << "\t" << balls[0].Ry 
//             << "\t" << balls[0].Rz 
//             << "\t" << balls[0].Vx 
//             << "\t" << balls[0].Vy 
//             << "\t" << balls[0].Vz 
//             << "\n";
// }
void print(const std::vector<Particle> & balls)
{
  for(int i=0; i< balls.size();i++)
    {
      std::cout<<balls[i].Rx << "\t" << balls[i].Vx << "\n";
    }
}
