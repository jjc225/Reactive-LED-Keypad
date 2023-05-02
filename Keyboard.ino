#include "Timer.h"
#include "Keyboard.h"
/* xxx
xxx1246790
*/
Timer t(MILLIS);
String flag = "1";

void setup() {                
  pinMode(23, INPUT); //1
  pinMode(22, INPUT); //2ABC
  pinMode(21, INPUT); //3DEF
  pinMode(3, INPUT);  //4GHI
  pinMode(5, INPUT);  //5JKL
  pinMode(2, INPUT);  //6MNO
  pinMode(29, INPUT); //7PQRS 
  pinMode(30, INPUT); //8TUV
  pinMode(24, INPUT); //9WXYZ
  pinMode(25, INPUT); //0
}

void loop() { 
                                   
  while (digitalRead(23) == HIGH) { // NUM 1
    Keyboard.print("1");
    flag = "1";
    t.stop();
    t.start();
    delay(40);
    if (digitalRead(23) == LOW) {
      break;
    }
    delay(600);
    while (digitalRead(23) == HIGH) {
      Keyboard.print("1");
      delay(30);
    }
 }  

  
  while (digitalRead(22) == HIGH) { // NUM 2, also ABC

    if ((flag == "c") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "b") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("c");
      flag = "c";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "a") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("b");
      flag = "b";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "2") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("a");
      flag = "a";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "2";
      t.stop();
      t.start();
    }      
          
    if ((flag != "a" && flag != "b" && flag != "c" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("2");
      flag = "2";
      t.stop();
      t.start();
      delay(300);
    }

  }


  while (digitalRead(21) == HIGH) { // NUM 3, also DEF

    if ((flag == "f") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "e") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("f");
      flag = "f";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "d") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("e");
      flag = "e";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "3") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("d");
      flag = "d";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "3";
      t.stop();
      t.start();
    }      
          
    if ((flag != "d" && flag != "e" && flag != "f" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("3");
      flag = "3";
      t.stop();
      t.start();
      delay(300);
    }

  }



 
while (digitalRead(3) == HIGH) { // NUM 4, also GHI

    if ((flag == "i") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "h") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("i");
      flag = "i";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "g") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("h");
      flag = "h";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "4") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("g");
      flag = "g";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "4";
      t.stop();
      t.start();
    }      
          
    if ((flag != "g" && flag != "h" && flag != "i" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("4");
      flag = "4";
      t.stop();
      t.start();
      delay(300);
    }

  }



  
while (digitalRead(5) == HIGH) { // NUM 5, also JKL

    if ((flag == "l") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "k") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("l");
      flag = "l";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "j") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("k");
      flag = "k";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "5") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("j");
      flag = "j";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "5";
      t.stop();
      t.start();
    }      
          
    if ((flag != "j" && flag != "k" && flag != "l" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("5");
      flag = "5";
      t.stop();
      t.start();
      delay(300);
    }

  }



 
while (digitalRead(2) == HIGH) { // NUM 6, also MNO

    if ((flag == "o") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "n") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("o");
      flag = "o";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "m") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("n");
      flag = "n";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "6") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("m");
      flag = "m";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "6";
      t.stop();
      t.start();
    }      
          
    if ((flag != "m" && flag != "n" && flag != "o" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("6");
      flag = "6";
      t.stop();
      t.start();
      delay(300);
    }

  }
  



while (digitalRead(29) == HIGH) { // NUM 7, also PQRS

    if ((flag == "s") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "r") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("s");
      flag = "s";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "q") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("r");
      flag = "r";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "p") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("q");
      flag = "q";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "7") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("p");
      flag = "p";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "7";
      t.stop();
      t.start();
    }      
          
    if ((flag != "p" && flag != "q" && flag != "r" && flag != "s" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("7");
      flag = "7";
      t.stop();
      t.start();
      delay(300);
    }

  }



 
while (digitalRead(30) == HIGH) { // NUM 8, also TUV

    if ((flag == "v") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "u") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("v");
      flag = "v";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "t") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("u");
      flag = "u";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "8") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("t");
      flag = "t";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "6";
      t.stop();
      t.start();
    }      
          
    if ((flag != "t" && flag != "u" && flag != "v" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("8");
      flag = "8";
      t.stop();
      t.start();
      delay(300);
    }

  }


 
while (digitalRead(24) == HIGH) { // NUM 9, also WXYZ

    if ((flag == "z") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      flag = "back";
      t.stop();
      t.start();
    }   

    if ((flag == "y") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("z");
      flag = "z";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "x") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("y");
      flag = "y";
      t.stop();
      t.start();
      delay(300);  
    }  

    if ((flag == "w") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("x");
      flag = "x";
      t.stop();
      t.start();
      delay(300);
    }

    if ((flag == "9") && (t.read() < 1200)) {
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
      Keyboard.print("w");
      flag = "w";
      t.stop();
      t.start();
      delay(300);
    }

    if (flag == "back" && (t.read() < 1200)) {
      flag = "9";
      t.stop();
      t.start();
    }      
          
    if ((flag != "w" && flag != "x" && flag != "y" && flag != "z" && flag != "back") || (t.read() > 1200)) {
      Keyboard.print("9");
      flag = "9";
      t.stop();
      t.start();
      delay(300);
    }

  }


 
 while (digitalRead(25) == HIGH) {
    Keyboard.print("0");
    delay(40);
    if (digitalRead(25) == LOW) {
      break;
    }
    delay(600);
    while (digitalRead(25) == HIGH) {
      Keyboard.print("0");
      delay(30);
    }
 } 


 
}


//when 2 key pressed:

//reverse order check
//check for current key press (flag boolean)

//if key press is 2, set flag to 2, start the cycle
//if flag is 2, next press is backspace -> a, set flag to A, reset timer
//if flag is a, next press is backspace -> b, set flag to B, reset timer
//if flag is b, next press is backspace -> c, set flag to C, reset timer
//if flag is c, next press is just backspace, set flag to BACK, reset timer
//if flag is BACK, this skips the A press, then goes back to the 2 press

//if at any point the timer passes 1.2 seconds, the cycle ends

//this function is copied for every key except 0 and 1

//going in forward order would prevent any delay from occurring after each press
