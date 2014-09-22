#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(31, 31, 31); // 背景色の設定
    ofEnableAlphaBlending(); // 透明度(アルファチャンネル)を有効にする
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // グラデーションを作る
    float w = ofGetWidth()/30.0 + 1;  // 長方形の幅を指定
    float h = ofGetHeight()/20.0 + 1; // 長方形の高さを指定
    float x = 0; // x座標を0に
    float y = ofGetHeight()/2 - h/2; // y座標を画面の上下の中心に
    float i; // 横用
    float j; // 縦用
    
    for (j=0; j<20; j++) {
        for(i=0; i<30; i++) {
            ofSetColor(255/20 * j, 127, 255/30 * i, 127);
            x = ofGetWidth() / 30.0 * i; // x座標上に等間隔に配置
            y = ofGetHeight() / 20.0 * j; // y座標上に等間隔に配置
            ofRect(x, y, w, h); // 長方形を描く
        }
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
