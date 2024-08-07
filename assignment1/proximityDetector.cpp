/*
	This project uses the HC-SR04 ultrasonic sensor to determine the distance of an object using sound waves.
	It has a specified range of 2cm to 400cm.
*/

// pins for the ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

long duration;
float distance;

// put your setup code here, to run once:
void setup() {

	/*
		Serial library is used for communication between the Arduino board and a computer and other devices.
	*/

	// Sets the data rate for serial data transmission to 9600 bits per second
	Serial.begin(9600);

	pinMode(trigPin, OUTPUT); // configures the trigPin to act as an output
	pinMode(echoPin, INPUT);  // configures the echoPin to act as an input
}

// put your main code here, to run repeatedly:
void loop() {

	// Clear the trigPin condition (acts as a reset mechanism for when the loop starts again)
	digitalWrite(trigPin, LOW); // sets the trigPin OFF
	delayMicroseconds(2);

	// Sets the trigPin HIGH (ACTIVE) for 10 microseconds (enough to send a signal to any object in range)
	digitalWrite(trigPin, HIGH); // sets the trigPin ON
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW); // sets the trigPin OFF

	int areObjectsInRange = digitalRead(echoPin);

	// Reads the echoPin, returns the sound wave travel time in microseconds
	// waits for pin to go from LOW to HIGH, starts timing, then waits for the pin to go LOW and stops timing
	duration = pulseIn(echoPin, HIGH);

	// Calculating the distance using the formula: speed = distance / time
	// 340m/s === 0.034cm/1 microsecond
	distance = (duration * 0.034) / 2; // Speed of sound wave divided by 2 (go and return)


	if (distance >= 2 && distance <= 320) {
		// Prints the distance on the Serial Monitor as human-readable ASCII text
		Serial.print("Object(s) detected within range. Distance: ");
		Serial.print(distance);
		// Prints the distance on the Serial Monitor as human-readable ASCII text, followed by a new line
		Serial.println(" cm");
	}
	else {
		Serial.println("Out of range! No object(s) detected within range.");
	}

	// Delay 1000 milliseconds (1 second) before the next the next loop runs
	delay(1000);
}