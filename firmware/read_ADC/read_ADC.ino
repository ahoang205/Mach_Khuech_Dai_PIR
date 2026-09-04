const int analogPin1 = 34;  // GPIO34 - ADC1_CH6
const int analogPin2 = 35;  // GPIO35 - ADC1_CH7

const unsigned long intervalMicros = 1000;  // 1ms = 1000Hz
unsigned long lastMicros = 0;

bool isMeasuring = false;   // trạng thái đo hay không
String uartBuffer = "";     // buffer chứa chuỗi nhận từ UART

void setup() {
  Serial.begin(115200);
  analogReadResolution(10);  // đặt độ phân giải ADC: 10-bit (0–1023)
}

void loop() {
  // === 1. Nhận lệnh START / STOP từ UART ===
  while (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      uartBuffer.trim();
      if (uartBuffer.equalsIgnoreCase("START")) {
        isMeasuring = true;
        Serial.println(">> BẮT ĐẦU ĐỌC ADC");
      } else if (uartBuffer.equalsIgnoreCase("STOP")) {
        isMeasuring = false;
        Serial.println(">> DỪNG ĐỌC ADC");
      }
      uartBuffer = "";
    } else {
      uartBuffer += c;
    }
  }

  // === 2. Nếu đang đo thì đọc ADC và gửi về máy tính ===
  if (isMeasuring) {
    unsigned long now = micros();
    if (now - lastMicros >= intervalMicros) {
      lastMicros += intervalMicros;

      int adc1 = analogRead(analogPin1);
      int adc2 = analogRead(analogPin2);

      Serial.print(adc1);
      Serial.print(',');
      Serial.println(adc2);
    }
  }
}
