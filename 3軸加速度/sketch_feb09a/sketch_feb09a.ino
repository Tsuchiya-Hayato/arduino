
void setup()
{
// シリアルモニターの初期化をする
Serial.begin(9600);

}
void loop()
{
long x , y , z ;
x = y = z = 0 ;
x = analogRead(A3) ; // Ｘ軸
y = analogRead(A4) ; // Ｙ軸
z = analogRead(A5) ; // Ｚ軸

Serial.print(x);  Serial.print(",");
Serial.print(y);  Serial.print(",");
Serial.println(z);
delay(5) ;
}
