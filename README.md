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

# opencv_rtmpstream.cpp
This C++ code is a program that captures video from a camera device and streams it over the Real-Time Messaging Protocol (RTMP) using the FFmpeg library. 
Here's a breakdown of the code: 
1. The program includes necessary headers, including OpenCV for camera capture and FFmpeg for video encoding and streaming.
2. The `get_device` function opens a video capture device with the specified camera ID, width, and height.
3. The `initialize_avformat_context` function allocates an output format context for the video stream.
4. The `initialize_io_context` function opens an input/output context for the output video stream.
5. The `set_codec_params` function sets the codec parameters for the video stream, including the codec ID (H.264), resolution, frame rate, bit rate, and pixel format.
6. The `initialize_codec_stream` function initializes the codec stream with the specified codec parameters and opens the video encoder.
7. The `initialize_sample_scaler` function initializes a sample scaler for converting the input frame format to the desired pixel format.
8. The `allocate_frame_buffer` function allocates a frame buffer for storing video frames.
9. The `write_frame` function encodes and writes a video frame to the output stream.
10. The `stream_video` function is the main function that handles the video streaming process. It performs the following steps: - Initializes the FFmpeg libraries and network. - Opens the video capture device. - Allocates necessary FFmpeg structures (format context, codec context, stream, etc.). - Configures the codec parameters and initializes the codec stream. - Writes the header to the output stream. - Enters a loop to capture frames from the camera, convert them to the desired format, encode them, and write them to the output stream. - Writes the trailer to the output stream. - Cleans up and frees allocated resources.
11. The `main` function sets up the desired configuration (camera ID, resolution, frame rate, bit rate, codec profile, output server), and calls the `stream_video` function.
12. The program uses OpenCV to capture frames from the camera and FFmpeg to encode the frames into an H.264 video stream, which is then streamed over RTMP to the specified output server.
