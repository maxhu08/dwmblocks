// modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {

	/* icon       command       update interval       update signal */
	// {"Mem:"  , "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	        30,		    0 },
	{  " 󰸗 "    , "date '+%I:%M:%S %p '"                                    ,					1 ,		  0 },
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
