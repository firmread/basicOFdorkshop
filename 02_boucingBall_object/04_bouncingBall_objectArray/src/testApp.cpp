#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(120);
    
    // initiate each ball in array with for loop
    for (int i = 0; i<NUM_BALL; i++) {
        b[i].setup();
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i<NUM_BALL; i++) {
        b[i].update();
        b[i].bounce();
    }
}
//--------------------------------------------------------------
void testApp::draw(){
    
    // you don't want to put this line inside the object, otherwise you'll only see the last circle in an array because the background will overlay on top of every other circle
    ofBackgroundGradient(ofColor::gray, ofColor::black);
    
    for (int i = 0; i<NUM_BALL; i++) {
        b[i].draw();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    // press space bar to reset the position of balls again
    if (key == ' ') {
        for (int i = 0; i < NUM_BALL; i++) {
            b[i].setup();
        }
    }
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