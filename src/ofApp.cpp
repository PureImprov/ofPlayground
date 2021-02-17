#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(25,25,30);
    ofSetCircleResolution(75);
    ofSetLineWidth(2.0f);
    
    drawLines=true;

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float time=ofGetElapsedTimef();
    float fRadSun = 5;
    
    for (int i=0; i<9;i++){
        ofSetColor(vPtColors[i]);

        float fRadRing =fRadSun+i*70;
        //Draw Rings
        if (drawLines){
            ofNoFill();

            ofDrawCircle(WIND_WIDTH_HALF, WIND_HEIGHT_HALF, fRadRing);
        }
        //DrawPlanets
        ofFill();
        //Work out rotation
        float fPtSpeed = time * 0.05* vPtSpeeds[i];
        glm::vec2 vRotPt = glm::vec2(fRadRing*cos(fPtSpeed), fRadRing*sin(fPtSpeed));
        ofDrawCircle(WIND_WIDTH_HALF+vRotPt.x,WIND_HEIGHT_HALF+vRotPt.y,vPtSizes[i]*0.25);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_RETURN){
        drawLines=!drawLines;
    }

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
