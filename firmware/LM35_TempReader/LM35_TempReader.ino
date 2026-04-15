/*
 * Du an: Doc nhiet do LM35 va gui qua Serial (dinh dang JSON)
 * Mon: Mang Cam Bien - Tuan 03
 */

int adcValue;
float nhietDo;

void setup() {
    Serial.begin(9600);
    delay(100);
}

void loop() {
    adcValue = analogRead(A0);
    nhietDo = (adcValue * 500.0) / 1023.0;
    
    Serial.print("{\"temperature\":");
    Serial.print(nhietDo, 1);
    Serial.println("}");
    
    delay(1000);
}
