/**
Some notes about Scalextric project: 

-Potentiometers in scalextric controllers has a small mod-hacking so the end is not open on lowest speed. I bought a pair really cheap in ebay, similar to this one: (http://www.ebay.com/itm/Scalextric-Analog-1-32-Slot-Car-Hand-Controller-/270826296629?pt=Slot_Cars&hash=item3f0e815535)

That is to avoid jumpy input on A0,A1 to Aruduino. The voltage divider will come from about 0 to Vcc/2 and add lots of bounces.

Do not use USB power from computer ! you can overshoot the current limit. Use arduino power, I used 4 AA bateries, all fine with one car. For 2 cars I recommend to use external power supply (5v).

You can adjust the min throttle with the map function, I checked serial values read on input for no gas, and max gas, then adjusted for duty cycle PWM between 20-200 (max is 255).

Next is to package this on a board and box it so can stand the endurance of kids!

*/