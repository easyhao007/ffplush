/*
 * 全局头文件包含
 */
#ifndef _FF_CORE_H
#define _FF_CORE_H

//ffmpeg 头文件
extern "C"{
#include <libavformat/avformat.h>
}

//系统头文件
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

/*
 *******************************************************************************************************************
 * 宏定义
 * 解析输入文件的时候使用，如我们知道解析的文件/视频流的信息的时候，提供给ffmpeg
 */

typedef struct InputContext
{
	// 输入文件的格式
	string 	in_format;
	// 输入文件中音频的采样率
	int 	nb_audio_sample_rate;
	// 输入文件中音频的通道数
	int 	nb_audio_channels;
	// 输入文件中视频的帧率
	int 	nb_frame_rates;
	// 输入文件中视频的大小
	int 	nb_frame_sizes;

	// 视频流的编码名称
	string 	video_codec_name;
	// 音频流的编码名称
	string 	audio_codec_name;
	// 字幕的编码名称
	string 	subtitle_codec_name;
	// 数据的编码名称
	string 	data_codec_name;

};


// 错误定义
#define E_SUCCESS			0



/*******************************************************************************************************************/
#endif
