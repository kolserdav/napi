{
  "targets": [
    { 
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "cflags": [ "-std=c++11" ],
      "include_dirs" : [
        "/usr/include/opencv4",
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "libraries": [ 
        "/usr/lib/x86_64-linux-gnu/libopencv_core.so",
        "/usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so",
        "/usr/lib/x86_64-linux-gnu/libopencv_highgui.so"
      ],
      "target_name": "hello",
      "sources": [ "src/hello.cpp" ],
      'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }
  ]
}