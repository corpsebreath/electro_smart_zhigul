int LEFT_WHEEL_1 = 9;
int LEFT_WHEEL_2 = 10;
int LEFT_WHEEL_PWM = 9;
int RIGHT_WHEEL_1 = 6;
int RIGHT_WHEEL_2 = 7;
int RIGHT_WHEEL_PWM = 9;



void setup(){

	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);

	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
}
	
void loop(){

	test();



}






void forward(int speed){
	digitalWrite(6, HIGH);
	digitalWrite(7, LOW);

	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
}
void stop(){
	digitalWrite(6, LOW);
	digitalWrite(7, LOW);

	digitalWrite(9, LOW);
	digitalWrite(10, LOW);
}
void left(){
	digitalWrite(6, HIGH);
	digitalWrite(7, LOW);

	digitalWrite(9, LOW);
	digitalWrite(10, HIGH);
}
void right(){
	digitalWrite(6, LOW);
	digitalWrite(7, HIGH);

	digitalWrite(9, HIGH);
	digitalWrite(10, LOW);
}
void test(){
	forward(100);
	delay(2000);
	stop();
	delay(2000);
	left();
	delay(2000);
	right();
	delay(2000);
}
