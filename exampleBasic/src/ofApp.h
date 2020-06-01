#pragma once

#include "ofMain.h"
#include "ofxFontThreeDee.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        ofxFontThreeDee font;
        ofEasyCam       cam;
};
