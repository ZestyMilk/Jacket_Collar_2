#include <Adafruit_NeoPixel.h>

#define PIN 12
Adafruit_NeoPixel strip = Adafruit_NeoPixel(112, PIN, NEO_GRB + NEO_KHZ800);

//animation speed

const int nFrames = 4; //number of frames
const int height = 4;  //height of frame
const int width = 28;   //width of frame
const int refreshesPerFrame = 4; //number of flicker cycles per animation frame

uint8_t   rr = 10;
uint8_t   gg = 00; 
uint8_t   bb = 00; 

uint8_t   RR = 60; 
uint8_t   GG = 10; 
uint8_t   BB = 00; 

uint8_t anim[nFrames][height][width][3] =
    {  //whole data object
      
     { //frame 1
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //fourth row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //third row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //second row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 2
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //fourth row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //third row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //second row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 3
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //fourth row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //third row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}, //second row
      {{rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 4
      {{RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}}, //fourth row
      {{RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}}, //third row
      {{RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}}, //second row
      {{RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {rr,gg,bb}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}, {RR,GG,BB}}  //first row
     }                                                                                                                                                              //centre of strip//
    };

void setup() {
  
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  
}

void loop() {
          
    uint8_t* pixel;  //a variable to point to a pixel in the animation
 
    for(int frame=0; frame<nFrames; frame++){ //loop through the frames
      for(int ref=0; ref<refreshesPerFrame; ref++){
        for(int row = 0; row<height; row++){  //row by row
          for(int col=0; col<width; col++){ //one pixel at a time
            //select the pixel
            pixel = anim[frame][row][col]; 
              
            // split the channels
            int red = pixel[0]; 
            int green = pixel[1];
            int blue = pixel[2];
              
            //figure out which led on the strip
            int ledPos = col + (row*(width));
                   
            //set the colour
            strip.setPixelColor(
              ledPos,
              red,
              green,
              blue
            );
            
          }//row complete
        }//refresh complete
        delay(wait);   //10fps maybe
        if (frame==0){
          
        };
        strip.show();
      }//frame complete
    }//animation complete
  
}
