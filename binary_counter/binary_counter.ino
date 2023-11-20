
int asd[8] = {};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 8; i++) {
    asd[i] = i;
    pinMode(asd[i], OUTPUT);
  }
}
//UwU
void loop() {
  // put your main code here, to run repeatedly:

  for (int8_t i = 0; i < 256; i++) {  //i number goes up


    for (int j = 7; j >= 0; j--) {  //this loops the bit of i
      int bit = (i >> j) & 1;
      if (bit == 1) {
        digitalWrite(j, HIGH);
      }
    }
    delay(100);
    for (int x = 0; x < 8; x++) { digitalWrite(x, LOW); }

    //end
  }
}
