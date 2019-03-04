# Gas Sensors

This documents my notes on getting the Grove Studio Gas sensors working with the NodeMCU. The end goal is to beable to give an [AQI Reading](https://airnow.gov/index.cfm?action=aqibasics.aqi) using open hardware.

We will be measuring the five major air pollutants regulated by the Clean Air Act:

 * Ground-level Ozone
 * Particulate matter
 * Carbon Monoxide
 * Sulfur Dioxide
 * Nitrogen Dioxide

### Sensors:

#### MQ2 Gas Sensor 
 * [TLDR](https://lastminuteengineers.com/mq2-gas-senser-arduino-tutorial/)
 * [Data Sheet](https://lastminuteengineers.com/datasheets/MQ2-Gas-Sensor-Datasheet.pdf)
 * [More Info](http://wiki.seeedstudio.com/Grove-Gas_Sensor-MQ2/)

#### MQ9 Gas Sensor

 * [Data Sheet](https://raw.githubusercontent.com/SeeedDocument/Grove-Gas_Sensor-MQ9/master/res/MQ-9.pdf)
 * [More Info](http://wiki.seeedstudio.com/Grove-Gas_Sensor-MQ9/)

### Additional Parts

* [Step-Up Converter](https://www.diykits.eu/products/p_10513)
* [DFrobot Power Shield](http://www.diykits.eu/products/p_10775)
    * [More info](https://www.dfrobot.com/wiki/index.php/Power_Shield_(SKU:DFR0105))


### Issues

* One issue I know I will hit is that these are rated for 5v input where the NodeMCU only supplies 3.3v pins. I will have to use a boost converter or adjust the threshold values myself for the gas concentrations.

### Reading


* [Aerotron Research](https://cdn.hackaday.io/files/12385529879840/Aerotron.pdf)
* [Power Sources](https://www.open-electronics.org/the-power-of-arduino-this-unknown/)
* [Using Solar Panels](https://www.sparkfun.com/news/1131)
    * [MPPT Charge Controller schematics](http://www.bristolwatch.com/solar1.htm)
    * [Version 2.0](https://www.instructables.com/id/ARDUINO-SOLAR-CHARGE-CONTROLLER-Version-20/)
    * [More Solar](https://www.batterystuff.com/kb/articles/solar-articles/solar-info.html)
* [Battery Bank Ideas](https://www.voltaicsystems.com/blog/three-ways-to-power-an-arduino-off-grid/)

