
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "OpenCV Hello the world..." << std::endl;
    Mat image;
    image = imread("dog.jpg",1);
    imshow("START PROJECT WITH OPENCV", image);
    waitKey(0);
    return 0;
}
