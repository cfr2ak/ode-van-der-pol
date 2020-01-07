#include <vector>


using namespace std;


template<class Stepper>
struct Odeint
{
  static const int max_step = 50000;
  double eps;
  int nok;
  int nbed;
  int nvar;
  double x1, x2, hmin;
  bool dense;
  vector<double> y, dydx;
  vector<double> &ystart;
  Output &out;
  typename Stepper::Dtype &derives;
  Stepper s;
  int nstp;
  double x, h;
  Odeint(vector<double>)
}
	
  
