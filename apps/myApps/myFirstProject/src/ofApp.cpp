#include "ofApp.h"

// 画面いっぱいにランダムにたくさんの線を描く
float start_x[1000];
float start_y[1000];
float end_x[1000];
float end_y[1000];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(31, 31, 31); // 背景色の設定
    ofEnableAlphaBlending(); // 透明度(アルファチャンネル)を有効にする
    ofSetLineWidth(2); // 線の太さを設定
    ofEnableSmoothing(); // 線の描画を滑らかにする
    
    // 画面いっぱいにランダムにたくさんの線を描く
    int i;
    for (i=0; i<1000; i++) {
        start_x[i] = ofRandom(0, ofGetWidth());
        start_y[i] = ofRandom(0, ofGetHeight());
        end_x[i] = ofRandom(0, ofGetWidth());
        end_y[i] = ofRandom(0, ofGetHeight());
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 画面いっぱいにランダムにたくさんの線を描く
    int i;
    ofSetColor(31, 127, 255, 63);
    for (i=0; i<1000; i++) {
        ofLine(start_x[i], start_y[i], end_x[i], end_y[i]);
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
