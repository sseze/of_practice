#include "ofApp.h"

// 画面いっぱいにランダムにたくさんの円を描く
float x[1000];
float y[1000];
float radius[1000];

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(31, 31, 31); // 背景色の設定
    ofEnableAlphaBlending(); // 透明度(アルファチャンネル)を有効にする
    
    // 画面いっぱいにランダムにたくさんの円を描く
    int i;
    for (i=0; i<1000; i++) {
        x[i] = ofRandom(0, ofGetWidth()); // x座標は0~横幅一杯まで
        y[i] = ofRandom(0, ofGetHeight()); // y座標は0~縦幅一杯まで
        radius[i] = ofRandom(10, 40);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 画面いっぱいにランダムにたくさんの円を描く
    int i;
    ofSetColor(31, 63, 255, 63); // 描画色を設定
    for (i=0; i<1000; i++) {
        ofCircle(x[i], y[i], radius[i]);
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
