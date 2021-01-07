#include "./defs/face.h"
#include <napi.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;

Napi::String SayHi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string image_path = samples::findFile("starry_night.jpg");
  Mat img = imread(image_path, IMREAD_COLOR);
  if(img.empty())
  {
      std::cout << "Could not read the image: " << image_path << std::endl;
  }
  imwrite("starry_night.png", img);
  return Napi::String::New(env, "Hi!");
}

Napi::String SayWorld(const Napi::CallbackInfo& info) {
	Napi::Env env = info.Env();
	return Napi::String::New(env, get_world());
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
    exports.Set(Napi::String::New(env, "sayHi"), Napi::Function::New(env, SayHi));
    exports.Set(Napi::String::New(env, "sayWorld"), Napi::Function::New(env, SayWorld));
    return exports;
};

NODE_API_MODULE(hello, init);
