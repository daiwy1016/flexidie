// Date: 15-03-2016 11:37:39

#include "AutomateAESKeyPCF.h"

char PCF0[]		= { -24,-40,-101,-122,63,49,-65,-90,-115,121,-52,-33,22,3,-88,78,36,-119,40,-16,-82,-84,-71,-107,75,-112,109,11,102,49,-99,-107,-36,64,124,89,-48,102,48,-48,-120,13,-123,92,-69,-60,-99,-98,22,-77,2,106,-89,13,44,23,-115,40,-25,-20,-100,8,81,79 };
char PCF1[]		= { -32,33,-46,125,97,-8,-94,-73,-121,7,-102,93,90,63,119,30,114,-26,-89,-12,-40,69,-32,111,96,-37,50,49,-98,111,66,-85,-39,65,-94,74,52,-23,-118,113,9,-87,89,-84,91,35,95,-18,41,28,-38,118,-108,86,26,-72,21,66,59,79,-116,37,-34,69 };
char PCF2[]		= { -20,-29,8,-22,38,80,-118,11,54,-41,-8,61,-15,-76,39,-14,108,109,82,-73,49,60,113,66,-23,81,-86,122,118,99,2,79,-33,-6,-63,36,77,93,-60,-113,122,107,-16,108,116,-79,112,-110,-18,-49,-85,40,-99,80,0,80,-32,1,38,119,21,15,55,9 };
char PCF3[]		= { -38,-76,-113,-40,-34,-92,-64,118,109,-107,3,18,-116,90,-42,62,-75,-126,107,16,-28,103,-40,26,98,-49,-18,22,7,-124,-125,91,102,-97,-98,103,126,125,-125,-108,-47,-60,101,-69,57,109,-113,117,-88,-3,-26,-29,115,-72,99,-106,126,25,-12,47,-122,117,0,50 };
char PCF4[]		= { 18,-33,-12,40,64,-23,-23,115,-71,55,-76,101,92,58,-89,41,-88,31,50,62,-127,-25,-56,13,-125,-111,88,73,7,107,-67,94,123,-52,-85,95,-21,5,-101,-119,-18,48,-124,71,-91,-63,-100,38,-56,-97,13,72,-99,-112,-32,44,-32,116,-27,-82,75,-104,-30,-128 };
char PCF5[]		= { 18,25,-7,-71,-9,36,-87,-57,20,-59,35,123,68,-23,-75,-63,46,-104,-121,-29,-108,37,-98,-87,0,-104,40,-58,1,24,13,-56,-63,49,66,-122,35,45,-44,18,41,-47,-108,-78,-53,-82,90,41,-101,13,-58,-77,-19,79,-51,61,108,-17,-83,25,-31,31,45,-48 };
char PCF6[]		= { 28,-91,-105,-46,-71,-111,-38,36,-71,-31,-32,72,21,12,100,-109,114,-16,41,42,-127,5,84,74,-106,67,-34,-113,-16,-5,-101,-45,25,-59,-21,-116,55,42,72,-122,47,-35,-58,-99,114,21,84,26,-55,28,122,3,9,115,-4,99,121,52,-72,107,-89,-28,-61,-43 };
char PCF7[]		= { 74,-99,-18,-27,-20,-88,55,8,-108,-81,-35,-127,-102,82,56,28,-96,-124,-75,30,110,101,46,94,87,-51,-76,-94,94,32,46,-12,-19,0,83,74,-26,-109,7,-90,-37,-5,105,39,77,-2,0,58,-105,123,18,-106,-103,-33,-107,-108,112,-126,9,114,-55,-56,-12,-124 };
char PCF8[]		= { 78,6,19,-104,-80,24,-2,57,63,74,119,-46,-9,112,97,-54,-122,73,45,-117,-90,105,-125,116,-4,-55,-41,57,-58,14,4,95,14,-91,20,125,86,-24,-40,87,11,89,-105,-78,24,45,-96,117,-2,-70,69,105,15,-114,-43,-86,86,-86,-128,18,-60,-79,-116,118 };
char PCF9[]		= { 23,-54,10,83,69,98,80,-88,37,-87,118,96,4,51,-96,77,105,71,74,61,-31,61,87,5,-120,4,93,-30,54,84,-74,61,102,34,-61,17,77,-67,15,-30,-19,21,57,-10,-16,19,-27,-65,-104,-69,100,110,-51,56,21,-103,15,14,78,30,-106,88,-39,-117 };
char PCF10[]		= { 61,-109,-88,-84,-56,21,47,-37,-39,41,23,-113,-14,-88,-59,6,54,-4,-121,-18,67,124,-75,-87,110,-102,124,-110,46,35,48,74,69,24,91,63,-54,-90,-8,-46,12,98,2,-125,-66,10,85,-67,13,-95,31,-117,-14,23,-27,65,41,28,43,27,5,52,0,-125 };
char PCF11[]		= { 40,21,62,6,-11,-102,-19,-76,95,-123,59,-28,-31,-73,106,-59,56,35,-84,22,-87,46,-119,-127,108,105,110,-113,-103,-57,60,-102,-35,-99,15,116,27,38,-93,64,-45,58,-7,87,29,88,88,7,119,31,51,-97,-77,-70,-68,50,53,-85,-2,-109,-21,74,-44,93 };
char PCF12[]		= { 7,-79,56,-117,111,41,-30,-69,76,46,-127,-114,-112,110,-62,-64,-26,83,16,-72,-19,79,43,-123,114,-32,-94,99,94,-81,1,-9,120,51,-38,-56,-65,-93,-122,59,-67,-32,24,-99,41,-118,-18,42,19,94,-30,83,-63,-44,10,23,-75,-16,73,26,-117,31,88,122 };
char PCF13[]		= { 15,-128,-5,-36,80,-109,-11,-47,126,-89,33,30,60,65,-67,77,-92,-78,-76,70,42,55,25,13,-122,-103,-120,-35,94,57,28,13,40,2,-54,-103,37,-111,-108,67,-104,-9,64,42,70,113,22,113,-108,12,-94,-119,7,77,112,-53,75,30,-66,-55,46,-27,-29,-52 };
char PCF14[]		= { 69,-68,-37,-83,-43,117,23,-55,-38,-107,-34,110,-128,-63,92,101,-73,-73,54,-79,104,61,-126,-2,-37,-112,117,108,16,13,-13,-74,-102,7,-79,-108,-86,84,39,-18,30,87,0,-38,109,13,-118,82,-100,-36,-22,-59,-22,46,117,99,-29,-42,-82,-93,-32,35,-105,-127 };
char PCF15[]		= { -92,86,-86,-118,-6,12,-54,99,-108,28,-81,-73,-13,64,89,-27,44,-114,124,-103,21,122,-88,16,74,65,-101,123,84,14,18,54,80,-117,-5,9,-95,-3,-124,95,75,-39,-114,-98,-7,127,110,-6,-64,-99,5,-29,-60,60,111,-55,-82,-8,-16,-65,41,-25,-64,125 };
char pcf0() {return (PCF0[1] - (105));}
char pcf1() {return (PCF1[33] - (148));}
char pcf2() {return (PCF2[24] - (209));}
char pcf3() {return (PCF3[30] - (198));}
char pcf4() {return (PCF4[27] - (72));}
char pcf5() {return (PCF5[53] - (167));}
char pcf6() {return (PCF6[37] - (162));}
char pcf7() {return (PCF7[3] - (191));}
char pcf8() {return (PCF8[52] - (145));}
char pcf9() {return (PCF9[30] - (225));}
char pcf10() {return (PCF10[36] - (158));}
char pcf11() {return (PCF11[54] - (22));}
char pcf12() {return (PCF12[24] - (19));}
char pcf13() {return (PCF13[11] - (131));}
char pcf14() {return (PCF14[25] - (37));}
char pcf15() {return (PCF15[38] - (142));}

//char keys[] = { 111,-83,24,-67,1,-88,-120,38,126,-43,44,-90,95,-101,107,-10 };
//char makeupKeys[] = { -40,65,-23,-125,73,79,42,-27,15,-74,-54,-68,114,30,-112,-124 };
//char calculateKeyString[] = { 111,-83,24,-67,1,-88,-120,38,126,-43,44,-90,95,-101,107,-10 };