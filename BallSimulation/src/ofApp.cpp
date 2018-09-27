#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    
    for(int i = 0; i < 14; i++)
    {
        glm::vec3 v = {ofRandom(-350, 350), ofRandom(-500, 500), ofRandom(-40, 40)};
        orbs.push_back(v);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i < orbs.size(); i++)
    {
        //float t = ofGet * ofRandom(1, 10);
        float noise = ofSignedNoise(t) * ofRandom(1, 5);
        
        //ofLog() << noise;
        
        float value = ofMap(noise, -4.1, 4.1, -1, .5);
        //ofLog() << value;
        orbs[i].x+=value;
        orbs[i].y+=value;

    }
}

//--------------------------------------------------------------
void ofApp::draw()
{
    cam.begin();
    
    
    ofEnableDepthTest();
    
    
    for(int i = 0; i < orbs.size(); i++)
    {
        
        ofPushMatrix();
        ofSetColor(255);
        ofDrawSphere(orbs[i], 16);
        
//        ofSetColor(255, 30);
//        ofSetLineWidth(5);
//        if(i == 0)
//        {
//            ofDrawLine(orbs[orbs.size()-1], orbs[i]);
//            ofDrawLine(orbs[i], orbs[i+1]);
//        }
//        else if(i == orbs.size() - 1)
//        {
//            ofDrawLine(orbs[i-1], orbs[i]);
//            ofDrawLine(orbs[i], orbs[0]);
//        }
//        else
//        {
//            ofDrawLine(orbs[i-1], orbs[i]);
//            ofDrawLine(orbs[i], orbs[i+1]);
//        }
        ofPopMatrix();
    }
    
    ofDisableDepthTest();
    cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

