/*
<<<<<<< HEAD
 * Dự án: Đọc nhiệt độ 2 kênh LM35 và gửi qua Serial dạng CSV
 * Môn: Mạng Cảm Biến - Tuần 03
 */

int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];
 * Du an: Doc nhiet do LM35 va gui qua Serial (3 kenh A0, A1, A2)
 * Mon: Mang Cam Bien - Tuan 03
 */

int adcValues[3];
float nhietDo[3];
char chuoi[50];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Bước 1: Đọc dữ liệu từ cả 3 kênh (Giữ lại đóng góp của SV A)
  int valA0 = analogRead(A0);
  int valA1 = analogRead(A1);
  int valA2 = analogRead(A2); 

  // Bước 2: Tính toán nhiệt độ cho cả 3 cảm biến
  float tempA0 = (valA0 * 500.0) / 1024.0;
  float tempA1 = (valA1 * 500.0) / 1024.0;
  float tempA2 = (valA2 * 500.0) / 1024.0;

  // Bước 3: Xuất dữ liệu định dạng JSON (Áp dụng ý tưởng của SV B)
  Serial.print("{");
  Serial.print("\"tempA0\":"); Serial.print(tempA0);
  Serial.print(", \"tempA1\":"); Serial.print(tempA1);
  Serial.print(", \"tempA2\":"); Serial.print(tempA2);
  Serial.println("}");

  delay(100);
}
    adcValues[0] = analogRead(A0);
    nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
    
    adcValues[1] = analogRead(A1);
    nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
    
    adcValues[2] = analogRead(A2);
    nhietDo[2] = (adcValues[2] * 500.0) / 1023.0;
    
    sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
    Serial.print(chuoi);
    
    delay(100);
}