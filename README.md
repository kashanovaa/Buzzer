# Push Button Controlled Buzzer (Arduino Uno)

Buzzer sounds only while the button is held, stops on release.

**Simulation:** <paste Wokwi share link>

## Connections
| Part | Pin |
|---|---|
| Button | D2 and GND |
| Buzzer (+) | D8 |
| Buzzer (-) | GND |

Button uses INPUT_PULLUP, so pressed = LOW. No external resistor needed.

## Files
- `sketch.ino`: Arduino code
- `diagram.json`: Wokwi circuit
- `Arduino_Button_Buzzer_Explanation.pdf`: explanation of pin choice and code
