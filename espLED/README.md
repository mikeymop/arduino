# LED Blink

This is to be used with a nodeMCU 1.0 (ESP-12E) model arduino board.
This code demonstrates blinking the built in LED (GPIO 2) using a simple function.

### Connecting the NodeMCU

We will be using a NodeMCU for this tutorial. 

You will first have to follow [this](https://arduino-esp8266.readthedocs.io/en/latest/installing.html) tutorial in order to get a serial connection to your board.

Goto:
`File > Preferences > Additional Board Manager URLs`
Add this URL:
```
http://arduino.esp8266.com/stable/package_esp8266com_index.json
```
Go to board manager and search for esp8266, install and restart Arduino IDE.

#### Add your User to the dialout group

You may see some errors when trying to upload a sketch, you probably will need to add your user to the `dialout` group in order to access serial connections. On Ubuntu LTS this is located at `/dev/ttyUSB0`.
```
sudo usermod -aG dialout $USER
```

You can now try uploading a simple test sketch

```cpp
void setup() {
  // Configures the built in LED as on output
  pinMode(2, OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
}
```

Once this code is uploaded successfully you will see the blue 'AI' led begin flashing on the NodeMCU.

### NodeMCU OnBoard LED

The NodeMCU has two built-in LEDs that are used for various status messages.
One LED is part of the ESP8266 WiFi module attached to the NodeMCU. This attached pin is mapped to `GPIO pin 2` internally on the devices board.

### Notes

Arduino [Constants](https://www.arduino.cc/reference/en/language/variables/constants/constants/)
