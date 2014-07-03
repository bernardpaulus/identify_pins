Identify the pins of your board!
================================

Assuming each pin is connected to a led, 
* lights all leds 
* then makes n flashes on each led, where n is the number of the connected pin

Use this if you are unsure about the mapping between your pin number in your 
code and the actual output pin on your board, or more simply, if you are 
learning, like me :)

Requirements
------------

* [Arduino IDE](http://www.arduino.cc/en/Main/Software) or equivalent
* Should work with most arduino boards (this grew from the Blink example).
  Tested with a [gemma](https://learn.adafruit.com/introducing-gemma/ )
* at least a led and a resistor (see [Fritzing](fritzing.org) file `circuit.fzz`)
* some croco pincers, or a breadboard with some wires

Setup
-----

Connect at least a pin like this:

    PIN --------.
                |
              -----
         led   \ /
                V
              -----
                |
                |
                |
                |
                -/
                / 
               /-/
      resistor  /
               /-/
                /
               /-
                |
                |
      Ground  _____
       GND    /////
       
Compile and load `identify_pins/identify_pins.ino`  in your microcontroller, and you're done!

License
-------

this is very proprietary: see LICENSE.txt for the exact details.