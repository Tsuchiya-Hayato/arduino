//LEDをつないでいるピンに名前をつけます
const int redPin = 5;
const int bluePin = 6;
const int greenPin = 7;


void setup() {
//通信速度（ボーレート）9600で通信をはじめます
Serial.begin(9600);


//LEDをつないだピンは全て「OUTPUT(出力)」に設定します
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(redPin, OUTPUT);

}

void loop() {

//圧電センサーを電圧に変換
float sensorValue = analogRead(A0);
sensorValue = sensorValue*5/1024;
//「sensorValue」に入っている値をシリアルモニターに表示します
Serial.println(sensorValue);
//1秒（100ミリ秒）待ちます
delay(1000);
//もし「sensorValue」に入っている値が1Vなら、赤いLEDを光らせます
if(sensorValue> 1){
  digitalWrite(redPin, HIGH);
  delay(1000);
  digitalWrite(redPin, LOW);
}
//もし「sensorValue」に入っている値が22V以上なら、赤・青のLEDを光らせます
if(sensorValue> 2){
  
  digitalWrite(bluePin, HIGH);
  delay(1000);
  digitalWrite(bluePin, LOW);
}
//もし「sensorValue」に入っている値が3V以上なら、赤・青・緑のLEDを光らせます
if(sensorValue> 3){
 
  digitalWrite(greenPin, HIGH);
  delay(1000);
  digitalWrite(greenPin, LOW);
}
}
