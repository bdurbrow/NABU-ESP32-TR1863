# NABU-ESP32-TR1863
 
# What this is:

This is a carrier card for an ESP32 DevKitC board that allows you to insert the ESP32 in between the TR1863 UART chip and the RS422 drivers.

# WARNING: PRE-BETA!

This is currently pre-beta. It could have bugs. It might not work for you. It might fry your NABU. It might turn your dog into a geranium. I really don't know. Use at your own risk.

# Parts Required:

* An ESP32 DevKitC module. *BE CAREFUL HERE!* There are a couple of different modules being sold as DevKitC; but they have slightly different pinouts. Carefully check the pinouts in the product listing photos against the NABU-ESP32-TR1863 PCB layout before ordering a module.
* An SD card slot module, such as is commonly sold for use with an Arduino. Lke the ESP32 DevKitC module, there are a couple of different module styles available, so also check the product listing against the NABU-ESP32-TR1863 PCB layout before ordering.
* The NABU-ESP32-TR1863 PCB itself.
* A 74HC4050 IC.
* A 16-pin IC socket for the 74HC4050.
* A 40-pin 0.6" wide IC socket for the TR1863 IC.
* Headers for attaching the PCB to the existing socket on the NABU main board that the TR1863 is currently mounted in (machined round-pin headers work best, because they are smaller than the square-pin headers and thus won't bend the IC socket contacts as badly).
* Three each 400 ohm, three each 800 ohm, two each 120 ohm, and two each 2k ohm resistors if you want to use the VGA and PS/2 mouse ports.
* Female header sockets to put the ESP32 DevKitC module into.
* Male header pins for the VGA, PS/2, and SD card module ports (your SD card module may have come with these pre-installed - mine did).


# Usage:

Carefully remove the TR1863 UART IC from it's socket on the NABU main board. It's located near the DIN-5 RS422 port that would have connected to the NABU Cable Adapter. A proper IC extractor tool helps here, but it can be done with a small flat screwdriver if you are very careful.

After soldering the sockets, headers, and SD card module into the NABU-ESP32-TR1863 PCB, install the 74HC4050 IC and the TR1863 UART IC into it's socket on the NABU-ESP32-TR1863 PCB. Next, install the ESP32 DevKitC module into the female header sockets for it.


Using the round-pin header sockets on the far right side of the NABU-ESP32-TR1863 PCB, install it into the socket on the NABU main board that the TR1863 UART IC came out of.

Connect the ESP32 module to your main computer's USB port, and download the software for it. *TODO: Create the software.*

