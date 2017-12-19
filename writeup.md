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

#### Started from Kp = 1.0 and fixed Kd and Ki as 0.0 respectively. Increse Kp until the car begins to oscillate.
	 Decrease the Kp to half of the value and increase Ki from a small value until the car's offset from the trajectory is corrected.
	 Finally increase Kd to make the car quickly converge to the trajectory.

 