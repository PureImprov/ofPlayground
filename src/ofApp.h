#pragma once

#include "ofMain.h"


const std::vector<float> vPtSizes ={
    150,
    4.879*2,
    12.104*2,
    12.756*2,
    6.792*2,
    142.984,
    120.536,
    51.118,
    49.528};

const std::vector<float> vPtSpeeds ={
    1,
    47.9,
    35,
    29.8,
    24.1,
    13.1,
    9.7,
    6.8,
    5.4};

const std::vector<ofFloatColor> vPtColors ={
    ofColor(230,190,10),
    ofColor(200,198,195),
    ofColor(200,200,150),
    ofColor(50,50,255),
    ofColor(200,80,5),
    ofColor(200,120,5),
    ofColor(200,180,30),
    ofColor(100,100,200),
    ofColor(60,60,200),
};
    
    

class ofApp : public ofBaseApp{

	public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    float WIND_WIDTH=ofGetWindowWidth();
    float WIND_HEIGHT=ofGetWindowHeight();
    float WIND_WIDTH_HALF=WIND_WIDTH/2;
    float WIND_HEIGHT_HALF=WIND_HEIGHT/2;


    bool isMousePressed;
    
    bool drawLines;
		
};
