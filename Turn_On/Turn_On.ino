int button = 2;
void setup(){
    pinMode(button,INPUT_PULLUP);
    Serial.begin(9600);
    pinMode(3,OUTPUT);
}
void loop(){
    int state = digitalRead(button);
    Serial.println(state);
    if(state == 0)
        digitalWrite(3,HIGH);
    else
        digitalWrite(3,LOW);
}