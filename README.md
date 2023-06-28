# Intrusion Detector
An Arduino Based Distance sensor


![The AeroGrower](images/sensor.jpg)

## A Security Device
The Intrusion Detector is a low cost, effective security system which can alert of intruders instantly.
It uses an Ultrasonic Sensor which sends out a signal and times its return back. Using this it is posibble to accurately determine the distance between objects.
When an object comes within a predefined distance of the sensor, it triggers the Buzzer/Led.

It is also easy to upgrade and change as it is made using an Arduino Uno and a breadboard, you can just replace the LED with a buzzer or vice versa.

 ## Required componets
    1. Arduino Uno
    2. Breadboard (+ some jumper wires)
    3. Buzzer/LED
    4. Ultrasonic Sensor

## Setup
    - Connect "Trig" on sensor to pin 9, "Echo" to pin 10 and The LED/Buzzer to pin 11
    - Add a resistor to the LED and connect to ground
    - Connect Ground on the sensor to ground pin and the UCC pin to the 5V pin on the Arduino.
    - Upload code onto Arduino
