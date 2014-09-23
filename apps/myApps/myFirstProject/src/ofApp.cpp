#include "ofApp.h"

static const int NUM = 1000;

float loc_x[NUM];
float loc_y[NUM];
float speed_x[NUM];
float speed_y[NUM];
float radius[NUM];
float red[NUM];
float green[NUM];
float blue[NUM];
bool mouse_pressed; // マウスがクリックされたか？

//--------------------------------------------------------------
// 初期化関数: プログラム実行時に1度だけ実行される
/* アニメーションを作成する場合は... */
// 準備: 紙のサイズや色設定、画材(色・線の太さ)の選択、ページをめくる速度を決める
/* 更にプログラム的観点から書き換えると... */
// 画面サイズ、フレームレート、背景色設定、描画設定、変数初期化
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetFrameRate(60); // フレームレート
    ofSetCircleResolution(64); // 解像度
    ofEnableAlphaBlending(); // アルファチャンネル(透過)を有効にする
    
    mouse_pressed = false; // マウスがクリックされていない状態で初期化
    
    for (int i=0; i<NUM; i++) {
        loc_x[i] = ofRandom(0, ofGetWidth());
        loc_y[i] = ofRandom(0, ofGetHeight());
        speed_x[i] = ofRandom(-5, 5);
        speed_y[i] = ofRandom(-5, 5);
        radius[i] = ofRandom(4, 40);
        red[i] = ofRandom(0, 255);
        green[i] = ofRandom(0, 255);
        blue[i] = ofRandom(0, 255);
    }
}

//--------------------------------------------------------------
// メインループ関数: 指定した画面の書き換え速度(フレームレート)の設定にしたがって繰り返し実行される
/* アニメーションを作成する場合は... */
// 更新: ページをめくる、ページをめくる際の変化を定義する
/* 更にプログラム的観点から書き換えると... */
// 変数の値の更新
void ofApp::update(){
    for (int i=0; i<NUM; i++) {
        // もしマウスがクリックされていたら円がマウスに集まってくる
        if (mouse_pressed) {
            // マウスの現在位置から円のスピードを再計算
            // マウスのx座標と円のx座標の距離の1/8だけ接近
            speed_x[i] = (mouseX - loc_x[i]) / 8.0;
            // マウスのy座標と円のy座標の距離の1/8だけ接近
            speed_y[i] = (mouseY - loc_y[i]) / 8.0;
        }
        
        // 円の座標を更新
        loc_x[i] = loc_x[i] + speed_x[i];
        loc_y[i] = loc_y[i] + speed_y[i];
        
        // 跳ね返り条件
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
    for (int i=0; i<NUM; i++) {
        ofSetColor(red[i], green[i], blue[i], 127);
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
// マウスを移動したときを検知して実行する
void ofApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
// マウスをドラッグしたときを検知して実行する
void ofApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
// マウスをクリックしたときを検知して実行する
void ofApp::mousePressed(int x, int y, int button){
    mouse_pressed = true; // マウスが押されている状態に
}

//--------------------------------------------------------------
// クリックされていたマウスのボタンがリリースされたときに実行する
void ofApp::mouseReleased(int x, int y, int button){
    mouse_pressed = false; // マウスが押されていない状態に
    
    // 円のスピードを再初期化
    for (int i=0; i<NUM; i++) {
        speed_x[i] = ofRandom(-5, 5);
        speed_y[i] = ofRandom(-5, 5);
    }
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
