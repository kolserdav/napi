#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include "../defs/face.h"
using namespace cv;
const char* get_world() {
  std::string image_path = samples::findFile("starry_night.jpg");
	std::cout << image_path << std::endl;
  Mat img = imread(image_path, IMREAD_COLOR);
	return "Hello from face";
}
