void setup() {
  Serial.begin(115200);
  //Begin serial communication Arduino IDE (Serial Monitor)

  //Begin serial communication Neo6mGPS
  neogps.begin(9600, SERIAL_8N1, RXD2, TXD2);
  
  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  display.clearDisplay();
  display.display();
  delay(2000);

}
