#include "ofApp.h"

float loc_x1; // 円のx座標
float loc_y1; // 円のy座標
float speed_x1; // x軸方向のスピード
float speed_y1; // y軸方向のスピード
float loc_x2; // 円のx座標
float loc_y2; // 円のy座標
float speed_x2; // x軸方向のスピード
float speed_y2; // y軸方向のスピード
float loc_x3; // 円のx座標
float loc_y3; // 円のy座標
float speed_x3; // x軸方向のスピード
float speed_y3; // y軸方向のスピード

//--------------------------------------------------------------
// 初期化関数: プログラム実行時に1度だけ実行される
/* アニメーションを作成する場合は... */
// 準備: 紙のサイズや色設定、画材(色・線の太さ)の選択、ページをめくる速度を決める
/* 更にプログラム的観点から書き換えると... */
// 画面サイズ、フレームレート、背景色設定、描画設定、変数初期化
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60); // フレームレートを60fpsに
    ofSetCircleResolution(64); // 円の解像度を設定
    
    // 円の中心座標を初期化
    loc_x1 = ofRandom(0, ofGetWidth());
    loc_y1 = ofRandom(0, ofGetHeight());
    // 初速度を定義
    speed_x1 = ofRandom(-10, 10);
    speed_y1 = ofRandom(-10, 10);
    // 円の中心座標を初期化
    loc_x2 = ofRandom(0, ofGetWidth());
    loc_y2 = ofRandom(0, ofGetHeight());
    // 初速度を定義
    speed_x2 = ofRandom(-20, 20);
    speed_y2 = ofRandom(-20, 20);
    // 円の中心座標を初期化
    loc_x3 = ofRandom(0, ofGetWidth());
    loc_y3 = ofRandom(0, ofGetHeight());
    // 初速度を定義
    speed_x3 = ofRandom(-30, 30);
    speed_y3 = ofRandom(-30, 30);
}

//--------------------------------------------------------------
// メインループ関数: 指定した画面の書き換え速度(フレームレート)の設定にしたがって繰り返し実行される
/* アニメーションを作成する場合は... */
// 更新: ページをめくる、ページをめくる際の変化を定義する
/* 更にプログラム的観点から書き換えると... */
// 変数の値の更新
void ofApp::update(){
    loc_x1 = loc_x1 + speed_x1;
    loc_y1 = loc_y1 + speed_y1;

    // 条件1: 左端で跳ね返る
    if (loc_x1 < 0) {
        speed_x1 = speed_x1 * -1;
    }
    // 条件2: 右端で跳ね返る
    if (loc_x1 > ofGetWidth()) {
        speed_x1 = speed_x1 * -1;
    }
    // 条件3: 上端で跳ね返る
    if (loc_y1 < 0) {
        speed_y1 = speed_y1 * -1;
    }
    // 条件4: 下端で跳ね返る
    if (loc_y1 > ofGetHeight()) {
        speed_y1 = speed_y1 * -1;
    }
    
    loc_x2 = loc_x2 + speed_x2;
    loc_y2 = loc_y2 + speed_y2;

    // 条件1: 左端で跳ね返る
    if (loc_x2 < 0) {
        speed_x2 = speed_x2 * -1;
    }
    // 条件2: 右端で跳ね返る
    if (loc_x2 > ofGetWidth()) {
        speed_x2 = speed_x2 * -1;
    }
    // 条件3: 上端で跳ね返る
    if (loc_y2 < 0) {
        speed_y2 = speed_y2 * -1;
    }
    // 条件4: 下端で跳ね返る
    if (loc_y2 > ofGetHeight()) {
        speed_y2 = speed_y2 * -1;
    }
    
    loc_x3 = loc_x3 + speed_x3;
    loc_y3 = loc_y3 + speed_y3;

    // 条件1: 左端で跳ね返る
    if (loc_x3 < 0) {
        speed_x3 = speed_x3 * -1;
    }
    // 条件2: 右端で跳ね返る
    if (loc_x3 > ofGetWidth()) {
        speed_x3 = speed_x3 * -1;
    }
    // 条件3: 上端で跳ね返る
    if (loc_y3 < 0) {
        speed_y3 = speed_y3 * -1;
    }
    // 条件4: 下端で跳ね返る
    if (loc_y3 > ofGetHeight()) {
        speed_y3 = speed_y3 * -1;
    }
}

//--------------------------------------------------------------
// 描画関数: 画面病がに関する命令を実行する
/* アニメーションを作成する場合は... */
// 表示: イラストを表示する
/* 更にプログラム的観点から書き換えると... */
// 描画
void ofApp::draw(){
    ofSetColor(31, 63, 255); // 描画色設定
    ofCircle(loc_x1, loc_y1, 40); // 円を描画する
    ofCircle(loc_x2, loc_y2, 40); // 円を描画する
    ofCircle(loc_x3, loc_y3, 40); // 円を描画する
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
