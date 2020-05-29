#ifndef FONTTHREEDEE_H
#define FONTTHREEDEE_H

#include "ofMain.h"

using namespace std;

class ofxFontThreeDee : public ofTrueTypeFont
{
public:

	vector<ofVboMesh> extrude_mesh_from_text(string word, float extrusion_depth);

private:

};
#endif