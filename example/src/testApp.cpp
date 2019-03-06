#include "testApp.h"


void testApp::setup(){
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetColor(0);
	font.loadFont("Blackout-Sunrise.ttf", 64);
}
void testApp::update(){
	float t = ofGetElapsedTimef();
	a = ofNoise(t * .4) - 0.5;
	b = ofNoise(t * .7) - 0.5;

}
void testApp::draw(){

	ofSetColor(0,255,0);
	font.drawStringCentered("centered", (ofGetWidth() >> 1) + a * 3, ofGetHeight() >> 1);
	ofSetColor(255,100,0);
	font.drawStringCentered("centered", (ofGetWidth() >> 1) + b * 3, ofGetHeight() >> 1);
	ofSetColor(0);
	font.drawStringCentered("centered", ofGetWidth() >> 1, ofGetHeight() >> 1);
	// font.drawCenteredBoundingBox("CENTERED", mouseX, mouseY - 60, 10);
}


