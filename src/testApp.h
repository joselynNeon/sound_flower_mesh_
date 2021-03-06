#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
    
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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    //-----------------sound-----------------------
    void audioIn(float * input, int bufferSize, int nChannels);
    
    vector <float> left;
    vector <float> right;
    vector <float> volHistory;
    
    int bufferCounter;
    int drawCounter;
    
    float smoothedVol;
    float scaledVol;
    
    ofSoundStream soundStream;
    //-----------------sound-----------------------
    
    //-------------------mesh----------------------------
    //create image objects
    ofImage imageOne;
    
    //create a mesh to pass to object
    ofMesh meshPassOne;
    ofMesh meshOne;
    
    //add a camera
    ofEasyCam easyCam;
    
    //variables to allow to toggle oribal on & off
    ofMesh meshCopy;
    bool orbiting;
    float startOrbitTime;
    
    //variables to store the polar coordinates of each vertex
    vector<float> distances;
    vector<float> angles;
    ofVec3f meshCentroid;
    
    ofMesh pixelManipulate(ofImage imageA, ofMesh meshA, float intensityThreshold, float sketchDepth);
    ofPoint pointOnLine(ofPoint p1, ofPoint p2, float t);
    //-------------------mesh----------------------------
    
    //__________video____
    ofVideoPlayer cuba;
    
    //__________adding Serial________
    
    bool		bSendSerialMessage;			// a flag for sending serial
    char		bytesRead[3];				// data from serial, we will be trying to read 3
    char		bytesReadString[4];			// a string needs a null terminator, so we need 3 + 1 bytes
    int			nBytesRead;					// how much did we read?
    int			nTimesRead;					// how many times did we read?
    float		readTime;					// when did we last read?
    
    ofSerial	serial;
    
    
};