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
//    単純図形の描画と色設定
    ofSetColor(242, 204, 242, 127); // 描画色の設定
    ofLine(100, 300, 800, 300); // 線を描く
    ofSetColor(242, 204, 47, 127); // 描画色の設定
    ofRect(500, 250, 150, 200); // 四角形を描く
    ofSetColor(174, 221, 60, 127); // 描画色の設定
    ofCircle(400, 250, 150); // 真円を描く
    ofSetColor(116, 193, 206, 127); // 描画色の設定
    ofEllipse(400, 450, 300, 200); // 楕円を描く
    ofSetColor(211, 24, 24, 127); // 描画色の設定
    ofTriangle(420, 200, 200, 500, 550, 400); // 三角形を描く
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
