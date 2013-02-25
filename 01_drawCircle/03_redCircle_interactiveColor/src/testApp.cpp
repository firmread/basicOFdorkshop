#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // ways to make ofColor color'red'
 
    // 1    set with RGB space
    color.set(255, 0, 0);

    
    // 2    alternative syntax
    color.r = 255;
    color.g = 0;
    color.b = 0;
    
    
    // 3    set with HSB value
    color.setHsb(0, 255, 255);
    
    
    // 4    set with Hex value
    color.setHex(0xFF0000);
    
    
    // 5    set with CSS-like color names that shipped with OF0074
    color = ofColor::red;
    
    
}

//--------------------------------------------------------------
void testApp::update(){
    // map mouse X from 0 to width of the window
    // to 0 to 255 range
    color.setHue(ofMap(mouseX, 0, ofGetWidth(), 0, 255));
}
//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(color);
    ofCircle(mouseX, mouseY, 50);
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