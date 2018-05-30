#include "simulation.h"

int main(int argc, char **argv)
{
  std::vector<Particle> balls(n);

  initial_conditions(balls);
  compute_force(balls);
  start_integration(balls);
  print(balls);
  
  for(int istep = 1; istep < NSTEPS; ++istep) {
    integrate(balls);
    compute_force(balls);
    print(balls);
  }

  return 0;
}
