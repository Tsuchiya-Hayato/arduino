//明るさを求めて値によって異なるメッセージを出力させる

//変数宣言
int lx_SOCKET = 0;

//シリアル通信の初期設定、9600はビットレートと呼ばれ、シリアル通信の速度（bit/second）
//PCとArduino間の場合は300, 1200, 2400, 4800, 9600, 14400, 19200, 28800, 38400, 57600, 115200
void setup(){
    Serial.begin(9600);
}

//1V以上だとlightと判定、出力
void loop(){
    int analog_val;
    float input_volt;
    String message = "";

    analog_val = analogRead(lx_SOCKET); //アナログ入力は0~1023で表される
    input_volt = float(analog_val) * ( 5.0 / 1023.0 ); //5Vの範囲で電圧表示
    if (input_volt > 1.0 ){
        message = "Lighted : ";
    } else {
        message = "Dark : ";
    }
    Serial.print(message);
    Serial.print(input_volt);
    Serial.println("V");

    delay (500);
}
