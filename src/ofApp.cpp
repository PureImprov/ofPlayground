#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofDisableArbTex();

	light.setup();
	light.setPosition(100.0f, 0.0f, 30.0f);
	light.setDiffuseColor(ofFloatColor(0.4f, 0.2f, 1.0f));

	ofSetGlobalAmbientColor(ofFloatColor(0.0f,0.0f,0.0f));
	ofBackground(0.1f, 0.1f, 0.1f);

	gridRes = 8.0f;
	imgScale = 1.5f;

	std::string imgName = "RETURN.JPG";

	image.load(imgName);
	ofLoadImage(texture, imgName);
	texture.enableMipmap();
	
	imgRes = glm::vec2(image.getWidth(), image.getHeight())*imgScale;

	light.setPosition(imgRes.x/2.0f, imgRes.y / 2.0f, 50.0f);

	glm::vec2 gridUnit = glm::vec2(imgRes.x / gridRes, imgRes.y / gridRes);
	glm::vec2 gridUnitOffset = gridUnit / 2.0f;

	glm::vec2 gridUnitPerc = gridUnit / imgRes;


	for (int j = 0; j < gridRes; j++) {
		float posY = gridUnit.y * j + gridUnitOffset.y;
		float v1 = gridUnitPerc.y * j;
		float v2 = v1 + gridUnitPerc.y;

		for (int i = 0; i < gridRes; i++) {
			planes.push_back(new ofPlanePrimitive);
			planes.back()->set(gridUnit.x, gridUnit.y);
			planes.back()->setScale(1, -1, 1);

			float posX = gridUnit.x * i + gridUnitOffset.x;
			float u1 = gridUnitPerc.x * i;
			float u2 = u1 + gridUnitPerc.x;

			planes.back()->setPosition(posX, posY, 0.0f);

			planes.back()->mapTexCoords(u1, v1, u2, v2);
						
		}

	}


	

	
}

//--------------------------------------------------------------
void ofApp::update(){

 }

//--------------------------------------------------------------
void ofApp::draw(){
	int counter = 0;
	ofTranslate(glm::vec2(20.0f, 20.0f));

	texture.bind();
	material.begin();

	for (ofPlanePrimitive* plane : planes) {
		if (counter % 2) {
			plane->rotate(1, glm::vec3(0.0f, 1.0f, 0.0f));
		}
		else {
			plane->rotate(1, glm::vec3(1.0f, 0.0f, 0.0f));
		}
		plane->draw();
		counter++;
	}
	material.end();
	texture.unbind();


}

//--------------------------------------------------------------
void ofApp::exit() {
}

//--------------------------------------------------------------
void ofApp::processInput() {

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mousePressed(int x, int y, int button) {
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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY) {

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
