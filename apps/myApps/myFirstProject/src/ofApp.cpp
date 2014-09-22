#include "ofApp.h"

static const int NUM = 1000; // 円の数を表す定数を定義

float loc_x[NUM]; // 円のx座標を保存する配列
float loc_y[NUM]; // 円のy座標を保存する配列
float speed_x[NUM]; // x軸方向のスピードを保存する配列
float speed_y[NUM]; // y軸方向のスピードを保存する配列
float radius[NUM]; // 円の半径を保存する配列

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
   
    // NUMの数だけ初期値を生成
    for (int i=0; i < NUM; i++) {
        loc_x[i] = ofRandom(0, ofGetWidth());
        loc_y[i] = ofRandom(0, ofGetHeight());
        speed_x[i] = ofRandom(-10, 10);
        speed_y[i] = ofRandom(-10, 10);
        radius[i] = ofRandom(4, 40);
    }
}

//--------------------------------------------------------------
// メインループ関数: 指定した画面の書き換え速度(フレームレート)の設定にしたがって繰り返し実行される
/* アニメーションを作成する場合は... */
// 更新: ページをめくる、ページをめくる際の変化を定義する
/* 更にプログラム的観点から書き換えると... */
// 変数の値の更新
void ofApp::update(){
    // NUM個分の円の更新条件を定義する
    for (int i=0; i < NUM; i++) {
        loc_x[i] = loc_x[i] + speed_x[i];
        loc_y[i] = loc_y[i] + speed_y[i];
        
        // 円の跳ね返り条件
        if (loc_x[i] < 0) {
            speed_x[i] = speed_x[i] * -1;
        }
        if (loc_x[i] > ofGetWidth()) {
            speed_x[i] = speed_x[i] * -1;
        }
        if (loc_y[i] < 0) {
            speed_y[i] = speed_y[i] * -1;
        }
        if (loc_y[i] > ofGetHeight()) {
            speed_y[i] = speed_y[i] * -1;
        }
    }
}

//--------------------------------------------------------------
// 描画関数: 画面病がに関する命令を実行する
/* アニメーションを作成する場合は... */
// 表示: イラストを表示する
/* 更にプログラム的観点から書き換えると... */
// 描画
void ofApp::draw(){
    ofSetColor(31, 63, 255, 127); // 描画色の設定
    
    // 円の数だけ描画する
    for (int i=0; i < NUM; i++) {
        ofCircle(loc_x[i], loc_y[i], radius[i]);
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
