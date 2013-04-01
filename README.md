maxkit
======

## instructions

*	put maxkit somewhere in your max path (ie /Applications/Max6/Cycling '74/)

*	restart Max

## max patches for easier hardware connectivity

### arduino

**cereal.maxpat** is an abstraction that takes serial input (with settable port, baud, and update frequency) parses the packet into a list. Serial messages can be an arbitrarily long list of numbers with entries split by spaces.

**interface.maxpat** and **interface.ino** give an example of using cereal.maxpat and automap.maxpat together to map arbitrary-resistance sensors plugged into an arduino into 6 1-127 integer values in Max.

### automap

automap.maxpat is an abstraction that maps an arbitrary range of values to a set output range. When banged, it sets the input range based on the range of input received since the last bang.

automap requires list-accum from [cnmat](http://cnmat.berkeley.edu/downloads)

### nanokontrol

![screenshot](http://cl.ly/LDy0/Screen%20Shot%202012-11-28%20at%207.40.56%20PM.png)

nanokontrol v1 patch for max/msp

### wiimote

![screenshot](http://f.cl.ly/items/0X2J3x2F0c032T46230b/Screen%20Shot%202012-11-28%20at%207.37.47%20PM.png)

wiimote patch for max/msp