**PID Control Project**

The goals / steps of this project are the following:

* In this project a PID controller is implemented in C++ to maneuver the vehicle around the track.
* Cross track error (CTE) and the velocity (mph) are provide in order to compute the appropriate steering angle.

---

### The effect of parameters (P, I, D) on the behavior of the car.

#### Proportional gain P tends to have the car respond more quickly as well more overshoot the reference trajectory.  
#### Integral gain I makes the car overcome structural bias from reference trajectory.
#### Differential gain D reduces overshoot of the car. 

---

### How the parameters (P, I, D) are chosen

#### Where CTE changes quickly due to a change in steering value should have low P-gain and higher I-gain. Where     CTE changes slowly, or changes its direction of movement due to change in steering value typically need high gain and low I-gain.
####Started from Kp = 1.0 and fixed Kd and Ki as 0.0 respectively. Increse Kp until the car begins to oscillate.
Decrease the Kp to half of the value and increase Ki from a small value until the car's offset from the trajectory is corrected.
Finally increase Kd to make the car quickly converge to the trajectory.
#### Finally Kp = 0.2, Ki = 0.00000001 and Kd = 22.0. Because I observed that in a big curved place the overshoot was too large and increasing Kd did not work. According to Kp's property if decreasing Kp the overshoot will decrease so I decreased gradually Kp from 1.0 to 0.5 while trying to keep the ratio of Kd/Kp in an appropriate range.
#### throttle = 1.0 - 0.9*fabs(steer value) used
