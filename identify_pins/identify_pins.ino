/*
  tests pin numbers by first doing lighting all pins on for a long time, and then flash their number in unary representation
 */

// abbreviations:
// MS = millisecond
int FIRST_FLASH_DURATION_MS = 3000;
int FLASH_SEPARATION_DURATION_MS = 250;
int PIN_NUMBER_FLASH_DURATION_MS = 250;
int DELAY_BEFORE_NEXT_LOOP_MS = 1000;

int start_pin_range = 0;
int end_pin_range_inclusive = 4;

// the setup routine runs once when you press reset:
void setup() {                
  initialize_all_pins_as_output();
}

void initialize_all_pins_as_output() {
  for (int i = start_pin_range; i <= end_pin_range_inclusive; i++) {
    pinMode(i, OUTPUT);
  }
}

// the loop routine runs over and over again forever:
void loop() {
  flash_all_pins(FIRST_FLASH_DURATION_MS);
  flash_number_of_each_pin_on_pin();
  blank(DELAY_BEFORE_NEXT_LOOP_MS);
}

void flash_all_pins(int duration) {
  set_all_pins(HIGH);
  delay(duration);
  set_all_pins(LOW);
}

void flash_number_of_each_pin_on_pin() {
  for (int pin_number = 1; pin_number <= end_pin_range_inclusive; pin_number++) {
    blank(FLASH_SEPARATION_DURATION_MS);
    flash_all_pins_starting_at(pin_number, PIN_NUMBER_FLASH_DURATION_MS);
  }
}

void blank(int duration) {
  set_all_pins(LOW);
  delay(duration);
}

void set_all_pins(int voltage) {
  for (int i = start_pin_range; i <= end_pin_range_inclusive; i++) {
    digitalWrite(i, voltage);
  }
}

void flash_all_pins_starting_at(int pin_number, int duration) {
  set_all_pins_starting_at(pin_number, HIGH);
  delay(duration);
  set_all_pins(LOW);
}

void set_all_pins_starting_at(int start_pin_number, int voltage) {
  for (int i = start_pin_number; i <= end_pin_range_inclusive; i++) {
    digitalWrite(i, voltage);
  }
}
