
const byte  LIGHT_ROOM_1_PIN = 8;
const byte  LIGHT_ROOM_2_PIN = 9;
const byte  LIGHT_ROOM_3_PIN = 10;
const byte  LIGHT_ROOM_4_PIN = 11;
const byte  LIGHT_ROOM_5_PIN = 12;
const byte  LIGHT_ROOM_6_PIN = 13;


const byte SWITCH_PIN_1 = 2;
const byte SWITCH_PIN_2 = 3;
const byte SWITCH_PIN_3 = 4;

//_________________________________________________________________________________________

void setup() {
  // Configure our LED control pins as OUTPUT pins
  pinMode(LIGHT_ROOM_1_PIN, OUTPUT);
  pinMode(LIGHT_ROOM_2_PIN, OUTPUT);
  pinMode(LIGHT_ROOM_3_PIN, OUTPUT);
  pinMode(LIGHT_ROOM_4_PIN, OUTPUT);
  pinMode(LIGHT_ROOM_5_PIN, OUTPUT);
  pinMode(LIGHT_ROOM_6_PIN, OUTPUT);


  // Configure the switch pins as INPUT pins
  pinMode(SWITCH_PIN_1, INPUT);
  pinMode(SWITCH_PIN_2, INPUT);
  pinMode(SWITCH_PIN_3, INPUT);

  //Serial.begin(115200);
}

//_________________________________________________________________________________________

void loop()
{
  int room_number = 0;

  // get room number from the binary code on the dip-switch
  if (digitalRead(SWITCH_PIN_1) == HIGH)
  {
    room_number = room_number + 1 * 2 * 2;
  }

  if (digitalRead(SWITCH_PIN_2) == HIGH)
  {
    room_number = room_number + 1 * 2;
  }

  if (digitalRead(SWITCH_PIN_3) == HIGH)
  {
    room_number = room_number + 1;
  }

  // reset LEDs
  
  digitalWrite(LIGHT_ROOM_1_PIN, LOW);
  digitalWrite(LIGHT_ROOM_2_PIN, LOW);
  digitalWrite(LIGHT_ROOM_3_PIN, LOW);
  digitalWrite(LIGHT_ROOM_4_PIN, LOW);
  digitalWrite(LIGHT_ROOM_5_PIN, LOW);
  digitalWrite(LIGHT_ROOM_6_PIN, LOW);
  
  // turn on the lights now.
  if (room_number == 1)
  {
    digitalWrite(LIGHT_ROOM_1_PIN, HIGH);
  }
  else if (room_number == 2)
  {
    digitalWrite(LIGHT_ROOM_2_PIN, HIGH);
  }
  else if (room_number == 3)
  {
    digitalWrite(LIGHT_ROOM_3_PIN, HIGH);
  }
  else if (room_number == 4)
  {
    digitalWrite(LIGHT_ROOM_4_PIN, HIGH);
  }
  else if (room_number == 5)
  {
    digitalWrite(LIGHT_ROOM_5_PIN, HIGH);
  }
  else if (room_number == 6)
  {
    digitalWrite(LIGHT_ROOM_6_PIN, HIGH);
  }



  //  Serial.print(room_number);
}

//_________________________________________________________________________________________
