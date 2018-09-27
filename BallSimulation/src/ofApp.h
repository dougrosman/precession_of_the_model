#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
    
    std::vector<glm::vec3> orbs;
    ofEasyCam cam;
		
};
