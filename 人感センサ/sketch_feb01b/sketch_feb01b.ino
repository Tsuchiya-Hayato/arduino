int LED_PIN = 8; // LEDはピンを10番に設定
int PIR_PIN = 10; //  人感センサーは2番ピンを使う
int INTERVAL=1000; // 1秒間
void setup() {
// put your setup code here, to run once:
pinMode( PIR_PIN ,INPUT); //人感センサー信号の入力
pinMode( LED_PIN ,OUTPUT); //LEDライトの出力
}
void loop() {
// put your main code here, to run repeatedly:
digitalWrite(LED_PIN, LOW); //いったん消灯
if (digitalRead(PIR_PIN) == 1) { // 人を検知したら
digitalWrite(LED_PIN, HIGH); //LED点灯
delay(INTERVAL); //1秒間点灯
}
}
