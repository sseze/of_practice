#include "ofApp.h"

// 画面上から1pxずつ横にランダムなグラデーションを作る
float red[768];
float green[768];
float blue[768];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    // 画面上から1pxずつ横にランダムなグラデーションを作る
    int i;
    for (i=0; i<768; i++) { // 1pxごとにランダムに色を生成
        red[i] = ofRandom(0, 31);
        green[i] = ofRandom(63, 127);
        blue[i] = ofRandom(127, 255);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 画面上から1pxずつ横にランダムなグラデーションを作る
    int i;
    for (i=0; i<768; i++) {
        ofSetColor(red[i], green[i], blue[i]);
        ofLine(0, i, ofGetWidth(), i);
    }
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
