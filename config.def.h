/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0; /* -b  option; if 0, dmenu appears at bottom     */
static const int vertpad = 10; /* vertical padding of bar */
static const int sidepad = 10; /* horizontal padding of bar */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"monospace:size=13"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
#include "/home/vidasara/.cache/wal/colors-wal-dmenu.h"
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;
