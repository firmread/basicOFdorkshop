//
//  ball.h
//  emptyExample
//
//  Created by Firm Read on 2/24/13.
//
//

#ifndef __emptyExample__ball__
#define __emptyExample__ball__

#include <iostream>
#include "ofMain.h"

class ball{
public:
    void setup();
    void update();
    void bounce();
    void draw();
    
    ofColor color;
    
    ofPoint pos;
    ofPoint vel;
    
    float diameter;
    
private:
    //private stuffs here
};


#endif /* defined(__emptyExample__ball__) */
