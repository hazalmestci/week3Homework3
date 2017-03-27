#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
 radius = radius + 0.09;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float sinOfTime               = sin( ofGetElapsedTimef() );
    float sinOfTimeMapped         = ofMap(sinOfTime, -1, 1, 0, 255);
    
    ofBackground(sinOfTimeMapped, sinOfTimeMapped, sinOfTimeMapped);


    xPos = xOrig + radius * cos(angle);
    yPos = yOrig + radius * sin(angle);
    
    ofSetColor(ofRandom(0,55),ofRandom(100,255),ofRandom(0,255));
    float xorig = 500;
    float yorig = 300;
    float angle = ofGetElapsedTimef()*3.5;
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * sin(angle);
    ofDrawCircle (x,y,radius);
    
    
    
    
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
