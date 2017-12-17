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

#### Adjust parameters starting from an initial value respectively and manually execute "twiddle" algorithm to find the best combination of parameters. 
	 Loops where the PV changes quickly due to a change in CTE should have low P-gain (perhaps 0.2) and higher I-gain. 
	 Loops where the PV changes slowly, or changes its direction of movement due to change in steering value typically need high gain (3 – 100) and low I-gain (0.05 – 0.3). 
 