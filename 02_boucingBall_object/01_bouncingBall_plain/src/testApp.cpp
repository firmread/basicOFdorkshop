#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    // play around with this value to see how it effect the speed of the ball 120, 60, 30, 10 etc. or comment out to see how fast your cpu can run this
    ofSetFrameRate(120);

    // start from the center of the screen
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    
    // random direction and speed
    vel.x = ofRandom(-5,5);
    vel.y = ofRandom(-5,5);
    
    // with a size of 20
    diameter = 20;
    
}

//--------------------------------------------------------------
void testApp::update(){
    // update position with velocity
    pos += vel;
    
    // check the edges of the window
    if ((pos.x > ofGetWidth()) || (pos.x < 0)) {
        vel.x *= -1;
    }
    if ( (pos.y > ofGetHeight()) || (pos.y < 0) ){
        vel.y *= -1;
    }
    
}
//--------------------------------------------------------------
void testApp::draw(){
    // draw from ofPoint position and diameter
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