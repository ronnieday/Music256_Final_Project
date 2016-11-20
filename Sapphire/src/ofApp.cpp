#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(50);
    ofBackground(2,11,20); // Deep Blue
    ofSetWindowTitle("Sapphire");
    ofSetFrameRate(60); // 60fps.
    
    // Load the background image:
    sapphireBG.load("images/sapphireShape.jpg");
    
    // Load the play button image:
    playButtonDark.load("images/playButtonDark.png");
    playButtonLight.load("images/playButtonLight.png");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // Main window dimensions:
    int windowWidth = ofGetWidth();
    int windowHeight = ofGetHeight();
    
    // Draw the background image:
    int sapphireBGWidth = sapphireBG.getWidth();
    sapphireBG.resize(windowHeight, windowHeight);
    sapphireBG.draw(windowWidth/2 - sapphireBGWidth/2, 0);
    
    
    // Play Button:
    int buttonSize = 100;
    playButtonDark.resize(buttonSize,buttonSize);
    playButtonLight.resize(buttonSize,buttonSize);
    int button_x = windowWidth/2 - buttonSize/2;
    int button_y = windowHeight/2 - buttonSize/2;
    playButtonDark.draw(button_x, button_y);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
