int LEFT_WHEEL_1 = 9;
int LEFT_WHEEL_2 = 10;
int LEFT_WHEEL_PWM = 3;
int RIGHT_WHEEL_1 = 6;
int RIGHT_WHEEL_2 = 7;
int RIGHT_WHEEL_PWM = 5;



void setup(){

	pinMode(LEFT_WHEEL_1, OUTPUT);
	pinMode(LEFT_WHEEL_2, OUTPUT);

	pinMode(RIGHT_WHEEL_1, OUTPUT);
	pinMode(RIGHT_WHEEL_2, OUTPUT);
}
	
void loop() {

	test();

}






void forward(int speed){
	digitalWrite(RIGHT_WHEEL_1, HIGH);
	digitalWrite(RIGHT_WHEEL_2, LOW);

	digitalWrite(LEFT_WHEEL_1, HIGH);
	digitalWrite(LEFT_WHEEL_2, LOW);
}

void stop(){
	digitalWrite(RIGHT_WHEEL_1, LOW);
	digitalWrite(RIGHT_WHEEL_2, LOW);

	digitalWrite(LEFT_WHEEL_1, LOW);
	digitalWrite(LEFT_WHEEL_2, LOW);
}
void left(){
	digitalWrite(RIGHT_WHEEL_1, HIGH);
	digitalWrite(RIGHT_WHEEL_2, LOW);

	digitalWrite(LEFT_WHEEL_1, LOW);
	digitalWrite(LEFT_WHEEL_2, HIGH);
}
void right(){
	digitalWrite(RIGHT_WHEEL_1, LOW);
	digitalWrite(RIGHT_WHEEL_2, HIGH);

	digitalWrite(LEFT_WHEEL_1, HIGH);
	digitalWrite(LEFT_WHEEL_2, LOW);
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
