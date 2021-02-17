#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    /*
    ofGLFWWindowSettings settings;
    settings.setGLVersion(3, 2);
    settings.setSize( 1200, 1200);
    ofCreateWindow(settings);
     */
    
    ofSetupOpenGL(1200, 1200, OF_WINDOW);
    
    ofRunApp(new ofApp());

}
