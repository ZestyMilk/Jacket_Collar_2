#include <Adafruit_NeoPixel.h>

#define PIN 12
Adafruit_NeoPixel strip = Adafruit_NeoPixel(112, PIN, NEO_GRB + NEO_KHZ800);

//animation speed

uint8_t wait = 30; //speed of animation

const int nFrames = 4; //number of frames
const int height = 4;  //height of frame
const int width = 28;   //width of frame
const int refreshesPerFrame = 4; //number of flicker cycles per animation frame

uint8_t   r1 = (random(7,10));
uint8_t   r2 = (random(7,10));
uint8_t   r3 = (random(7,10));
uint8_t   r4 = (random(7,10));
uint8_t   gg = 00; 
uint8_t   bb = 00; 

uint8_t   R1 = 60; 
uint8_t   R2 = 60; 
uint8_t   R3 = 60; 
uint8_t   R4 = 60; 
uint8_t   GG = 10; 
uint8_t   BB = 00; 

uint8_t anim[nFrames][height][width][3] =
    {  //whole data object
      
     { //frame 1
      {{r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}}, //fourth row
      {{r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}}, //third row
      {{r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}}, //second row
      {{r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 2
      {{r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}}, //fourth row
      {{r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}}, //third row
      {{r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}}, //second row
      {{r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 3
      {{r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}}, //fourth row
      {{r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}}, //third row
      {{r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}}, //second row
      {{r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}}  //first row
     },                                                                                                                                                              //centre of strip//
     
     { //frame 4
      {{R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {r1,gg,bb}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}, {R1,GG,BB}}, //fourth row
      {{R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {r2,gg,bb}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}, {R2,GG,BB}}, //third row
      {{R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {r3,gg,bb}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}, {R3,GG,BB}}, //second row
      {{R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {r4,gg,bb}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}, {R4,GG,BB}}  //first row
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
          delay(300);
        };
        strip.show();
      }//frame complete
    }//animation complete
  
}
