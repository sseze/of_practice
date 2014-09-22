#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(31, 31, 31); // 背景色の設定
    ofEnableAlphaBlending(); // 透明度(アルファチャンネル)を有効にする
    ofSetCircleResolution(64); // 円の解像度を設定
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // 同心円を描く
    float x;
    float y;
    float radius;
    x = 1024/2;
    y = 768/2;
    radius = 30;
    radius = radius + 30;
    ofSetColor(31, 127, 255, 127);
    ofCircle(x, y, radius); // 円を描く
    ofCircle(x, y, radius+40); // 半径を40増加させて円を描く
    ofCircle(x, y, radius+80); // 半径を80増加させて円を描く
    ofCircle(x, y, radius+120); // 半径を120増加させて円を描く
    ofCircle(x, y, radius+160); // 半径を160増加させて円を描く
    ofCircle(x, y, radius+200); // 半径を200増加させて円を描く
    ofCircle(x, y, radius+240); // 半径を240増加させて円を描く

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
