/*
 * Dự án: Đọc nhiệt độ 2 kênh LM35 và gửi qua Serial dạng CSV
 * Môn: Mạng Cảm Biến - Tuần 03
 */

int adcValues[2]; 
float nhietDo[2]; 
char chuoi[30];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // SV B tối ưu code, bỏ mảng và dùng biến đơn
  int adcValue = analogRead(A0);
  float nhietDo = (adcValue * 500.0) / 1023.0;

  // Đổi định dạng xuất ra Serial sang chuẩn JSON
  Serial.print("{\"temperature\":");
  Serial.print(nhietDo, 1); // In ra 1 chữ số thập phân
  Serial.println("}");

  delay(100);
}
}