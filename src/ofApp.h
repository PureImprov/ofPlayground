#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxAssimpModelLoader.h"
#include <ctime>
#include <map>


const int SCR_WIDTH = 1680;
const int SCR_HEIGHT = 1050;
const int WIND_WIDTH = 1440;
const int WIND_HEIGHT = 900;

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void mouseScrolled(int x, int y, float scrollX, float scrollY);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void processInput();

		ofImage image;
		ofTexture texture;

		std::vector<ofPlanePrimitive*> planes;

		float gridRes;
		glm::vec2 imgRes;
		float imgScale;

		ofEasyCam cam;
		ofLight light;
		ofMaterial material;


};
