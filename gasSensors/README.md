# Gas Sensors

This documents my notes on getting the Grove Studio Gas sensors working with the NodeMCU. The end goal is to beable to give an [AQI Reading](https://airnow.gov/index.cfm?action=aqibasics.aqi) using open hardware.

### Issues

* One issue I know I will hit is that these are rated for 5v input where the NodeMCU only supplies 3.3v pins. I will have to use a boost converter or adjust the threshold values myself for the gas concentrations.


