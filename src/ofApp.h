#pragma once
#include "ofMain.h"
#include <map>
#include <vector>
#include <string>


class ofApp : public ofBaseApp{

	

	public:
		//Some OpenFrameworks must-have functions
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
		void updateBalanceDisplay();

		
	private:
		

		ofTrueTypeFont TitleFont;
		ofTrueTypeFont BalanceFont;

		ofSoundPlayer CasinoBackgroundMusic;


		
		
};