#include <Adafruit_NeoPixel.h>

#define Pin 5; //네오픽셀 출력 핀번호
#define NUM_LEDS 30; //led 개수
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);

void setup() {
  pinMode(input,INPUT);
  strip.begin();
  strip.show();
}

void loop() {
  int state = analogRead(input);
  state = map(state,0,1023,0,255);
  for(int i=0;i<NUM_LEDS;i++){
    strip.setPixelColor(i,strip.Color(0,0,0,255));
    strip.show();
    strip.setBrightness(state);
  }
}
