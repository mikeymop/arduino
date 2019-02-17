# Control led with Potentiometer:

The NodeMCU only has 3.3v pins so the pot values will have to be mapped relative to 3.3v.

```cpp
// get voltage from A0 hooked to pot
float sensorValue = analogRead(A0);
float outputVoltage = (sensorValue * 3.300)/1023;
Serial.println(outputVoltage);
```
We will also have to set the serial baud rate to match that of the serial connection on the board:
```cpp
Serial.begin(115200);
```
We can now read the sensor data from the nodemcu's serial console using by wiring the pot like so:
```
Pot:
    +: -> node 3.3v
    V: -> node a0
    -: -> node gnd

Sensorvalue:9
0.03V
Sensorvalue:29
0.09V
Sensorvalue:45
0.15V
Sensorvalue:116
0.37V
Sensorvalue:200
0.65V
Sensorvalue:289
0.93V
Sensorvalue:339
1.09V
Sensorvalue:496
1.60V
Sensorvalue:658
2.12V
Sensorvalue:762
2.46V
Sensorvalue:1013
3.27V
Sensorvalue:1024
```

### Wiring the potentionmeters values to the led

Lets change the wiring now:
```
Pot:
    +: Nmcu 3.3v pin
    V: Nmcu A0   pin
    -: Nmcu GND  pin
LED:
    +: Nmcu D0   pin
    -: Nmcu GND  pin
```

Uploading the following code will let you adjust the LED with the potentiometer. This will map the pot values we read (`9-1024`) to the `analogWrite()` values send to the `D0` pin.
