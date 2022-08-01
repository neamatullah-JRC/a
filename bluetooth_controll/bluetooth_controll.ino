int light1 = 13;
int light2 = 12;
int light3 = 11;

char c;
 
void setup() {
Serial.begin(9600);
pinMode(light1,OUTPUT);
pinMode(light2,OUTPUT);
pinMode(light3,OUTPUT);   

digitalWrite(light1,HIGH);
digitalWrite(light2,HIGH);
digitalWrite(light3,HIGH);
}
 
void loop() {
if(Serial.available()){
  c = Serial.read();
  Serial.println(c);
}
 
if(c == 'A'){
  digitalWrite(light1,LOW);
}else if(c == 'a'){   
  digitalWrite(light1,HIGH);
}
else if(c == 'B'){   
  digitalWrite(light2,LOW);
  }else if(c == 'b'){   
  digitalWrite(light2,HIGH);
  }
else if(c == 'C'){   
  digitalWrite(light3,LOW);
  }else if(c == 'c'){   
  digitalWrite(light3,HIGH);
  }
}
