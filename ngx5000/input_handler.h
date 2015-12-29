#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include"com.h"
#include"commands.h"

namespace CMD
{
	class Input_handler
	{
	public:
		Input_handler(void);
		~Input_handler(void);

		Com read(void);
	private:

	};
}

#endif