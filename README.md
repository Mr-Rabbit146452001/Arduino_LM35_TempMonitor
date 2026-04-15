# Arduino LM35 Temperature Monitor

## Mô tả
Dự án đọc nhiệt độ từ cảm biến LM35 sử dụng Arduino UNO, gửi dữ liệu qua Serial và hiển thị đồ thị trên PC.

## Tính năng
- Đọc nhiệt độ từ 3 kênh cảm biến LM35 (A0, A1, A2)
- Gửi dữ liệu dạng JSON qua Serial
- Hiển thị đồ thị thời gian thực trên PC (C# WinForms)
- Mô phỏng trên Proteus

## Phần cứng cần thiết
| Linh kiện | Số lượng | Ghi chú |
|-----------|----------|---------|
| Arduino UNO | 1 | Hoặc compatible |
| Cảm biến LM35 | 3 | Đo nhiệt độ |
| Dây jumper | 10 | Kết nối |
| Breadboard | 1 | Tùy chọn |

## Cách sử dụng
1. Kết nối LM35: chân VCC → 5V, GND → GND, OUT → A0/A1/A2
2. Upload firmware lên Arduino
3. Mở Serial Monitor (baudrate 9600)
4. Chạy ứng dụng PC để xem đồ thị

## Cấu trúc thư mục
Arduino_LM35_TempMonitor/
├── firmware/
│ └── LM35_TempReader/
│ └── LM35_TempReader.ino
├── pc_app/
│ └── (ứng dụng C#)
├── simulation/
│ └── (file Proteus)
├── docs/
├── libs/
└── README.md
## Thành viên nhóm

| Họ tên | MSSV | Vai trò |
|--------|------|---------|
| Le Van Hung | N23DCCI028 | Developer |

## Liên kết
- GitHub: [https://github.com/yourusername/Arduino_LM35_TempMonitor](https://github.com/yourusername/Arduino_LM35_TempMonitor)