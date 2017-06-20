import processing.serial.*;
import java.net.InetAddress;
Serial port; // The serial port
Serial port1;

void setup () { 
  //size(600, 600);  // set up the window to whatever size you want
  println(Serial.list());  // List all the available serial ports
  String portName = "COM7";
  port = new Serial(this, portName, 9600);
  port.clear();
}

public boolean isServerAlive()
  // To check if server is reachable
{
  
  try {
    
    InetAddress.getByName("wossrobotics.ca").isReachable(3000); //Replace with your name
    return true;
  } 
  catch (Exception e){
    return false;
  }
}

void draw(){
  if (isServerAlive()) {
    String onoffdata[] = loadStrings("http://wossrobotics.ca/LEDcube_data.txt");
    text("WORKING",10,100);
    String myArray[] = new String[1];
    if (onoffdata == null){
       myArray[0] = "9";
    }
    else{
      myArray[0] = onoffdata[0];
    }

     if (myArray[0].equals("1")){
        println(" - ANIMATION 1");
        port.write('1');
      }
      
      else if(myArray[0].equals("2")){
        println("ANIMATION 2");
        port.write('2');
      }
      
      else if (myArray[0].equals("3")){
        println("ANIMATION 3");
        port.write('3');
        
      }else if (myArray[0].equals("4")){
        println("ANIMATION 4");
        port.write("4");
      }
      else{
        println("NO DISPLAY");
        port.write('9');
      }
  }else{
    text("NOT WORKING",10,100);
  }
}