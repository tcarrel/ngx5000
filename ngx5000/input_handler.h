#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include"com.h"
#include"commands.h"

using namespace CMD;

namespace CMD
{
	class Input_handler
	{
	public:
		Input_handler(void);
		~Input_handler(void);

		bool is_empty(void)
		{ return length == 0; }

		bool read(void);
	private:
		int length;

		Commands* queue;
	};
}

#endif