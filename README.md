# RTMP-Experiments
# ffmpeg_rtmp.cpp

This C++ code is designed to stream a video file to an RTMP (Real-Time Messaging Protocol) server using the FFmpeg multimedia framework. 
Here's a breakdown of the code: 
1. The necessary headers `iostream` and `string` are included.
2. In the `main` function: a. `inputFile` is a string variable that holds the path to the input video file (e.g., "path/to/input/video.mp4"). b. `rtmpUrl` is a string variable that holds the RTMP URL where the video stream will be sent (e.g., "rtmp://example.com/live/stream").
3. The `ffmpegCommand` string is constructed by concatenating the following: a. `"ffmpeg -re -i "`: This is the command to run FFmpeg with the `-re` option (to read input at native frame rate) and `-i` option (to specify the input file). b. `inputFile`: The path to the input video file. c. `" -c copy -f flv "`: These options instruct FFmpeg to copy the input codec stream (`-c copy`) and output the stream in FLV format (`-f flv`). d. `rtmpUrl`: The RTMP URL where the video stream will be sent.
4. The constructed `ffmpegCommand` is printed to the console using `std::cout`.
5. The `system` function is called with `ffmpegCommand.c_str()` as an argument, which executes the FFmpeg command in the operating system's command prompt or terminal.
6. The program exits with a return code of 0 (successful execution). In summary, this code takes an input video file and an RTMP URL as input, constructs an FFmpeg command to stream the video file to the specified RTMP URL, and then executes that command using the `system` function.
7. The output of the FFmpeg command (if any) will be displayed in the command prompt or terminal where the program is running.
