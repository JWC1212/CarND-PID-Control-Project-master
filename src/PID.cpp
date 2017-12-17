#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double p, double i, double d) {
    Kp = p;
    Ki = i;
    Kd = d;
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::UpdateError(double cte) {
    double prev_cte = p_error;//store previous cte.
    p_error = cte;
    i_error = i_error + cte;
    d_error = cte - prev_cte;
}

double PID::TotalError() {
    return -Kp*p_error - Ki*i_error - Kd*d_error;
}

