#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    font.load("verdana.ttf",
         22,true, false, true);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    cam.begin();
    vector<ofVboMesh> text = font.extrude_mesh_from_text("hello", 10);
    
    for(auto v : text)
    {
        v.draw();
    }
    
    cam.end();
}
