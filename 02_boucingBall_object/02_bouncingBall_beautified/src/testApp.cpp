#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(120);

    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    vel.x = ofRandom(-5,5);
    vel.y = ofRandom(-5,5);
    
    // set initial color to the brightest red
    color.set(255,0,0);
    
    // change hue of the circle
    // ** HSB (hue,saturation,brightness) is another color space that ofColor can contains
    color.setHue( ofRandom(255) );
    // you can also play more with it with this syntax:
    // color.setHsb(<#float hue#>, <#float saturation#>, <#float brightness#>);
    
    // random the size of the circle between 2 and 20
    diameter = ofRandom(2,20);
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    //update position with velocity
    pos += vel;
    
    //check the edges
    if ((pos.x > ofGetWidth()) || (pos.x < 0)) {
        vel.x *= -1;
    }
    if ( (pos.y > ofGetHeight()) || (pos.y < 0) ){
        vel.y *= -1;
    }
    
}
//--------------------------------------------------------------
void testApp::draw(){
    
    // new function in OF0074 nice and clean gradient!
    ofBackgroundGradient(ofColor::gray, ofColor::black);
    
    // draw with the color that got randomed from setup void
    ofSetColor( color );
    ofCircle(pos, diameter);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}