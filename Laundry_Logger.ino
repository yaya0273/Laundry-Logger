 #include <EEPROM.h>
 using namespace std;
 #define incbut A0
 #define resbut A1

 int d1[]={0,1,2,3,4,5,6};
 int d2[]={7,8,9,10,11,12,13};
 int inc=0,res=0,val=EEPROM.read(0);

 void zero(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 1); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 0); 
 }
 void one(int d[]){
  digitalWrite(d[0], 0); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 0);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 0);
  digitalWrite(d[6], 0); 
 }

 void two(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 0); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 1); 
  digitalWrite(d[5], 0);
  digitalWrite(d[6], 1); 
 }

 void three(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 0);
  digitalWrite(d[6], 1);
 }

 void four(int d[]){
  digitalWrite(d[0], 0); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 0);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 1); 
 }

 void five(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 0);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 1);
 }

 void six(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 0);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 1); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 1);
 }

 void seven(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 0);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 0);
  digitalWrite(d[6], 0);
 }

 void eight(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 1); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 1);
 }

 void nine(int d[]){
  digitalWrite(d[0], 1); 
  digitalWrite(d[1], 1);
  digitalWrite(d[2], 1); 
  digitalWrite(d[3], 1);
  digitalWrite(d[4], 0); 
  digitalWrite(d[5], 1);
  digitalWrite(d[6], 1); 
 }
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(incbut, INPUT);
  pinMode(resbut, INPUT);

}


void loop() {
  inc = digitalRead(incbut);
  res = digitalRead(resbut);
  EEPROM.update(0,val);

  if(inc==1){
    val++;
  }

  if(res==1){
    val=0;
  }

  if(val==0){
    zero(d1);
    zero(d2);
  }
  else if(val==1){
    zero(d1);
    one(d2); 
  }
  else if(val==2){
    zero(d1);
    two(d2);
  }
  else if(val==3){
    zero(d1);
    three(d2);
  }
  else if(val==4){
    zero(d1);
    four(d2);
  }
  else if(val==5){
    zero(d1);
    five(d2); 
  }
  else if(val==6){
    zero(d1);
    six(d2);
  }
  else if(val==7){
    zero(d1);
    seven(d2);
  }
  else if(val==8){
    zero(d1);
    eight(d2);
  }
  else if(val==9){
    zero(d1);
    nine(d2); 
  }
  else if(val==10){
    one(d1);
    zero(d2);
  }
  else if(val==11){
    one(d1);
    one(d2);
  }
  else if(val==12){
    one(d1);
    two(d2);
  }
  else if(val==13){
    one(d1);
    three(d2);
  }
  else if(val==14){
    one(d1);
    four(d2);
  }
  else if(val==15){
    one(d1);
    five(d2);
  }
  else if(val==16){
    one(d1);
    six(d2);
  }
  else if(val==17){
    one(d1);
    seven(d2);
  }
  else if(val==18){
    one(d1);
    eight(d2);
  }
  else if(val==19){
    one(d1);
    nine(d2);
  }
  else if(val==20){
    two(d1);
    zero(d2);
  }
  else if(val==21){
    two(d1);
    one(d2);
  }
  else if(val==22){
    two(d1);
    two(d2);
  }
  else if(val==23){
    two(d1);
    three(d2);
  }
  else if(val==24){
    two(d1);
    four(d2);
  }
  else if(val==25){
    two(d1);
    five(d2);
  }

  delay(200);

}
