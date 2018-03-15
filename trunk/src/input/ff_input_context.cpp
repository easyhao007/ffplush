/*
 * 解析输入文件的参数，如知道输入的格式为mpegts,则解析的时候就直接解析了，不用再读取文件进行分析了
 */

include <ff_input_context.h>

ff_input_context::ff_input_context()
{
	m_in_file = "";
	m_file_iformat = NULL;
	m_format_opts = NULL;
	m_ifmt_ctx = NULL;
}

ff_input_context::~ff_input_context()
{

}

int ff_input_context::init(InputContext in_ctx , string in_file)
{
	int ret = E_SUCCESS;
	m_in_ctx.in_format = format;
	return ret;
}
