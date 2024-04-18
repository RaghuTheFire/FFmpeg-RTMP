#include <iostream>
#include <string>

int main(int argc, char* argv[]) 
{
    std::string inputFile = "path/to/input/video.mp4";
    std::string rtmpUrl = "rtmp://example.com/live/stream";

    std::string ffmpegCommand = "ffmpeg -re -i " + inputFile + " -c copy -f flv " + rtmpUrl;

    std::cout << "Executing command: " << ffmpegCommand << std::endl;
    system(ffmpegCommand.c_str());

    return 0;
}
