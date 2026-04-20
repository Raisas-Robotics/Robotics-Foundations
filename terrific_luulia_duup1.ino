void setup(){
  Serial.begin(9600);
  
}
void loop(){
  Serial.begin(9600);
  int num1 = 15;
  int num2 = 10;
  int sum = num1+num2;
  Serial.print("First Number:");
  Serial.println(num1);
  Serial.print("Second Number:");
  Serial.println(num2);
  Serial.print("The Total sum is:");
  Serial.println(sum);
  delay(1000);
}