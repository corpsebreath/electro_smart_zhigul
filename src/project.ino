int LEFT_WHEEL_1 = 9;
int LEFT_WHEEL_2 = 10;
int LEFT_WHEEL_PWM = 5;
int RIGHT_WHEEL_1 = 7;
int RIGHT_WHEEL_2 = 6;
int RIGHT_WHEEL_PWM = 3;

int PWMA = 5;
int AIN1 = 9;
int AIN2 = 10;
int BIN1 = 7;
int BIN2 = 6;
int PWMB = 3;

int speed = 150;


void setup(){

	pinMode(LEFT_WHEEL_1, OUTPUT);
	pinMode(LEFT_WHEEL_2, OUTPUT);

	pinMode(RIGHT_WHEEL_1, OUTPUT);
	pinMode(RIGHT_WHEEL_2, OUTPUT);

	bt.begin(9600);
	pinMode(PWMA, OUTPUT);
	pinMode(AIN1, OUTPUT);
	pinMode(AIN2, OUTPUT);
	pinMode(BIN1, OUTPUT);
	pinMode(BIN2, OUTPUT);
	pinMode(PWMB, OUTPUT);
}
	
void loop() {

	if(bt.available()) {
		data = bt.read();
	}
	if(data = 'f') {
		speed();
		forward();
	}
	else if(data == 'b') {
		speed();
		back();
	}
	else if(data == 'l') {
		speed();
		left();
	}
	else if(data == 'r') {
		speed();
		right();
	}
	else if(data == 's') {
		stop();
	}
	



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
