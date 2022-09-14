#define RED 5
#define GREEN 2
#define BLUE 3
#define YELLOW 4
#define POTENTIOMETER A0

void updDelay(int* tmp, int* d) {
    *tmp = analogRead(POTENTIOMETER);
    *d = ((*tmp) + 100) * (((*tmp) / 124) + 1);
    Serial.println((*d));
}

void setup() {
    // put your setup code here, to run once:
    Serial.begin(115200);
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(POTENTIOMETER, INPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    int temp = analogRead(POTENTIOMETER);
    int dly = (temp + 100) * ((temp / 124) + 1);
    Serial.println(dly);
    digitalWrite(RED, HIGH);
    digitalWrite(RED, LOW);
    if (analogRead(POTENTIOMETER) != temp) {
        updDelay(&temp, &dly);
    }
    delay(dly);
    digitalWrite(GREEN, HIGH);
    digitalWrite(GREEN, LOW);
    if (analogRead(POTENTIOMETER) != temp) {
        updDelay(&temp, &dly);
    }
    delay(dly);
    digitalWrite(BLUE, HIGH);
    digitalWrite(BLUE, LOW);
    if (analogRead(POTENTIOMETER) != temp) {
        updDelay(&temp, &dly);
    }
    delay(dly);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(YELLOW, LOW);
    if (analogRead(POTENTIOMETER) != temp) {
        updDelay(&temp, &dly);
    }
    delay(dly);
}