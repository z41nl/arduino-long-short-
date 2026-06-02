const int shortButton = 2;
const int longButton  = 3;

bool lastShortState = HIGH;
bool lastLongState  = HIGH;

void setup() {
    pinMode(shortButton, INPUT_PULLUP);
    pinMode(longButton, INPUT_PULLUP);

    Serial.begin(115200);
}

void loop() {

    bool shortState = digitalRead(shortButton);
    bool longState  = digitalRead(longButton);

    // SHORT 버튼
    if (lastShortState == HIGH && shortState == LOW) {
        Serial.println("SHORT");
    }

    // LONG 버튼
    if (lastLongState == HIGH && longState == LOW) {
        Serial.println("LONG");
    }

    lastShortState = shortState;
    lastLongState = longState;

    delay(20);
}
