/*
 * 解析输入文件的参数，如知道输入的格式为mpegts,则解析的时候就直接解析了，不用再读取文件进行分析了
 *
 */

#ifndef _FF_INPUT_CONTEXT_
#define _FF_INPUT_CONTEXT_

#include <ff_core.h>

class ff_input_context
{
public:
	ff_input_context();
	virtual ~ff_input_context();

public:
	int init();
private:
	// 输入文件的名称
	string m_in_file;
	InputContext m_in_ctx;

private:
	//设置解复用的时候的格式，如该参数为NULL则自动解析，否则按照指定的格式进行解析
	AVInputFormat	*m_file_iformat;
	//解引用的私有参数
	AVDictionary	*m_format_opts;
	//解复用的上下文格式
	AVFormatContext *m_ifmt_ctx;
};


#endif
