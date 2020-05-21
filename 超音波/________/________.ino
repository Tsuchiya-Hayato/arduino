
#define TRG 11 //11ピンをtrig
#define ECH 10 //10ピンをechoに設定
#define HIGHTIME 10 //trigピンがHIGH⇒OFFになるまでの時間,10µs
void setup() {
Serial.begin(9600); //シリアルモニタを起動するためのコード
pinMode(TRG, OUTPUT); //trigピンを超音波の出力
pinMode(ECH, INPUT); //echoピンを超音波の入力
}
 
void loop() {
int diff; //変数diffを整数型で宣言
float dis; //変数disを小数型で宣言
digitalWrite(TRG, HIGH);   //TRGをHIGH
delayMicroseconds(HIGHTIME); //10µsそのまま
digitalWrite(TRG, LOW); //TRGをOFF
diff = pulseIn(ECH, HIGH); //ECHに入力される超音波を検知
dis = (float)diff * 0.01715; //室温２０[℃]、音速を３４３[m/s]とした時の距離算出式
Serial.print(dis);
Serial.println("cm");
delay(100);
}
