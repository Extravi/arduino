unsigned long int startTime;
int interval;
void setup() {
  DDRD = B11111111;
  DDRB = B11111111;
}

void loop() {
  PORTB = B00000100;
  PORTD = B0110;
  PORTD = B0111;
  PORTD = B1000;
  startTime = millis();
  interval = 500; 
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
  PORTB = B00000000;
  startTime = millis();
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
  PORTB = B00001000;
  PORTD = B0011;
  PORTD = B0100;
  PORTD = B0101;
  startTime = millis();
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
  PORTB = B00000000;
  startTime = millis();
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
  PORTB = B00010000;
  PORTD = B0010;
  PORTD = B0010;
  PORTD = B0000;
  startTime = millis();
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
  PORTB = B00000000;
  startTime = millis();
  if (startTime > interval) {
    while (millis() - startTime < interval);
  }
}
