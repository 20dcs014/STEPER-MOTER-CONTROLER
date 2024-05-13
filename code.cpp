{
  "version": 1,
  "author": "Anchal Sharma",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-arduino-nano",
      "id": "nano",
      "top": 22.2,
      "left": -123.3,
      "rotate": 90,
      "attrs": {}
    },
    {
      "type": "wokwi-lcd1602",
      "id": "lcd1",
      "top": -185.6,
      "left": -186.4,
      "attrs": { "pins": "i2c" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 181.3,
      "left": 88.9,
      "rotate": 90,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn2",
      "top": 181.3,
      "left": 146.5,
      "rotate": 90,
      "attrs": { "color": "yellow" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn3",
      "top": 181.3,
      "left": 213.7,
      "rotate": 90,
      "attrs": { "color": "blue" }
    },
    {
      "type": "wokwi-stepper-motor",
      "id": "stepper1",
      "top": -255.59,
      "left": 317.23,
      "attrs": { "size": "17" }
    },
    { "type": "wokwi-a4988", "id": "drv1", "top": -43.2, "left": 187.2, "attrs": {} },
    { "type": "wokwi-vcc", "id": "vcc1", "top": -210.44, "left": -307.2, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd1", "top": -134.4, "left": -365.4, "attrs": {} },
    { "type": "wokwi-vcc", "id": "vcc2", "top": -114.44, "left": 259.2, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd2", "top": 67.2, "left": 297, "attrs": {} }
  ],
  "connections": [
    [ "lcd1:SCL", "nano:A5", "green", [ "h-48", "v153.9" ] ],
    [ "lcd1:SDA", "nano:A4", "green", [ "h-57.6", "v144.2" ] ],
    [ "btn2:1.r", "btn1:1.r", "green", [ "v38.6", "h-86.4" ] ],
    [ "btn3:1.r", "btn2:1.r", "green", [ "v40.9", "h-103.1" ] ],
    [ "btn1:1.r", "nano:GND.2", "green", [ "v38.6", "h-115.2", "v-182.4", "h-28.8" ] ],
    [ "btn1:2.l", "nano:2", "green", [ "v-86.4", "h-125" ] ],
    [ "nano:3", "btn2:2.l", "green", [ "h182.4", "v96" ] ],
    [ "btn3:2.l", "nano:4", "green", [ "v-105.6", "h-249.8" ] ],
    [ "nano:8", "drv1:DIR", "green", [ "h201.6" ] ],
    [ "drv1:STEP", "nano:9", "green", [ "h0" ] ],
    [ "drv1:RESET", "drv1:SLEEP", "green", [ "h-38.4", "v9.6" ] ],
    [ "stepper1:A-", "drv1:2B", "green", [ "v57.6", "h-144" ] ],
    [ "drv1:2A", "stepper1:A+", "green", [ "h0" ] ],
    [ "drv1:1A", "stepper1:B+", "green", [ "h0" ] ],
    [ "drv1:1B", "stepper1:B-", "green", [ "h0" ] ],
    [ "lcd1:VCC", "vcc1:VCC", "red", [ "h0" ] ],
    [ "lcd1:GND", "gnd1:GND", "black", [ "h0" ] ],
    [ "vcc2:VCC", "drv1:VMOT", "red", [ "v0" ] ],
    [ "drv1:GND.2", "gnd2:GND", "black", [ "h67.35", "v96.08" ] ]
  ],
  "dependencies": {}
}