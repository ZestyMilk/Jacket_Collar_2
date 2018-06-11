#include <Adafruit_NeoPixel.h>

#define PIN 12
Adafruit_NeoPixel strip = Adafruit_NeoPixel(112, PIN, NEO_GRB + NEO_KHZ800);

//animation speed
uint8_t  wait = 50;

const int nFrames = 3; //number of frames
const int height = 4;  //height of frame
const int width = 28;   //width of frame
const int R = (random(10,30));

//write the animation to memory
    uint8_t anim[nFrames][height][width][3] =
    {  //whole data object
     { //first frame
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //fourth row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //third row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //second row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}  //first row
     },
     { //second frame
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //fourth row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //third row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //second row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}  //first row
     },
     { //third frame
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //fourth row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //third row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}, //second row
      {{R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}, {R,0,0}}  //first row
     }
    };

void setup() {
  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  
}

void loop() {

    uint8_t* pixel;  //a variable to point to a pixel in the animation
 
    for(int frame=0; frame<nFrames; frame++){ //loop through the frames
        for(int row = 0; row<height; row++){  //row by row
            for(int col=0; col<width; col++){ //one pixel at a time
                //select the pixel
                pixel = anim[frame][row][col]; 
              
                // split the channels
                int red = pixel[0]; 
                int green = pixel[1];
                int blue = pixel[2];
              
                red = red + random(0,20); //inject some noise on the red channel
              
                //figure out which led on the strip
                int ledPos = col + (row*(width)) + (frame*(height*width));
                   
                //set the colour
                strip.setPixelColor(
                  ledPos,
                  red,
                  green,
                  blue
                );
            }
        }
        delay(wait);   //10fps maybe
    }
}
