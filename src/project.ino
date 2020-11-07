int LEFT_WHEEL_1 = 9;
int LEFT_WHEEL_2 = 10;
int LEFT_WHEEL_PWM = 5;
int RIGHT_WHEEL_1 = 7;
int RIGHT_WHEEL_2 = 6;
int RIGHT_WHEEL_PWM = 3;

int speed = 150;


void setup(){

	pinMode(LEFT_WHEEL_1, OUTPUT);
	pinMode(LEFT_WHEEL_2, OUTPUT);

	pinMode(RIGHT_WHEEL_1, OUTPUT);
	pinMode(RIGHT_WHEEL_2, OUTPUT);
}
	
void loop() {

	test();


}






void forward(){
	digitalWrite(RIGHT_WHEEL_1, HIGH);
	digitalWrite(RIGHT_WHEEL_2, LOW);

	digitalWrite(LEFT_WHEEL_1, HIGH);
	digitalWrite(LEFT_WHEEL_2, LOW);

	analogWrite(LEFT_WHEEL_PWM, speed);
	analogWrite(RIGHT_WHEEL_PWM, speed);
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

	analogWrite(LEFT_WHEEL_PWM, speed = 90);
	analogWrite(RIGHT_WHEEL_PWM, speed = 130);

}
void right(){
	digitalWrite(RIGHT_WHEEL_1, LOW);
	digitalWrite(RIGHT_WHEEL_2, HIGH);

	digitalWrite(LEFT_WHEEL_1, HIGH);
	digitalWrite(LEFT_WHEEL_2, LOW);

	analogWrite(LEFT_WHEEL_PWM, speed = 130);
	analogWrite(RIGHT_WHEEL_PWM, speed = 90);

}
void back(){
	digitalWrite(RIGHT_WHEEL_1, LOW);
	digitalWrite(RIGHT_WHEEL_2, HIGH);

	digitalWrite(LEFT_WHEEL_1, LOW);
	digitalWrite(LEFT_WHEEL_2, HIGH);

	analogWrite(LEFT_WHEEL_PWM, speed);
	analogWrite(RIGHT_WHEEL_PWM, speed);


}
void test(){
	forward();
	delay(2000);
	
}
