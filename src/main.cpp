#include <iostream>
#include <napi.h>
using namespace std;

Napi::String SayHi(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  double arg0 = info[0].As<Napi::Number>().DoubleValue();
  cout << arg0 << endl;
  return Napi::String::New(env, "Hi2");
}

Napi::Object init(Napi::Env env, Napi::Object exports) {
  exports.Set(Napi::String::New(env, "sayHi"), Napi::Function::New(env, SayHi));
  return exports;
};

NODE_API_MODULE(hello, init);
