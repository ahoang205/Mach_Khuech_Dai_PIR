const int analogPin1 = A0;  // Arduino Nano
const int analogPin2 = A1;

const unsigned long intervalMicros = 100000;  // 10 ms = 100 Hz
unsigned long lastMicros = 0; 

bool isMeasuring = false;
String uartBuffer = "";

//const float Y_MIN = 0.0f;
//const float Y_MAX = 3.3f;

void setup() {
  Serial.begin(115200);
}

void loop() {
  // 1) Nhận lệnh START / STOP
  while (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      uartBuffer.trim();
      if (uartBuffer.equalsIgnoreCase("START")) {
        isMeasuring = true;
        lastMicros = micros();            // đồng bộ mốc thời gian
        Serial.println(">> BẮT ĐẦU ĐỌC ADC");

        // Gửi ngay 1 dòng đủ 4 giá trị để plotter nhận đúng số kênh
        //Serial.print(0.000, 3); Serial.print(',');
        //Serial.print(0.000, 3); Serial.print(',');
        //Serial.print(Y_MIN, 3);  Serial.print(',');
        //Serial.println(Y_MAX, 3);
      } else if (uartBuffer.equalsIgnoreCase("STOP")) {
        isMeasuring = false;
        Serial.println(">> DỪNG ĐỌC ADC");
      }
      uartBuffer = "";
    } else {
      uartBuffer += c;
    }
  }

  // 2) Đọc ADC và gửi dữ liệu
  if (isMeasuring) {
    unsigned long now = micros();
    if (now - lastMicros >= intervalMicros) {
      lastMicros += intervalMicros;

      int adc1 = analogRead(analogPin1);
      int adc2 = analogRead(analogPin2);

      float v1 = adc1 * (5.0 / 1023.0);
      float v2 = adc2 * (5.0 / 1023.0);

      // Một dòng CSV: v1, v2, 0, 3
      Serial.print(v1, 3);  Serial.print(',');
      Serial.print(v2, 3);  Serial.println(',');
      //Serial.print(Y_MIN, 3);  Serial.print(',');
     // Serial.println(Y_MAX, 3);
    }
  }
}
