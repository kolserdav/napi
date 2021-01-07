{
  "targets": [
    { 
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "cflags": [ "-std=c++11" ],
      "include_dirs" : [
        "/usr/local/include/opencv4",
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "libraries": [
        "/usr/local/lib/libopencv_core.so",
        "/usr/local/lib/libopencv_imgcodecs.so",
        "/usr/local/lib/libopencv_highgui.so"
      ],
      "target_name": "hello",
      "sources": [ 
	"src/main.cpp", 
	"src/modules/face.cpp" 
      ],
      'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }
  ]
}
