#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(void)
{
    // initialize videocapture
    VideoCapture cap;
    // classifer - an algorithm that automatically categorizes data into one or more set of classes
    // cascade classifier - combination of several classifiers in which information obtained as output from one classifier
    // is used as additional information for the next classifier in the cascade
    CascadeClassifier face_cascade;
    // haarcascade_frontalface_default.xml is a classifier designed specifically for detecting frontal faces in visual input
    face_cascade.load("haarcascade_frontalface_default.xml");

    if (face_cascade.empty())
    {
        cerr << "\n[ERROR] Cascade classifier has not been loaded.";
    }

    // Mat - n-dimensional array used to used image data
    Mat frame, grayFrame;

    int deviceID = 0;    // open default camera
    int apiID = CAP_ANY; // 0 = autodetect default API

    // sets up the camera for video capturing
    cap.open(deviceID, apiID);

    if (!cap.isOpened())
    {
        cerr << "\n[ERROR] An error occurred when trying to open the camera.";

        return -1;
    }

    while (true)
    {
        // wait for a new frame from camera and store it into 'frame'
        cap.read(frame);

        // a vector consisting of 2D rectangles
        vector<Rect> faces;
        // converts the image from BGR to grayscale to improve computational efficiency
        cvtColor(frame, grayFrame, COLOR_BGR2GRAY);
        // identifies faces of different sizes in the input image
        face_cascade.detectMultiScale(grayFrame, faces, 1.3, 5);

        for (int i = 0; i < faces.size(); i++)
        {
            // Scalar(255, 0, 0) corresponds to the color blue - format BGR
            rectangle(frame, faces[i].tl(), faces[i].br(), Scalar(255, 0, 0), 2);
            // creates a bounding box for the textbox
            rectangle(frame, Point(0, 0), Point(300, 60), Scalar(255, 0, 0), FILLED);
            // text for the above textbox
            putText(frame, to_string(faces.size()) + (faces.size() == 1 ? " face detected." : " faces detected."), Point(10, 40), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255));
        }

        // check if we suceeded
        if (frame.empty())
        {
            cerr << "\n[ERROR] Blank frame grabbed.";
            break;
        }

        // show live and wait for a key with timeout long enough to show images
        imshow("Face Detection Project", frame);

        // waits for 5ms and breaks out of the loop when any key is pressed
        if (waitKey(5) >= 0)
            break;
    }

    // close the camera
    cap.release();
    // close all windows that are opened
    destroyAllWindows();

    return 0;
}