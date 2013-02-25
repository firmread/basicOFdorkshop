//
//  ball.cpp
//  emptyExample
//
//  Created by Firm Read on 2/24/13.
//
//

#include "ball.h"
// this chunk from setup void
void ball::setup(){
    
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    vel.x = ofRandom(-5,5);
    vel.y = ofRandom(-5,5);
    
    color.set(255,0,0);
    color.setHue( ofRandom(255) );
    diameter = ofRandom(2,20);
}

// this two chunks from update void
void ball::update(){
    pos += vel;
}

void ball::bounce(){
    if ((pos.x > ofGetWidth()) || (pos.x < 0)) {
        vel.x *= -1;
    }
    if ( (pos.y > ofGetHeight()) || (pos.y < 0) ){
        vel.y *= -1;
    }
}

// this chunk from draw void
void ball::draw(){
    ofSetColor( color );
    ofCircle(pos, diameter);
}