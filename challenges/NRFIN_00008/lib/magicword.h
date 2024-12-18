/*
 * Copyright (C) Narf Industries <info@narfindustries.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef MAGICWORD_H
#define MAGICWORD_H

#define MAGICWORD                                                              \
  "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ" \
  "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ\n"   \
  "QWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWQQWQWWWWQWWWWWWWWWWWW" \
  "QQQQWQWQWWQWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"   \
  "QWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWWWQWQQWQWWWW#W#"                \
  "UUUAXVXS1Y1YYXXUU#$"                                                        \
  "WmWWWWWQWQWWWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQ\n"       \
  "QWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWQWQWWWWWW#XYI*|||+++++=:=-+-++" \
  "++llI1SXZ$WWQWQQWQWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"   \
  "QWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWWWWW##YI|==::-:::..... "      \
  ".....::-:==++|I1X#"                                                         \
  "BWWWWWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQWQ\n"                \
  "QWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWQWWWWWQWQWWWWQWW#AYI|=:-:...... "            \
  "...............:...:::|{"                                                   \
  "1XWBQQWWWWQWWWWWWWWQWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n"                \
  "QWQWQWQWQWQWQWQWWWWWWWWWWWWWQWQWWWQQWQWWWQQWW#X1l==:......................" \
  "......... ...=|1X#WWWWWWQWQQWWQWWWWWWWWWWWWWWWQWQWQWQWQWQWQWQWQWQWQWQW\n"   \
  "QWWWWWWWWWWWWWWQWWWWQWWQWWQWQWWWWWQWQWQWQWW#1i++::-......................." \
  ".... ........:-=|1XWWWQWQWWWWQWWQWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWQ\n"   \
  "QWQWQWQWQWQWQWQWWWWWWWQWWWWWWQQQQWQWWQWW##1I+=::.:........................" \
  "............. ..-={3UWWWWQWWQWWQWWWWWQWWWWQWWWQWQWQWQWQWQWQWQWQWQWQWQW\n"   \
  "QWWWWWWWWQWWWWWWWQWQWQWWQWQWQWWWWQWWWW#X1|+=;:................ .. "         \
  "..........................:+{3X#"                                           \
  "WWWWWWWWWQWQWWWWWWWWWWWWWWWWWQWWWWWQWWWWWQWWWW\n"                           \
  "QWQWQWQWQWWQWQWQWWWWQWWQWWQWQWQWQWWWWX1|==:::-.:................ .. "       \
  ".........................::=|"                                              \
  "IXUWWWWQWQWWWQWWWWQWWWWQWQWQWQWWQWQWWWQWQWWWQWQ\n"                          \
  "QWWWWWWWWWQWWWWWQWQWWQWQWQWWQWWWWWW#1i=:::::......... ........ ... "        \
  ".............................::|"                                           \
  "IXWWWWWWWQWWWWWWWWWWWWWWQWWWWQWWWWQWWWWQWQWWW\n"                            \
  "QWQWQWQWQWWWQWQWWWWWQWWWQWWQWWWWW#Xl+=:.-::..................... ..... "    \
  "........ .. "                                                               \
  "................=|3XWWWQWWWQWWQWWWWWWQWQWWWQWWWQWQWWQWQWWWWQW\n"            \
  "QWWWWWWWWQWQWWWWQWQWWQWQWQWQWWQW#1i=;:.:............ ......... .... "       \
  "............. ....... .... "                                                \
  ".....:+vXWWQWQWQWQWWWWWWWWQWWQWWQWQWWWWQWWWWQWQWW\n"                        \
  "QWQWQWQWQWWWWQWQWWWWQWWWWWWWWWWX1|=;::................. .... ......... . "  \
  ". . . ......................:=IXWWQWWWWQWWWWWQWQWWWWWQWWWWQWWWWQWQWWWWQ\n"  \
  "QWWWWWWWWWQWQWWWWQWQWWQWQWQWW#Xl+=::;:................................... " \
  "...... .....................-:I$WWWQQQWQWWWQWWWWWQWQWWWQWWWQWQWWWWQWWW\n"   \
  "QWQWQWQWQWWWWWQWWWWWWWWQWWWWWX>:=:::-............... ..... .......... . "   \
  "... .. ... .....................=I#WWWWWWWWQWWWWWQWWWWWQWWWQWWWWWQWWWWQW\n" \
  "QWWWWWWWWQWQWQWWWQWWQWQWWWQm2|=:::.:...... .............................. " \
  "....... ......................:<3WWWQQWWWQWWWWQWWQWQWWWQWWWQWQWWWQWQWW\n"   \
  "QWQWQWQWQWWWWWWQWWWWWWQWWWWXl=:....... ....... ............... .. .. . . "  \
  "... . . .......... .............:<3#WWWQWWWWQWQWWWWWWWQWWWQWWWWQWQWWWWQ\n"  \
  "QWWWWWWWWWQWQWQWWWWWWQWWW#Zl|;-.............. "                             \
  "............................. ........... "                                 \
  ".................:=|3$WWWQWWQWWWWQWQWQWWQWQWWQWQWWWWQWQW\n"                 \
  "QWQWQWQWQWWWWWWWWWWWQWWW#Zl==:............ ................. ........ .. "  \
  ". ... .. ... ...................::=<3WWWQWWWWQWQWWWWWQWWWWWQWWWWQWQWWWW\n"  \
  "QWWWWWWWWQWQWQWQWQWQWWQW#1>==-........... ...........:.:.......... "        \
  ".......... .. "                                                             \
  "..........................::|3WWWWWQWWWWWWQWQWWQWQWWWQWQWWWWQWQ\n"          \
  "QWQWQWQWQWWWWWWWQWQWWWW#e||=:.......... ..........::::::.-.............. "  \
  ". ..... .. .....................-..:=<XWWWQWWQWWQWWWWWWWWWWQWWWWWQWWWWW\n"  \
  "QWWWWWWWWWQWQWQWQWWWQWBXi|==-........ ..... "                               \
  "...:::;==;=;::::::.................... "                                    \
  "..................-.....-.-=lXWWWWWWWQWWWQWQWQWQWWWQWQWWWQWQW\n"            \
  "QWQWQWQWQWWWWWWQWWQWQW#e|;;:-... .. "                                       \
  ".........::==++++++++=====;:::::........... "                               \
  "........................-:..-.-:I#BWWQWQWWWWWWWWWWWQWQWWWWQWWWWQ\n"         \
  "QWWWWWWWWQWQWQWWWQWWWW#i=:::...... "                                        \
  ".........;=++|iiiiiii||=++++|====;;::..-.................... "              \
  ".....-.......-.:<3#WWWWWWQWQWQWQWQWWWWWQWQWWQWQW\n"                         \
  "QWQWQWQWQWWWWWQWWWWWW#X>:::.... "                                           \
  "..........:;=||llIIvIvIvlliiiii|||+=+==;:::.:..-.-........................" \
  "...-..:|XWWWWWQWWQWWWWWWQWQWQWWWWQWWWW\n"                                   \
  "QWWWWWWWWWQWQWWWQWWQW#l=:.-...... "                                         \
  ".......;=+iivvvIvvvvvvvvlllllii||+|+=+==;::-:-:--:..-....................." \
  "..-.:=<XWWWWQWQWWWQWQWWWWWWWQWQWWWQW\n"                                     \
  "QWQWQWQWQWWWWWQWWWWW#e|=...-.... .. "                                       \
  "...-=+|iIvnvvvvvvvIvIvvIllvlii||++|=++==:::::-:.::-::--.-................." \
  ".-.:<3mWWWWQWWQWWWWQWQWQWQWWWWQWWQ\n"                                       \
  "QWWWWWWWWQWQWQWQWWQWXs+;.:..... .. "                                        \
  "...-:+iInnnnnnnnnvvvvvvIvlIllii||+|++|++==;;::::::::::::::::.:.:.........." \
  "..-.::{#WWQWWWWWWQWQWWWWWWWWQWWWWQW\n"                                      \
  "QWQWQWQWQWWWQWWQWWWm2|=;-..-..... "                                         \
  "...-:=|Innoo2onnnnvvvvvvIIlIlliii||+|++|++===;=;=;;:;;=;;;;;:::::-:.:....." \
  ".....:-=vWWWWWQQWQWWWWQWQWQWQWWQWQWW\n"                                     \
  "QWWWWWWWWWQWWQWQWWW#1+=:-.:... "                                            \
  "......:=|inno222o2oonnnvvvvvIIllliiii||+||+|++====;================;=::-.:" \
  "........-.:<XWWWWWWWWWQWQWWWWWWWWQWWWWQ\n"                                  \
  "QWQWQWQWQWWWQWWQWWWei=::............:=|innoSo2222222onnnvvvvllliiii|i|+|=|" \
  "+|++========+=+=++====++=+==::..........-:=vWWWWQWQWWWWWWQWQWQWQWWWQWW\n"   \
  "QWWWWWWWWQWQWQWWWWZl=::............:=|lvo22222222222oonnnvvvllliiiii||+||+" \
  "|+|+|++==++|=+++++|+||++||=+==::.......--.:<3mWWQWWWQWWWWWWWWWWWWWWWWW\n"   \
  "QWQWQWQWQWWWQWWQWW2|::............-;|ivnoS22222222222ooonvvvIlliiii|i||++|" \
  "+|+|+++|=+++++++++++|++|+++|++;:........:.::v#WQQWQWWWQWQWWWWWWWWQWWQW\n"   \
  "QWWWWWWWWWQWWWQWW#1=::............:=iInn22SSSS22222222oonnvvvlliii|ii|=|+|" \
  "+|+++|++++++++==++|+|+|+|+|+++=;-.-....--:.;{#WQWQWQQQWWWWQWQWQWQWWQWW\n"   \
  "QWQWQWQWQWWWQWQWWXl=:............:=||nnnoS2S2SSSo222222oonvvvIlliii|||+|+|" \
  "+|=|++++=++++++++++|+|+|+||||||=::...-.-.--:<#WWQWQWQWWQQWQWQWQWQWQWQQ\n"   \
  "QWWWWWWWWQWQWWWWBo|=:-...........:=|Inno2o2SS2So2222oooonnnvvIlii||||+|+|+" \
  "|+++++|=+++++++++|+|+|+|+|iiii|==:--..-.:.::<XmWWWQQWQQQWQQQWQQQWQQQWQ\n"   \
  "QWQWQWQWQWWWWQWQmS>=::....... "                                             \
  "...;+ivnoo222o22S22222ooonnvvvvlli||||++++|++++++++=++++++++++|++|+|+iii|"  \
  "i|==;:.:.---::.=3mQWWQWQQWQQWQWQQWQQWQWQQ\n"                                \
  "QWWWWWWWWWQWQWWWW2>;:::..... "                                              \
  "...:;|lvoo2222222S2222ooonnvnvvllii||+|=+++++++++++====+++=+|++++|+|+|i|"   \
  "ii||++;::.:.:.:-:=nmWWWQQQWQQWQQQWQQWQQWQQW\n"                              \
  "QWQWQWQWQWWWWWQWBX>;;=;:-.. "                                               \
  "....:=|lno22222oS2S2o22oonvvvvvIlli|||+|=+=======+=+=+=++++++++++|++|||i|"  \
  "i|ii|==:::---:-::;nmWQWQWQQWQQWQWQQWQWQQWQQ\n"                              \
  "QWWWWWWWWQWQWQWWWXi;====:......::=ivn222S2o22o2SoSo2oonnvvvlIlii||++====++" \
  "=+==========++|++++=+|++|ii|ii||++;:::::::::=nmWWQQQWQQWQQWQQWQQQWQQWQ\n"   \
  "QWQWQWQWQWWWWWWQW#%=====;-.....-;||voS2S2SS222So222S22nnvvvvIIlii|+|=+==+=" \
  "+==+=+==+==+++++|++|+|+||i|ii|i||==:::-:::.:<nBWQWWQQWQQWQQQWQQWQQWQQQ\n"   \
  "QWWWWWWWWWQWQWQWWZc=====:-.....:;+ivoSSSSS2S222oSo2S2ooonvvvvvlii||+++=+==" \
  "+=+=======+=+++|++++|+|+||ii|ii||==::::::-::iXWWWWQQWQQWQQWQWQWQQWQQWQ\n"   \
  "QWQWQWQWQWWWWWWWWmo|+===;......:=+inoSSSSSSSS222o222222oonnnvvlllii||+++=+" \
  "=+===+=++=+=++=++|+|+|||+|||ii|i|==;::-::::=nQWWWWQWQQWQQWQQQQQWQWQWQQ\n"   \
  "QWWWWWWWWQWQWQWQWWmi|===;:.:..-:;|vnSXXSXXSSSS22S222o2222onnvvvvliii|+|+++" \
  "+===++++++++++++|+||+||||++|iii|||=;:::::::iXWWWWWWQWQWQWQQWWQWQQQQQWQ\n"   \
  "QWQWQWQWQWWWWWWQWQmo|====:.....:=|v2XXXXXXXXSSS22Soooo2oooonnvvvIlii||+|++" \
  "+===+=+=+=+=+=++++|+|||||+||ii|ii+=;::::-.:vWWWWWQWQWQQQQWQQQWQQWQWQWQ\n"   \
  "QWWWWWWWWWQWQWQWWQWS>==+=:-.-.-:+ioXXZZZXXXXXS2S2ooononnooonnvvvviiii|+|+|" \
  "=====+========+===+|++++|+|||iiii||;;:.:-:<dmWWWWQWQWQWQWQQWQQWQQWQQQQ\n"   \
  "QWQWQWQWQWWWQWWWWQBXi=+==;..-.:;+vnXZ#ZZZZZXXSSS22onnnvnnvvvvvvlii|||++++=" \
  "=+==================;=====++||ii|i+=;:--:;imWWWWQWWQWQQQWQWQWQQWQQWQWQ\n"   \
  "QWWWWWWWWQWQWWQWWWW#1|==;:.....=+vnSXZZZXZXXXXS2S2onvvIllii|i||||=+=======" \
  "==;;;:;;;;==;=;:::::::::;===++|ii||+;:-::=oWWWWQWQWWQQWQQQQQQWQQWQQWQQ\n"   \
  "QWQWQWQWQWWWWQWWQWWmo|=::..-.::=ivXXXZZXXXXXXSSoSnnvIIli||=+=+=====;=:;;==" \
  "==;=:;:::::::::::.:..:.:::;==+|||ii+=::-:vmWWWWWWQWQWQQWQWQWQQWQQWQQQW\n"   \
  "QWWWWWWWWWQWWWWQWWWWmi+=:....-:=iXXZ##ZZXXSSS22nnvvllIIl||=++==+==;=;;:;;;" \
  "==|==:::::::::--.:.--.:-::;====+|i|+;:.:<qmWWWWQWWWQWQQQWQQWQWQQWQQWQQ\n"   \
  "QWQWQWQWQWWQWQWWWWQWmX%>:.::::=|v2X#m##ZZXXS2SovvIlIvvvli|++=+=+====;;;;;;" \
  "==|+=:::::.:.:.-..-..:..::;====+||||;::<oWWWWWQWQWQWQQWQQWQQWQQWQQWQWQ\n"   \
  "QWWWWWWWWQWWWWWQWWWWWmo>;::;=+||nXZmmmm#ZZXSXSovvvvvllii|+================" \
  "=====:::-.:.-...-......:::;;====+i||=;=nmmWQQQWQWQWWQWQQWQQWQQWQQWQQQQ\n"   \
  "QWQWQWQWQWWQWQWWWQWQWWmi|=+|+||loX#mmB#ZXXX222onnnvl|||=+==;:::::;==;==+|+" \
  "=;==;:::::.-..-........:.:;=;===||i|+=vdmWQQWWQWQWQWQQWQQWQQWQQWQQWQWQ\n"   \
  "QWWWWWWWWWQWWWWQWWWWWWmXs|ivs|lvoZ#mm#ZZXX2oonnnnnvi|+=+==::::::::::::==|+" \
  ";=++==::::.:.........-.::;=;==;==|||=ioWWWWQWQWQQWQWQWQQWQQWQQWQQWQQWQ\n"   \
  "QWQWQWQWQWWWQWQWWQWQWWW#XoooonnnSX#mm#UZXSoonnvvnvvl|||+=;::.:.-.:-.::;=+=" \
  "=+i|+=;:::-.........-.--::=======||||iXWBWQQWWQWQWQWQQWQQWQQWQQWQQWQQQ\n"   \
  "QWWWWWWWWQWQWWWWWWWWQWWW#ZXZXnvnXZ####ZXXoonnvvvvnnnIii|===:::::::::::;==;" \
  "=iIl|=;;;::.:.-.......:.::;;;====+||ivXWWQWQWQWQWWWQWQQWQQWQQWQWQWQQWQ\n"   \
  "QWQWQWQWQWWWWQWQWWWWWWQWW#ZXonvoXZ##m#ZZXSoonvvvvn2onvI||+==;::::::::;=;;=" \
  "|ivi|=;;;:::...........-::::;;==+|ii|vXWWWQWQQWWQWQWQQWQQWQQWQQQQQWQQW\n"   \
  "QWWWWWWWWWQWQWWWWWWWQWWWW#ZSnvvoXU##m##ZX2oonvvvvvnonvli++==;;;=:;::;=====" \
  "ivvi|====;::--.-.........:-::;==+|iiivXWWQWQWQWQWWWQWQQWQQWQQWQWWQQWQQ\n"   \
  "QWQWQWQWQWWWWWQWWWWWWQWWWm#ovvn2ZZ#mmmmZZS2onnvvvlIIll||=+======;;===+|++"  \
  "ivvIi|=====:::..........-:.:::;==|+iilvXWWWQQWQWWQWQWQQWQQWQQWQQWQQWQQW\n"  \
  "QWWWWWWWWQWQQWWQWWWQWQWQWBZSnvoXZ##mBBm#XX222oonvIi|||=======;=;====+|||"   \
  "llvIvi|======::.:..........:-::;===|iilvXWWWWWWQWWWWQQWQQWQQWQQWQQQWQQWQ\n" \
  "QWQWQWQWQWWWWQWQWWWWQWQWWW#SnnXZ###mmmm#ZXXXS2SoovI||+==;;;:=;;;;;==||"     \
  "iivvvIIi|======;::..........:..:-:;=+||"                                    \
  "lInXBWWWWQWWQWQWQQWQQWQQWQQWQWQQWQQ\n"                                      \
  "QWWWWWWWWWQWQWWQWWWQWWWQWW#XS2XZ##mmmW#UZZXXXS22ovvv||==;:;:;:;====||"      \
  "lvvvvvIIi|======;:..............-.:;==||llvX#"                              \
  "WWWWWWQWQWQQWQQWQQWQQWQQWQWQQW\n"                                           \
  "QWQWQWQWQWWWQWWQWWWWQWQWWWB#ZXZU#mmBmm##ZZZXXXS2oonIl|+==;;=;;====+|"       \
  "lvvvnvvvvi|=;;===;::.............:.::==||ilvX#"                             \
  "WWWWQWQQWQQWQQWQWQQWQWQWQQQQWQ\n"                                           \
  "QWWWWWWWWQWQWWQWQWQWQWWQWWWm#ZZ##mmmBmm#Z#XZZXXS2onvli|+==========||"       \
  "lvvvvvvvvIi=;;====:-..............-::;==|iivS#"                             \
  "WWWWQQQWQQWQQWQQQWQQWQQQWQWQWQ\n"                                           \
  "QWQWQWQWQWWWQWWQWWWQWWQWQWWm#U##mmBmBm##ZZZ#ZXXSS2onvii|+++========|"       \
  "lvvvvvnnvvi=======;:.:.............-::;=+iivX#"                             \
  "WWWWQWQWQWQQWQQWQWQWQQWQQQWQQQ\n"                                           \
  "QWWWWWWWWWQWQWQWQWQWWQWQWWWB#UZ#mmBmmm#ZZ#ZZZZXXSoonIli||++======;=|"       \
  "ivvvvnvnvvi+=======;:.............-.::;=+|ivX#"                             \
  "WWWQWQQQQQQWQQWQWQQQWQQWQWQQWQ\n"                                           \
  "QWQWQWQWQWWWQWWQWWWQWWWQWWWWm#mmmBmmBm#ZZZZ#ZZXXooovvli|+====;;;:=+"        \
  "ilvvvvnvnvvi+==;====;-...............--:;=|"                                \
  "ivSmWWWWQWQWWQWQQWQQQQWQQWQQWQQWQQ\n"                                       \
  "QWWWWWWWWQWQWWWWWQWWQWQWQWWWWmmmmmmmmm#ZZZZZZZXSoonvl|||===;;:;;;+|"        \
  "lIvvvvvvvvli+==;=;=;:-...............:-:;=|iIS#"                            \
  "WWWQWQQQQWQQWQQWQWQWQQWQQQWQQW\n"                                           \
  "QWQWQWQWQWWWWQWQWWWQWWWWWWQWWWmBmBmBm#ZZZZZZZXXoonvii|===;;;::;=="          \
  "ilvvvvlIvIvlii+==:;;::.-...............-::;=||vX#"                          \
  "WWWQWQWQWQQWQQWQQWQQWQQWQWQQWQ\n"                                           \
  "QWWWWWWWWWQWQWWWWQWWWWQWWQWWWWBmmmmmm##ZZXXXXX2onvli|==;;::::;;=|"          \
  "IvvvvIIIlIlii|==:;::-.-................-.:;=||"                             \
  "vXmWWWWQWQQWQWQQWQQWQQWQQWQQQWQQQ\n"                                        \
  "QWQWQWQWQWWWWWQWQWWQWQWWWWWQWWWmBmBmmZ#ZZXXXX22nvvli+=;;:.:::==|"           \
  "lIvvvlIlili|||+=::::...................-.::;=|"                             \
  "ivXWWWWQWWQWQQQQWQQWQQWQQWQQWQWQWQ\n"                                       \
  "QWWWWWWWWQWQWQWWWWQWWWWQWQWWWWWmmmB##ZZZXXS2oSonvIi|==;:::.:;="             \
  "ilvvvvvvllii||==;;:::..-..................-.:;=+"                           \
  "ivXWWWWWWQQQQWQWQQWQQWQQWQQWQQQQQQ\n"                                       \
  "QWQWQWQWQWWWWWWQWWWWQWQWWWWQWQWmmmm#ZZUXXX222oonvli|==::.-::=|ivvvvvvvlli|" \
  "|===;:::-.-..................:.::;=+inmWWWWQWWQWQWQQWQQWQQWQQWQQWQWWQW\n"   \
  "QWWWWWWWWWQWQWQWWQWQWWWWQWQWWWWmm###Z#ZXXSo2oonvvli+=;::-:.::==ilvnvvvIli|" \
  "++==;:;::-.-........ ... .....--:;=|io#WWWQWQQWQQQWQQWQQWQQWQQWQQQWQQQ\n"   \
  "QWQWQWQWQWWWWWWWQWWWWQWQWWWWQWWBm#ZZZZXXX22onnnvvi|+=;::.::::;;=="          \
  "vnvnvvIii|+==:;:::.-........ "                                              \
  ".........-:::;=|iXmWWQWQWWQQWQQWQQWQQWQQWQQWQWQQWQ\n"                       \
  "QWWWWWWWWQWQWQWQWWWQWWWWWQWWWWWW#ZZZZXXXSoonvvnvvli+=;::::;;=:::="          \
  "ivvvvvvlli|==:=:::..-.:......... "                                          \
  "......:::=+|vmWWQWQWWWQWQWQWQWQQWQQWQQWQQQWQQQ\n"                           \
  "QWQWQWQWQWWWWWWWWQWWWQWQWWWQWQWm##ZZXXXX2oonvvnnvIi|=;;:==||||===|li|"      \
  "lvvIli|+=:=;::.:..................:.:;=+"                                   \
  "inmBWWQWWQWWQWQWQQQWQQWQQWQQWQWQQWQ\n"                                      \
  "QWWWWWWWWWQWQWQWQWWQWWWWWQWWWWWW#ZZXXX2So2onvvvvvvl|====+iilIIi||+|==="     \
  "iiiii|==;;;::.-.:.-....... "                                                \
  "......-::;=|vXmWQWQWWWQQWQWQQWQQWQQWQQWQQWQQWQQ\n"                          \
  "QWQWQWQWQWWWWWWQWWWWWQWQWWWQWQWW##XXSSS22onnvvvvvvIi|+++|lvvvvIIli||=+||||" \
  "||+=;;:::-:.:.:.:............:-:=+<vXWQWWWQWQWWWWWQWQQWQQWQQWQQWQQWQQW\n"   \
  "QWWWWWWWWQWQWQWWWQWQWWWWQWQWQWWW#ZXXS22ooonnvvvvvvvi|||iivvvvvvvvvvli||i||" \
  "|+==:::::--::::-:.-.........:-::==<XmWWWWQWWWWWQQWQWQWQWQWQWQWWQWWQWWQ\n"   \
  "QWQWQWQWQWWWWWQWQWWWWQWQWWWWWQWW#ZXXS2222oonvvvvvvvlllliIvvnvnvvnnnvvvlli|" \
  "++==;;::::.:-:::::::.--:.:.:.::==|vXmWQWWQWWQWWQWWWQWWQWQWQWQWQWWQWWQW\n"   \
  "QWWWWWWWWWQWQWWWWWQWQWWWWQWQWQWW#ZXX22o2oonnvvvvvIvIvllvvvnvnnvvvnnnvvvvi|" \
  "|===:;::::-::::::;:::---:.:.::===idmWWQWQWWmWWWWWQWWWQWQQWQWWQWWWWWWWW\n"   \
  "QWQWQWQWQWWWWWQWQWWWWWQWQWWWQWWWm#ZXS222oonnnvvvvlIIIIvvvvnnnnnnnvnnnnvli|" \
  "+==:;:;::-:-::;===;::::::::::===|vXWWWWQWWZZ#mWWWQWQQWQWQWQQQWWWQWWWQW\n"   \
  "QWWWWWWWWQWQWQWWWWQWQWWWWWQWWQQWW#XXS22ooonnvvvvvllIIIIIvvnnnnnnvnvnvnvIi|" \
  "===;;:;:::-:::;;;=;=;;;;::::;;=|vXmWWWQWW#XnX#WWWWQWWQWQWQWWWWQWWWWQWW\n"   \
  "QWQWQWQWQWWWWWWQWQWWWWQWQWWWWQWWW#ZXSo2ooonnvnvvIIIllIvIvvnnnonnvvvnvvvIi|" \
  "|====;;:::::::=;=;;=;=;;;;;;==+iXmWWWWWQW#ov2ZBWWWWWQWQWQWWWWWWWWWQWWQ\n"   \
  "QWWWWWWWWWQWQWQWWWWQWQWWWWQWQWQWWm#"                                        \
  "XSo2oonnvnvvvIIIIlIIIvvnnnooonnvvvvvvii|++===;;:::::;;;;=;==;=;;=;===|"     \
  "nmBWWWWWWW#onoZmWWWQQWQWQWWWWQWWQWWWWWW\n"                                  \
  "QWQWQWQWQWWWWWWWQWQWWWWQWQWWWQWWWW#"                                        \
  "XX22ooonnvvvIvIlIIIvvvvnnnoooonvvvvvIli||=+==;;;;::;;=;=;=;=;;;:;;;;;=3#"   \
  "WWQWQWWWZ2nnXmWQWWWQWQWWWQWWWQWWWQWQW\n"                                    \
  "QWWWWWWWWQWQWQWQWWWWQWQWWWWQWQWQWm#"                                        \
  "ZXo2ooonnnvvvIvIvIIvIvvnvooooonvvvvIvlli|++==;;;::;:;;;;;;=;;:::::;;;<"     \
  "XWWWWQWWQW#2nnX#WWmmWWWWWWWWWWWWWQWWWWQ\n"                                  \
  "QWQWQWQWQWWWWWWWWQWQWWWWQWQWQWQQWW#"                                        \
  "ZX22ooonvvvvvvIvIIvIvvvvnnooo2onnvvvvvli||+===;;:::;;;:;;;:;:;:::;::;=3#"   \
  "WWQWWWWW#SnnoX##ZX#X#mWBWWWWQWQWWQWQW\n"                                    \
  "QWWWWWWWWWQWQWQWQWWWWQWWWWWWQWQWWW#"                                        \
  "UXS2ooonnvnvvvIvvIvvIvvvnnnooooonnvvvvli|+|===;;::::::;::;:;::::::::;+"     \
  "nBWQWQWWWWmXonoXXXlno2XX#mBWWWWWWQWWWWW\n"                                  \
  "QWQWQWQWQWWWWWWQWWWQWWWQWQWQWQQQWWm#"                                       \
  "XS22onnvvvvvvvIvIvIvvvvnvnoooo2nnvvvIll||++==;::::::::::::::::.:::::+"      \
  "nBWWQWWWWWW#Snoonl|vvno2XZ#mWWWWQWQWQWQ\n"                                  \
  "QWWWWWWWWQWQWQWWWQWWQWQWQWQWWQWWWWm#"                                       \
  "XXSooonvnvnvvvIvvIvlvvvvnnnnnnnnvvvvlii||+===;::.-.::-:::::-:.:.::::="      \
  "nWWWQWQWWQW#XnvnvIivvnvnoSSZmBWWWWWWWWQ\n"                                  \
  "QWQWQWQWQWWWWWQWQWWQWWQWWQWWQWQWWWB#"                                       \
  "ZXX22onvvvvvvvIvIvIvvvvvvnnnvnvnvvlliii|++=;;::-----.-....-.:.--:-:-="      \
  "nWBQWWQWWWW#SllvnnnnvvvnoonXX#mQWWQWQWW\n"                                  \
  "QWWWWWWWWWQWQWWWWWWWQWWQWWQWQWWWWWB#XXX2oonnvvvnvvvvIvIvIIvvvvvvvvvvvlli|"  \
  "i||+==;:::.-...:.----.-.-.:.::.:n#WWQWQWWWW#oiinonnnvIvvnnno2XmWQWWWWWQ\n"  \
  "QWQWQWQWQWWWWWQWQWQWWQWWQWQWQWQWWWB#XX222onvvvvvvvIvvIvIvIvIvvvvvvvvlli|||" \
  "+|===:;::..-.-..-...-.:.:.:-:-:vWWWQWWQWWWZ1|vS2nvIllvvvnnnnS#WWWWQWQW\n"   \
  "QWWWWWWWWQWQWQWWWWWQQWQQWWWWWQWWWWW#XX22oonnvvvvvvvIvIIIIIvIvvvvvIIlli|||+" \
  "====;:::.-........:.-..-.:.:.-=nWWWWWWWWWBX|inX2vlllllIvnnvnoZWWWWWWWW\n"   \
  "QWQWQWQWQWWWWWWQWQWWWQWQWQWWWWWWWWm#X22ooonnvvvvvIvvIIvIvllIIIIIIIIlii|+++" \
  "====::::.-.....-.-...---:.:.::<3#BWWQWQWWmXiiXS2vlilllIvvvnnoZBWWQWQWQ\n"   \
  "QWWWWWWWWWQWQWQWWWWQQWQWWQQQWWWm##XSno2nonnvvvvvIvvIvIIIlllllllllllii|i||=" \
  "+==;::::.-........-.:..-.:.:-:=nXX###WWWWBXivo22onllilvvvvnoXUBWWWWWWW\n"   \
  "QWQWQWQWQWWWWWWWQWQWWQQQWWWWW##SIIiiln2oonvvvvvvvvIvlIIIlliliiliiliii|||=|" \
  "====:::--......-.---.-----:.-:|lilII1X##WmZvvoSSSnvI|iInvno2X#WWWQWQWQ\n"   \
  "QWWWWWWWWQWQWQQWQWQWQWWWWWW#S11i|||||io2onvnvvvIvIvIvIIlililiiiiii|i|||++=" \
  "===:::.:.:.:.:.-.---:.::-:.:.=|ilii||iI1SX#1vn2XS2oniivno22SX#WWQWWWWQ\n"   \
  "QWQWQWQWQWWWQWWWQWWQWWWWW#Z1iilli|+++|vooonvvvvvIvIIIIliliiiiiiii|i||++++=" \
  "=;;:::.:........:.:.:-:.-:.::=iillii|||il2ol|Io2X22nvInoS22SZWWWWWQWQW\n"   \
  "QWWWWWWWWWQWWQWQWQWWWQW#XSl||ivvi||i|||inonnnvvvvIvIvlliiiiiiii|i||+|+++==" \
  ";;:::.:.-.:.:.-..--:.:.:...:;|iiiiilii|ilnni|iIooSooono22o2X#WWWWQWWWW\n"   \
  "QWQWQWQWQWWWQWWQWQWWQW#XliiiilIvvvvi|++|ivonvvvvvIvIlllliiiiii|i|++++=+==;" \
  ";::::.-.-..-..-.:.-.:-:.--::||iiiiiiillIo2n%|iino2o222222oX#mWWQWWWQWQ\n"   \
  "QWWWWWWWWQWQWQWQWWWWW#X1i||ilvvn22ni|====vonnnnvvvIvvIIlliiii||+|+|++===;;" \
  "::::-.:.:.-..-....-..-...:=ivviviiiiilvnXX2ni|ivoS2S2XX222X#WWQWWQWWWW\n"   \
  "QWQWQWQWQWWWQWWWWWWW#11l|||ivno2Xovi|+==+ivnonnvvvvvIvlllllii|||+|+++=+=;:" \
  ":::::.:...-.:..:.-.:....:=io2oXSooonnno2XXXX1iivS2XSXXXXSSZmWWWWQWWQWQ\n"   \
  "QWWWWWWWWWQWWWQQWWW#1llili|ivo2SSonnvi||||vnnnnnnvvvvvIvllliii|+|+|+++=;;:" \
  ";:::--.:.:.-..-.......-:|vXXXZXXZUXXS2SSXXXS1ivoXXXXXXZXXXZBWWWQWWWWWW\n"   \
  "QWQWQWQWQWWWQWQWWW#eii|iiiiivo22X2XSooniIlnoo2onnnnvvvvvIllii||||+|++===;;" \
  ":;:::.:.-..-.:..--..::=ivXXXXXXXZXZXXS22onnIiiv2XXXXXZZUXXZBWWWWWWQWQW\n"   \
  "QWWWWWWWWQWQWWWWWWZiiii|=||iIvo2S2SSXXoSoo2XXX2oonnvvvvvlliiiii||+|+|+==;;" \
  ";;::-:.:.:--...-.-:==|innoo2222SSSXXXSS2ovi|||inXXZZZZ#ZXXZmWWWWQWWWWQ\n"   \
  "QWQWQWQWQWWWWQWQWWeiivi||||iIvvo2S2SSXXXXSooS2SooooonvvvIliiii|i+|+++====;" \
  ";::::.:.:.-:-::::;|inoXSnvonnnnvvn2SSXXXon|||||nSXZZZZZZXXZ#WWWQWWQWQW\n"   \
  "QWWWWWWWWWQWQWWWQ#l|iIvvl||ivnn2XXXXXXXS21iiiIoSXXXXX2onvIlii|||++|++====;" \
  "::::::.:.:::;;===|voXZXXoo22o2onnoXXXXXXZXovi|iv2XXZZZ#ZXXZ#WWWWWQWWWW\n"   \
  "QWQWQWQWQWWWWWQWW2slIIvnnv|ivnv2XXXXSonvli|||vXXZZ#Z#XX2oonvvli|||+++++===" \
  "==========;+||i||lnSXZZXXXXXXXXSSXXXXZXXXXXX%iivoXXXZZZZZXZmWWWWQWWWQW\n"   \
  "QWWWWWWWWQWQWQQB#nnooviIvl|iivvnnonnvi|||llilv2XXSS2SSS2So2oonvIvvil||||||" \
  "|i||vivvii|iilIiivoSXZZUZZXXS2S2XXZZZXX2on1n1||iv2SXZZ#ZZXZmWWWWWWWQWW\n"   \
  "QWQWQWQWWWQWQQW#XnSX21|iii||ivnvvnvvi||||"                                  \
  "in2o22So2oonoooooSX2oooonnonnnnnnonnnno2Xo%i|ivooooo1nX#"                   \
  "ZZZXX2onoSSSo2o11Ii|vv|+|v2SXXZUZZXZ#WBWWWQWWWQ\n"                          \
  "QWWWWWWQWQWWWWBZnn22nIi||++|ino22SnIi||+|"                                  \
  "inonS2XXXZXXS2oSXXXSS2SSSXXX2222XXXXS2oXSol||inXXZ2vvvX###ZZSoonnooonvvii|" \
  "||vvi||voXXZZ#ZZZZ#BWWWWQWWQW\n"                                            \
  "QWQWQWQWWQWWQWmSnoX2nnov|||+|inSSS2viili|iviiinXZZ##"                       \
  "ZZZZXXXZXXXXXXZZX1vnoXSXXXXXX2vi||in2ZXSonXXZ#Z#ZXXSoo222onvIiii|vvl||"     \
  "vnXXZZ#XZZZ#mWWWQWWWWQ\n"                                                   \
  "QWWWWQWWQWWWWWZooXXSSSXXnii|+||v22SnllIIili||ivSXZZZZ###"                   \
  "UZZZXXXXSXXSonvnSXSXXXZ#Zmoonvvn2XXXXXXZUZ###ZZZXXS22oooo2ovvvnli|lnXXX#"   \
  "ZZZZZZ#WWQWWWQWW\n"                                                         \
  "QWQWQWWQWQWQW#Svn2SSSXXXSnni|=||II1lliiiilli|ivXXZ#"                        \
  "ZZXZZZZXX2SXX22onnnooXS22XXXZZZZZZXZZXXXn222XXZ######ZZXooonvn22onvvi|"     \
  "iloSXZZUZ#ZZSX#WWWQWWWQ\n"                                                  \
  "QWWWQWQWWWWWWZliiIvXSoo2oooni|=+++|||||||iliivoZZZ####"                     \
  "ZZZXSonno2ovvnnnnnnnnnoo222SSXXZ#XX1iii||inZZ####U#ZX2onvlnnnvvii|=|loSXZ#" \
  "ZZZZZ2nX#WWQWWQW\n"                                                         \
  "QWQWWWQWQWWW#Sli||vSoIvlilInni==+|||iii|iivvvoXXXXZ##Z#"                    \
  "XX2onnnoonnnoSoIiiiIvvIlli|ilnXXX1i||||+|vXZ#UZ#ZZ#ZZXXSoSoni||+==|"        \
  "IoXXZZUZ#ZZXvv#BQWWWQW\n"                                                   \
  "QWWWQWQWWWWWZviiiivSnl||||iv21||viIvnnnviinSXX2vvnX###XXXXSXS2S2S222Snl||"  \
  "lvonlii|i|in2Xol|||i|+|lnXXXXXX#ZZ#ZZZZXSs+|||+|ivoXX#ZUZZUZXnvn#QWWQWW\n"  \
  "QWQWWQWWQWW#2llvvnXXnvii||ino1|looSoSSoliinXXZonvoX###Z#ZZZZZXX2o1vvlli|"   \
  "vnXSnI|i|||lnS2nl||i+||vnoXSSSSXXZ#Z#ZXXXoi|||vi|in2XX#ZZ#ZZXXovn#mQWQWQ\n" \
  "QWWWQWWQWWW#eivnoXXZXovvvlIIl||iXZZXZXol|inXZZXXXZ##U########"              \
  "ZX2ovlIIiiinXZXoniiiilvnoonvi||||vnSXXXXXSSXZZXXXXXZXv||vnv|loSXXZ#ZZ#"     \
  "ZZXXnnX#QWQWW\n"                                                            \
  "QWQWWQWQWWW#s|voXXXZXSonvvii+==iX##Z#ZXnvuXSZXXSXXXX########U#"             \
  "ZZXXXXoovvXZZZXSnvvIvnvvvvi|||||iInnn1112nSXXXXXXXZX1iilIlivn2XX#ZZ#"       \
  "ZZZX2onn#WWWWW\n"                                                           \
  "QWWQWQWWQWWZi|nXXXSnnIIliili|+|iXXZ###ZZZ#ZZX21lllInZmm#####Z#######"       \
  "ZXnoXZZZXS22nllii|ii|||+||||ii|iiiiivSSXXXXXX2l|||||inoXXZZ#"               \
  "ZZUZZZ22nv3WWQWQ\n"                                                         \
  "QQWQWWQWWWB#sloXZXnIi||||lvvviiv2XZXXXZ####Zei|||+|IXmm##Z#######Z#"        \
  "ZZ2noZZZXSSXSnlii+|+||+|||||||iii||iiiiv2XXS21l|=|+++"                      \
  "io2SXZZZUZZZZXSonvdmWWWQ\n"                                                 \
  "QWWWQWWQWWWZovXZZXovi|+|ilnooovvoX22n1n2SXXXl||||+|lXXZZZXZUZ###Z#ZUXSnoZ#" \
  "ZXXXXSnIi|||||iillilivlIvvviIliilno21ii|+=||i|inoSXZ#ZZUZ#XXSonvXWWQWQ\n"   \
  "QWQWQWQWQWBZonXXXXonli||ivoXSnvvnonvliiIoZXnli||+|iv2XXZXXZZ#"              \
  "ZUZZZZZX22XXZUZZXX2li|+++ivno22ononnno2222nllnnvvliIiiivvliiv2SXZZ#"        \
  "ZZZZXXSooXmWWWQQ\n"                                                         \
  "QWQWWQWWQWWXovvII|||||=||InnnvvInSoliiiIoX2nli|||iv2XXZXXXXZZZ##"           \
  "XXXXXS2XXXXXXZXoI|+===|vSXXS2oo2X2XXXXovInonvnvvnnvvvvIiivoSXZZZZ#XZXX2oX#" \
  "mWQWWQ\n"                                                                   \
  "QWQWQWWQWWWmXoi|=::======|illvlln2oIiiivo2onIl|||"                          \
  "lvn22n1Iv12nXXZXXXXXSSSSXXXZXXXovi||||loSnooooo2SSSXSnvvnooooonnliiIvli|"   \
  "InSXZZZZZZXXX22XZWQWQWW\n"                                                  \
  "QWQWWQWWWWWmmmz==;=|+||+|||||i|ln2Snvlivvvvvii||||iiiii|"                   \
  "iiiiIvXSXXX22noXXXZZZZ#XZXonvllInnnnonnvvI1n2Snllvvvvo2oviiIvnn||"          \
  "in2XZZZZZZXXX22S#WWWQWQ\n"                                                  \
  "QWQWQWWQQWWWQBmc+=|ivvvii|++|+||v2Snnvllii|i|||||i|i|ii|"                   \
  "iillilvno22nvvXXXZXXZXXZXXXoo2oooooonnvviiiln2oIiiiiiIoXonnoX2oliivoXZZZZZ" \
  "ZZXX22SZWWWWQW\n"                                                           \
  "QWWWWWQWWWWWWWmo|=|ivvvvl|+|i|=<voSoonIi||||||"                             \
  "iiiiiillIvvnonvIvnvnvnvvSXXXoS22XXXXSSXXXXXXXX2oonliIvnS2nliii|"            \
  "lnSXo2XSX2niivoXXZZZZZXSSX2X#BWWQWQ\n"                                      \
  "QWQWQWWWQWQWQWW1|=|lIvvvvi|ina%ivX2SXSv||||"                                \
  "ilvvnvvnnnnoXSSnnnoo2nno2ooSS222XSXXSSXXXXS2S2XSSXXX2oSo2SSSonnnnvvXXnnnoX" \
  "XSonnnoSXXZZZZXXS2S2#BQWWQW\n"                                              \
  "QWWWWWQWWWQWWWmz+=|ilvvvvi|vm#1loZXXXoi|++|"                                \
  "lnnn2ooo2XXXXXSvvnSXSnn2XSSo2SSXXXZXXXXZZXo1IIIvoXSSXXXZXXXXXZXXS2XXXliv22" \
  "SS2oonoXXXZZZZZXXSoX#WWWQWQ\n"                                              \
  "QWQWQWWWQWWWQW#o|=|ivvvnnIidmXlISXZS21i|++"                                 \
  "iInnoX2no2XXXXXonlv12nvvvooSo2XXXXSS22SoXX1li|||v2XXXZ#U###Z##Z#"           \
  "XXXXX1iivo2SXSS2S2SXXZZXXXX2SXZmWWQWWW\n"                                   \
  "QWWWWWQWQQWQWW#1|=||lvnvvvvo#e|lnXXX2oi|||"                                 \
  "ilvn2Sonnnnn2X2XolilIIlllIvoSXXXXnvlIlllii|iiii|vX#Z#UZZZ###"               \
  "ZUZZZZZXovllvoSSSS2XSXXXXXXXXXS2XZmWWWWWQW\n"                               \
  "QWWWWQWWQWQWQW#1|;||vvnnnnnXX1|"                                            \
  "inXXZXXoonnvvvnnoovlliIvo2XoviiiiiiiilnSXXXSnvvii|ii||"                     \
  "ivnvvvoXSXXSXXXXXXZXZXXXXoooonooo2SSSSSSXXXZXXSSXZmWWWWQWWQ\n"              \
  "QWWWWWWQWQWQWW#o|=+iIvnnnnn22i|"                                            \
  "ioSXXXXXXXXXooo22onIlilvnSX2nlIlIvnvvvvn2XXXS2nl||ii||"                     \
  "ioXSooonnoSnnnnvno2S2SSXXXXXoo2XXoXXXXSSXXZZXXSX##WWWWWWWQW\n"              \
  "QWWWQWQWWQWQWW#o|=="                                                        \
  "iIvnnnnoXolivnoSSSSXXXZXZXZXX2SooooXXSS2ooS2SXXZXXollvXZZXSniilli|"         \
  "lnoo22SSSXXS22onvnnono2XXXSo1vX#mSXZZZXXZUZ#ZZZ#mWWWWWWQWWW\n"              \
  "QWWWWWWWWWQWWWmX|=+|IvnnnnSZZllvnoSSXSXXXXXXXXXSXXXZZZXXXXXXXZZUZ###X1||"   \
  "vXXXXSnllIvliillllIXSXXZZZZXX2S2X2SSXX21l|vXWm#mmWmmmmmBmmmBBWWWWWWQWWQW\n" \
  "QWWWWWWWWWQWQWBX%|+|lvnnnoX#XIvvvoXSXXXXXX1vvvvoXZZZ#Z##ZUZZZ#Z#Z#"         \
  "ZZSviiiiI11Iliililiil|||ivSXZZ#Z#Z#ZZXXXXX22ni||"                           \
  "iXWWWWWWWWWWWWWWWWWWWWQWQWWQWW\n"                                           \
  "QWWWWWWWQWQWWWWZs+=|iIvnno##Xvvnvo222222nlii||v2Z###Z##U#Z#Z#ZZZZZZZXni||"  \
  "i||||i||||i|ilii|vvZZZZ#ZZZ#ZZZXXXX21i||ivXWWWWWWWWWWWWWWWWWQQWQWWWQWWQ\n"  \
  "QWWWWWWWWWQWWQW#v|++|vvooS#mZnnonnnnvvIIii|iiinXZXXZXZXXXZXZZXXXZXZZXovli|" \
  "|iiii|i||+|iIllvoXUU##Z#Z#XZXX22SonliillvXBWQWWWWWWQWWWWWWQWWQWWQQWWWW\n"   \
  "QWWWWWWWQWWWQWW#oi++ivvo2XmBU2o2onnnvi|i||"                                 \
  "ilvvnSSSSS222ooooSXS22XXXZZXSnoovvlIvnoni||lvnnnSXXXZ###"                   \
  "ZZXXooooonnnnoovvXmWWQWQWQWQQQWQWWQWQWWQWWWQWQ\n"                           \
  "QWWWWWWWWQWQWWW#Xs++iInnXmmWZSnvnSSov||i||"                                 \
  "in2nnoS2S22oonvnnoS2o2XXZZZXSSZZS2onnXXXliivoXSXon1SX###"                   \
  "ZXXSnnnnnnoXSS2vInmWWQWQWQWQWWQWWWQWWQWWQWQWWW\n"                           \
  "QWWWWWWWQWWWQWWBZs|||vvoXmWWZ1iivXS2nlili|lvnvvoXXZZZZXXXXXXZXXXXZZZXS2SZ#" \
  "XXXS2XS1i||vSXXXovInX#Z##XXXoonnooo21novlnmQWQWWQWQWQQWWQWWWQWQWQWWWQW\n"   \
  "QWWWWWWWQWWQWQWWZ1i=iIn2ZWWWZv|||voonllllliii|inXZ##Z##ZZZ###"              \
  "ZZZZZXXXo2SXZUZ#ZXXoIi|ivSXXS2o2XXU###U#ZZXSXoniiinoonn#"                   \
  "QWWQWWQWQWQWQWWQWQWWQWWQWWW\n"                                              \
  "QWWWWWWWWWWQWWWWZo>=|IvS#WWW#1+|||iiii|iilii||ivXZZXZZZZZ#"                 \
  "ZZXXZXZZXXo2SSXZZZ#Z##XXooo2SXZXXXZZX#U#####ZZXXoviivSSSnv#"                \
  "BWQWWQWWQWWWWWWWQWWQWWQWWQW\n"                                              \
  "QWWWWWWWQWQWQWWWZo>=|in2#WWW#s||||+|||||||liiivXX#Z##UZZ#"                  \
  "ZZXSS2XXXXooo2SXXXXZZZZ#Z###mXXZ22122SXZ########"                           \
  "ZXXoXSX2nIvXmQWQWWWQWWQWQWQWQWQWWQWWQWW\n"                                  \
  "QWWWWWWWQWWWWWWWmo>==ivoZmWB#z|vvi|illii||lvvInXXZZZ#ZZZ#"                  \
  "XSnnvnnn2nvvn2So22S22122XXZ#ZZX1ii||||n########Z#"                          \
  "ZZZXXSSnvvXmWWWWQWWQWQWWWWQWWWQWWQWWWQ\n"                                   \
  "QWWWWWWWWWWQWQWWmo|=+ilnX##W#2ln2oviIn2ovilnooSXSXXX####"                   \
  "XXovvvvvIlvonvIIvvvvi|ii|ivXXZXl||||+=|vZ#U#Z#ZZ#Z#"                        \
  "XXXXXX2onnWWWWQWWQWWWWQWQWWQWWQWQWWQW\n"                                    \
  "QWWWWQWQWQWWQWWW#Xi+=|ivvoX##XlvS22ooS2nliinZZXovvnXZ##"                    \
  "UZX2oSS2onoSo2liilnnvli|||inXXS1i||||=+|IXXXXZZZZZZXXXXXXXXSvo#"            \
  "mQWQWWWWQWQWWWWQWQWQWWWQWW\n"                                               \
  "QWWQWWWWWWQWWWWWBXi=++ilvn2XX2lv2XXXXXov|||vXXX2nnoX##Z##ZZZXXXX2o1li||"    \
  "iv22nl||||inXXovl||+||"                                                     \
  "ivnXXXZXXZZZZXXXXXXXSSvvXWQWWWQWQWWWWQWQWWWQWWQWWWQ\n"                      \
  "QWWWWQWQWQWWQWQWWZs=++iiIII1X1lvoXX#ZXSviiivSXXXSXXZ####U##Z#ZZXSnvl|||"    \
  "vXZXol|||ilv22ovi|||||"                                                     \
  "IoSXXXoonXXXXXXXXX21I1IvdQWWQWWWWWQWQWWWQWQWWQWWQWW\n"                      \
  "QWQWQWWWWWWQWWWQWm1+==|ivI|livvn2SXZXZ#XXXXSXXSSoX22XXU#####ZUZZXSooniio##" \
  "X2nliiliIvvIii||=||iIIIIIili12SXXXXonn||lvnXWWWWWWQWQWWWWQWQWWQWQWQWWQ\n"   \
  "QWWWWWQWQWQWWQWWW#o>+=|lvI||ivnvnn2XoXXXXXZXXX1Il|||in######Z###ZZ#UX2oXZ#" \
  "XXnvvvlli|||||++|+|+|i|||||+||vnon1vli||vnoXBWQQWQWWWWQWQWWWWQWWWWWWQW\n"   \
  "QWQWQWWWWWWWQWWQWmZi==+lvI||+iiiiiiIlIiIISSXZ1i|++==|vXZZ#ZZZ#ZUZ##"        \
  "ZXXS2XZXX22ovii|||+|+||||||||||||||||"                                      \
  "lvvvlliilvoSvXmQWQWQWQWQWWWWQWQWWQWQWQWW\n"                                 \
  "QWWWWWQWQWQWWWQWWWZi=;=iIvns|i|iivvl||||ivoXol|=++=;+In2XXXXZXZZ#"          \
  "ZZXXXX2XZXXXXXvi||++||"                                                     \
  "iiIIllliivnnvvIlIvvvvvvvnno2ovnmWQWQWWWWWWQWWWWWWWWWWWWWQ\n"                \
  "QWQWQWWWWQWWQWWWWW#%=:=+lnXo%|lvvSoni|++|i22oi|||===|"                      \
  "vn2XSoXSXZZXZXXXXXXZZXXXX2i|==;+"                                           \
  "ilvnnnvvvvnoX2SnvvoonvvvvvnoX2nivmWQWQWQWQWQWWQWQWQWQWQWQWW\n"              \
  "QWWWWWQWQWWWQWQQWWm1;=:=|nXXv|inXXXoi||+|lnovli|++=||"                      \
  "vnnn111nXZZXXXXXSSXXXZXXSvi+=::=|"                                          \
  "vooonnvvn22SoonIvvnvliIIIvXS2olnWWWWQWWWWWWWQWWWWWWWWWWWWQ\n"               \
  "QWQWQWWWWWQWWWWWWQBX>=:=|{nSs||InXXSvi||illlii||++++|iiii||"                \
  "iI12oXXXXXXSSXXXXXSni||=|||vnnnnvIilInvnvIiilli|iilvnXSS2vv#"               \
  "WQWQWQWQWQWWWQWQWQWQWQWQW\n"                                                \
  "QWWWWWQWQWWWQWQWQQWma>:::+IIi|=|vSSnnvvvlli|=|+|=|++||||+|+|"               \
  "iivvnXX2nnSXXXXXXXXovvvvllIvIIvvi||i|lIvIii|iiiiivvSSSSolv#"                \
  "WQWQWWWWQWWQWWWWWWWWQWWWQ\n"                                                \
  "QWQWQWWWWQWQWWWWWQWQXoi=;==||||ivo2So2oovl||=|||||||i||i|||"                \
  "iiiilvnnvIv2XXZZZZXXSooo2Soonvvnvili|ilvnviilvvvvvoSS2ovl|v#"               \
  "WWWQWQWQWWWWWQWQWQWQWWQWW\n"                                                \
  "QWWWWWQWQWWWWQWQQWWWWmXs|=||iIi|vSXSXX2ovi|++|"                             \
  "iillIIiilillvvvllilvIllnSXXXS2SS22SoS2XXXXonvnnvvnvnnnvvoSo222oo2n1ii||v#"  \
  "WWQWWWQWWQWQWWWWWWWWWQWWQ\n"                                                \
  "QWQWQWWWWWQWQWWWWWWWWWmmaavnoovivoX2XSoni|+==||"                            \
  "lvnnonvnn2222nvlIvovlvnS2So22SoSS2S2oo2nnnnnnno2SS22oo2XXXXXSooni|||||{"    \
  "WBQWWQWQWQWWWWQWQWQWQWWWWW\n"                                               \
  "QWWWWWQWQWWWWQWQWQQWWQWmmmmmmmoiivo2S22ni||==||"                            \
  "lvnnonno2XSS2nvInoXvIvnooSSXXXXS2X22nIiiiiv22SXXXXSXSoSSSSXS2Soni||i||"     \
  "nmWWWQWWQWWWQWQWWWQWWWQWQWQ\n"                                              \
  "QWQWQWWWWQWQWQWWQWWWWQWWQWWWWBX|ilo2SSooovii|i|"                            \
  "lvvnnvvnnoooonIlIo21livvnnoX2X2ooo1vi|||||"                                 \
  "nZXXXXXS2S222nnnn2XS22niiiiidQWWQWQWQWQWWWWWQWWWQWWWWWQ\n"                  \
  "QWWWWWQWQWWWQWWQWWQWQWWWWWQWWWZi|inoo2XS22onnviIvvvvl||iIvvnvli|Ilii|"      \
  "lvvvnnllllii|||iii|"                                                        \
  "lnX222So2nnooovllvo2o2SnnvvvXWWWWQWQWWWWQWQWQWWQWWWQWQWW\n"                 \
  "QWQWQWWWWWQWWQWWQWQWQWQWQWWWWWmXvvvnvoooo2oonoonvvvvl||||ilvnl||iii|"       \
  "iinnovvli||||+=||vllvvvvnnnnvllvnvliilvvv2SSSoXm#"                          \
  "WWWWWQWWQWQWWWWWWQWWQWWWWWQ\n"                                              \
  "QWWWWWQWQWWWQWWQWQWWWQWWWQWQWQWmXXXonvvlvvnno2ooooonnililvvvnIiiiiiiiivoXo" \
  "onli|||||+ivvvvvvnnnvlliiiii|||i|ivXXZ#mWmWWWWWQWWQWWWWQWQWQWWWWWQWQWQ\n"   \
  "QWQWQWWWWQWQWQWQWWWQWQWQWQWWWWQWWmmmmoi|"                                   \
  "iillIvvn1vvnvIvIIvvIlliilllllilvoS2nvi|||++|iiiiiIlvlvlii|||||||||||"       \
  "lnmWWWQWWQWWWQWQWWWQWWWWWWWQWQWWWWWW\n"                                     \
  "QWWWWWQWQWWWWWWWWQWWQWWWQWWQWQWWWQQW#ei|++|+|||||||||||iiii|||||||iii||"    \
  "illili|++|+|+|||||i||i|||||||||||i|||iv#"                                   \
  "WWQWWWWWWQWWWWQWWWQWQWQWWWWWQWQWQ\n"                                        \
  "QWQWQWWWWWQWQWQWQWWQWWQWQWQWQQWWQWQW#l==;;::;;;::;;;==++=+==|=====+|||=|||" \
  "||+++++|=+|+|+|||||||+|+||||||||||iiX#WQWQWQWWWWQWWWWQWWWWWWWQWQWWWWQW\n"   \
  "QWWWWWQWQWWWWWWWWWQWWQWQWWWQWWWQWQWWX|==;;:;:;;;;=;===++=======:::==++++++" \
  "++++++==++++|+|++++++|+||+|+|||||||ivmWWWQWWWQWQWWQWQWWQWQWQWWWWQWQWWW\n"   \
  "QWQWQWWWWQWQWQWQWQWWQWWWQWQWWWQQQWQW2|==;;==========++==+==;;=;=:::====;==" \
  "=++=======++++++|+|+|+|||||||||||||iv#WWWWWQWWWWWQWWWWQWWWWWQWQWWWWWQW\n"   \
  "QWWWWWQWQWWWWWWWWWWWWWQWWWWWQWQWWWQmk|=;;;========+++=++===;;;;;::::::-:::" \
  ";;;;=;;;====++|++|+||+|||||||||||i|ivXWWWWQWQWQWQWWWQWWWQWQWWWWWQWQWWQ\n"   \
  "QWQWQWWWWWQWQWQWQWQWQWWWQWQWQWWWQQWWe|;;;=====+=++++++++======;;;:;::....." \
  ":::::::;;;==+++||+|||||||||||||iiiiivmBWWWWWWWWQWWWQWWQWWWWWQWQWWWWQWW\n"   \
  "QWWWWWQWQWWWWWWQWWWWWQWQWWWWWQWQWQWme+==;===|++|++|+|+|+|=++===+==;::. "    \
  "....::::::;====|+|+|||||||||i||||"                                          \
  "iiiiilnmWWWWWQWWQWWWQWWWWWQWQWWWWQWQWWWQ\n"                                 \
  "QWQWQWWWWQWQWQWWWQWQWWWWWQWQWQWWQQQme+==;===++|=|+++|+|+|+|+|++|====::.. "  \
  "....::::;;==+++|+||||||||i||i|ii|i|iIo#WWWWQWWQWWQWWWQWQWWWWWQWQWWWWQWW\n"  \
  "QWWWWWQWQWWWWWQWQWWWWQWQWWWWWWWQWWWm1+===;==++|+|=|||+|+++|++|+++++=::.. "  \
  "-;=::::::;===+++||||||||i||i|i|i|iiivXmQQWQWWWWWWWWQWWWWWQWQWWQWWWQWWWQ\n"  \
  "QWQWQWWWWWQWQWWWWWQWQWWWWQWQWQWWQWQm1+===;==++|++|+|+||+|+++|++|++==::...-" \
  "=ii;.::::;;==+|=||||||||i|i||i|iiiivXWQWQQWWWWQWQWWWQWQWWQWWQWWWQWWQWW\n"   \
  "QWWWWWQWQWWWWWQWQWWWWWQWQWWWQWWQWWQm1+===;===+++|+|+|+|+|+|+|+|+++==::...." \
  "<voi;::::;===+=+|+|||||i||i|i|iiiiinmmQWWWWWWWWWWWQWWWWWQWWWWWQWWWQWWQ\n"   \
  "QWQWQWWWWQWQWQWWWWQWQWWWWWQWWWQWWQWm1+==;;;==++|++|=+|++|+|++++|=+==::...-" \
  "<X#o>;:::;:;=====+|||||||i|i|i|i|ilnmWWQWQWWWWQWQWWQWQWQWWWQWQWWQWWWQW\n"   \
  "QWWWWWQWQWWWWWWQWQWWWWQWQWWWQWQWQQWm1|==;=======+|=|+++|++|+|+|=+===:;:.::" \
  "vmWmo>::::;;;;;==++|+|||||i|i|iiiiIXmWQWQWQWWQWWWWQWWWWWWQWWWWWQWWQWWW\n"   \
  "QWQWQWWWWWQWQWQWWWWQWQWWWWQWWQWWQWQBS|+=;=======++++|+|++|=+++=+===;::.-:=" \
  "nmWWm>::;:;::;;;==+++|+||||i|ii|iil3#BQWWQWWWWWQWQWWWQWQWWWQWQWWWWWWQW\n"   \
  "QWWWWWQWQWWWWWWWQWQWWWWQWQWWQWWQQWQWXi+==;=====++++|=|=|++|++=+====:::-::=" \
  "nBWW#i;:;;;:;;;===++++++|+||||iiiiivXmQWQWQWWQWWWWWQWWWWWQWWWWQWQWQWWQ\n"   \
  "QWQWQWWWWQWQWQWQWWWWQWQWWWWQWWQWQWWW#i|======++|+++=+++++++==+==+=;::::::=" \
  "3mQQWo|=:;;;;====+=+===+===|||i|i|iinWWQWQWWWQWQWQWWWQWQWWQWQWWWWWWQWW\n"   \
  "QWWWWWQWQWWWWWWWWQWQWWWWQWQWWQWQWWQWZi====;===+==+=++++++=+=+====;;::::::=" \
  "vWWWWmc=;=;====++=======+===+||i|iiiv#BWQWQWWWWWWWWQWWWWQWWWWWQWQWQWWQ\n"   \
  "QWQWQWWWWWQWQWQWQWWWWQWWWWWWWWQWQWWWX|+======+=+=+=++=+=++=+=====;:::::::;" \
  "vXWWWWz|;;;===+=+==========+||||ii|ivXWWWWQWWQWQWQWWWQWQWWQWQWWWWWWWQW\n"   \
  "QWWWWWQWQWWWWWWQWWWQWWWQWQWQWQWQWQWWXi+===;=======++=+=+=======;;:::::-::=" \
  "idQWQ#e|:;;=============++++++|||||iiXWWWQWWWQWWWWWQWWQWWWWWWWQWQWQWWW\n"   \
  "QWQWQWWWWQWQWQWWWQWWWQWWWWWWWQWWQWWWXi==;;===================;;;:::::::::=" \
  "|3BQQ#1=;:;;;===;==;====+++|+|+|||||idWWWWQWWWWQWQWWQWWWQWQWQWWWWQWWQW\n"   \
  "QWWWWWQWQWWWWWQWQWWQWWWQWQWQWWWQWWWWS|+=;;;;;;;;==;=;=;;=;;;;:;;:::::::::=" \
  "={#WW#i=:::::::::;;;=;;==+|++|+|||||i3BWWQWWWQWWWWWQWWQWWWWWWQWQWWWQWW\n"   \
  "QWQWQWWWWWQWQWWWWWWWQWQWWWWWQQWWQWQWXi+=;;;;;;;=:;;;:;:;:::::::::::-::::.:" \
  ";|XBWZs=::::::::;:::;;;;====+=+++|||iXWWWWWWWWWQWQWWWQWWQWQWQWWWWQWWWQ\n"   \
  "QWWWWWQWQWWWWWQWQWQWWWWWQWQWWWWWQWWW#c|:;;;;==;=;=;=:;:;::::::::::...-:..:" \
  ";<XWWmo=::::::::::::;;::;====;===|||vmWWWWQQWQWWWWQWQWWWWWWWWWQWQWWQWW\n"   \
  "QWQWQWWWWQWQWQWWWWWQWQWQWWWQWWQQWWQWmz==;;========;;;::::::::::..........." \
  ":iXWWWZi;...:::::::;=;;;=;=======+||nWWWWWWWWWWQWQWWWWQWQWQWQWWWWWQWWQ\n"   \
  "QWWWWWQWQWWWWWWQWQWWQWQWWWQWQWQWQWWW#oi=======;;:::::.--.-.-.............." \
  ":{mWWWZc:.....::::;;;=====+=++++||||n#WWWWQWWQWWWWWQWWWWWWWWWWQWQWWWQW\n"   \
  "QWQWQWWWWWQWQWQWWWWQWWQWQWQWWQWWQWW#X1i+===;::.-....... ... "               \
  "............:.=vmWWm#o=:...::::::;::;===++=++||||"                          \
  "inmWWWQWWWQWQWQWWWQWQWQWQWQWWWWQWWW\n"                                      \
  "QWWWWWQWQWWWWWWWQWQWWQWWWWQWWWWWWW#Sli+==::..... . ..  ..  .. . "           \
  "....-:..:;<dmWQWWmc:..::....:...:-:;:;;:===||"                              \
  "vXQWQWWQWWWWWWWWQWWWWWWWWQWWQWQWWQW\n"                                      \
  "QWQWQWWWWQWQWQWQWWWWWWWWW###XX##XX1||==;::... . .. . ... ... .. "           \
  ".....::-:=nmWWWWWmX>;:::............:.:::;=+|"                              \
  "vXWWWWWQWWQWQWQWWWQWQWQWQWWWWWWWQWW\n"                                      \
  "QWWWWWQWQWWWWWWWWQWQWWWZ1li|||ii|||==::::....... ..... .. . . ... "         \
  "...::=|umWWWWQWWWoi:.........-..:...:::==+|I#"                              \
  "mWWQWWWWWWWWWWQWWQWWWWWWQWQWQWWWQ\n"                                        \
  "QWQWQWWWWWQWQWQWQWWWWW#l==-::;=====;;::::............ . . .. . . . "        \
  "..:=iwmWWWWWWWQWmp>:::::-.:::::...:::;=||||"                                \
  "IXUmWWWQWQWQWQWWQWWWQWQWQWWWWWWQWW\n"                                       \
  "QWWWWWQWQWWWWWWQWWWQW#e>:. .-::;;;;;;::-.............. .. . ... "           \
  ".....:<dmQWWWWWQWQWQWo>====::::::.....-:;=++|=||IU#"                        \
  "WWWWQWWWWQWWWQWWWWWWWQWQWQWWQ\n"                                            \
  "QWQWQWWWWQWQWQWWWWQW#X>=.....-::::::--............... .. ... . ..  "        \
  "..<vQWWQWQWWQWWWQWmi|==;:-...... "                                          \
  "...::;====;;|lXWWWWQWWQWWWQWWWQWQWQWWWWWWWQW\n"                             \
  "QWWWWWQWQWWWWWQWQQWW#i+;.. . ...---.......  . . .  . .  . . . .  "          \
  "...:<dmWWWQWQWWWQWWQ#l=.::...-... "                                         \
  "......:;=;=;===<X#WQWWQWWQWWWQWWWWWWQWQWQWQWW\n"                            \
  "QWQWQWWWWWQWQWWWQWQWms|==;::.:.:...........-.. . .. . .. "                  \
  "......::;;=|umWWWWQWWQWQWQWW#c... ...... .. . "                             \
  "...:.:::::==IXWQWQWWQWWQWWWQWQWQWWWWWWWWQ\n"                                \
  "QWWWWWQWQWWWQWQWQWQWmmqwouasi=i=============;;_;;;_;;;;;;;===i%"            \
  "ssvuoqmWWQQWWQWWQWWQWWmn=;.:-. .  .  . . . . .  "                           \
  "..-:=3mWWWWWWWQWWQWWWWQWWWQWQWQWW\n"                                        \
  "QWQWQWWWWQWQWWWWQWWWQWQWWWmmmmwwoooooooooooooouauaoaooouoowwqmmmmmWBWQQWWQ" \
  "WQWQWQWQWWWWmovii|;;::.:.::.:.:.:..:::.:=|nmWWWQWQWWWWWQWQWWWQWWWWWWWQ\n"   \
  "QWWWWWQWQWWWWQWQWWWQWWWWWWQWWWWWWWBBWBWBWmWBWmWWBWBWBWmWBWmmWBWWWWWWQWWWWW" \
  "QWQWQWWWWQWQWmmmwwouaavavvvvvvaaavaavaaaaomWWWWWWWWQWQWWWWWQWWWQWQWQWQ\n"   \
  "QWQWQWWWWWQWQWWWWQWWWQWQWQWWWWWWWWWWWQWWWQWWWQWWWWQWWWQWWWQQWWWWWWQWWWWQWQ" \
  "WWWWWWQQWQWWWQWWWWWWmBWmWmWmWmWmWmWmWmBmWWQWWWQWQWQWWWWQWQWWQWQWWWWWWW\n"   \
  "QWWWWWQWQWWWWWQWQWWQWWWWQWWQWWWWWWQWQWWWQWWQWWQWWQWWQWWWQWWWWWWWWWWWWWWWWW" \
  "WQWQWQWWWWWWWQWQWWQQQWQQWQWQWQWWQWWQWQQQWWQWWWWQWWWWWQWWWWQWWWWWQWQWQW\n"   \
  "QWQWQWWWWQWQWQWWWWWWQWQWWQWQWWQWWWWWWWWWWQWWQWWWWWWWWWQWWWWWQWQWQWQWWWWWWW" \
  "WWWWWWWWWWQWQWWWWQWWWWQWWQWWWWWQWWQWWWQWQWWWQWQWWWQWQWWQWQWWQWQWWWWWWQ\n"   \
  "QWWWWWQWQWWWWWWQWQWQWWWWQWWWWQWWQWQWWQWQWWWQWWQWQWQWQWWWQWQWWWWWWWWWQWQWQW" \
  "QWQWWWQWQWWWWWWQWWWWWQWWWWWQWQWWWQWWWQWWWWQWWWWWWQWWWWQWWWWQWWWWQWQWQW\n"   \
  "QWQWQWWWWWQWQWQWWWWWWQWQWWQWQWWWWWWWQWWWWQWWWQWWWWWWWWQWWWWWQWQWQWQWWWWWWW" \
  "WWWWQWWWWWQWQWQWWQWQWWWQWQWWWWWQWWWQWWWWQWWWQWQWQWWWQWWWQWQWWWQWWWWWWW\n"   \
  "QWWWWWQWQWWWWWWWQWQWQWWWWWWWWWQWQWQWWWQWQWWQWWWQWQWQWQWWQWQWWWWWWWWWQWQWQW" \
  "QWQWWWQWQWWWWWWWWWWWWQWWWWWQWQWWQWQWWQWQWWQWWWWWWWQWWWQWWWWWQWWWQWQWQW\n"   \
  "QWQWQWWWWQWQWQWQWWWWWWQWQWQWQWWWWWWQWQWWWWQWWQWWWWWWWWWQWWWWQWQWQWQWWWWWWW" \
  "WWWQWQWWWWQWQWQWQWQWQWWQWQWWWWQWWWWWWWWWWQWWQWQWQWWWQWWWQWQWWWQWWWWWWQ\n"   \
  "QWWWWWQWQWWWWWWWWQWQWQWWWWWWWWQWQWQWWWWQWQWWWWWQWQWQWQWWWQWQWWWWWQWWQWQWQW" \
  "QWQWWWWQWQWWWWWWWWWWWWQWWWWQWQWWQWQWQWQWQWWWWWWWWWQWWWQWWWWWQWWWQWQWQW\n"   \
  "QWQWQWWWWWQWQWQWQWWWWWWQWQWQWQWWWWWWQWQWWWWQWQWWWWWWWWQWQWWWWQWQWWWQWWWWWW" \
  "WWWWQWQWWWWQWQWQWQWQWQWWQWQWWWWQWWWWWWWWWWQWQWQWQWWWQWWWQWQWWWQWWWWQWW\n"   \
  "QWWWWWQWQWWWWWWQWWWQWQWWWWWWWWWQWQWQWWWWQWWWWWWQWQWQWQWWWWQWQWWWWQWWWQWQWQ" \
  "WQWQWWWWQWQWWWWWWWQWWWWQWWWWQWQWWWQWQWQWQWWWWWWWWQWQWWQWWWWQWQWWQWQWWQ\n"   \
  "QWQWQWW@ $QWf]QW[]QWWWW@ WWWf]QW[]QWWWQB "                                  \
  "$QWf]QW[]"                                                                  \
  "QWWWWQWQWWWWQWQWWQWWWWWWWWQWWQWWWWWWQWQWQWWWQWQWWWQWWWWWQWWWWWWWWQWQWQWQWW" \
  "WWWQWWQWQWWWWQWWWWWW\n"                                                     \
  "QWWWWWQ[.]QW[]QWf]QWWQW[.]WW[]QWf]QWWQW[.]QW[]QWf]"                         \
  "QWWQWWWWWQWWWWWWQWWQWQWQWQWWWWWQWQWQWWWWWQWQWWWWQWWWQWQWWWQWQWQWQWWWWWWWQW" \
  "QWQWWWWWWWQWQWWWQWQW\n"                                                     \
  "QWQWQWW`g-QWf\"\?\?']QWWQW`g-QWf\"\?\?']QWWWW`g-QWf\"\?\?']"                \
  "QWWWQWQWQWWQWQWQWWWWWWWWWWWQWQWWWWWWWQWQWWWWWQWQWWQWWWWWQWWWWWWWWWQWQWQWWW" \
  "WWWWQWQWQWWWWWQWWWWQ\n"                                                     \
  "QWWWWWF<W>4W[_aa/]QWQWF<W>4W[_aa/]QWQWF<W>4W[_aa/"                          \
  "]QWQWWWWWWWWWWWWWWQWQWQWQWQWWWWWQWQWQWWWWWQWQWWWWWWWWQWQWWWQWQWQWQWWWWWWQW" \
  "QWQWQWWWWWQWQWQWWQWQW\n"                                                    \
  "QWQWQW(   )Wf]QW[]QWWW(   )Wf]QW[]QWWW(   "                                 \
  ")Wf]QW[]"                                                                   \
  "QWWWQWQWQWQWQWQWQWWWWWWWWWQWQWQWWWQWWQWQWWWWWQWQWQWQWWWQWQWWWWWQWWQWQWQWWW" \
  "WWWWWQWQWWWWWWWWWWWW\n"                                                     \
  "QWWWW@.QWQ.$[]QW[]QWQD.QWQ.$[]QW[]QWQD.QWQ.$[]QW[]"                         \
  "QWQWWWWWWWWWWQWWWWQWQWQWQWWWWWWWQWWWQWWWWQWQWWWWWWWWWQWWWWWQWQWWWQWWWWWWQW" \
  "QWQWQWWWWQWQWQWQWQWQ\n"                                                     \
  "QWQWW6wWWWwj6jQQ6jQQWgwWWWwj6jQQ6jQQWgwWWWwj6jQQ6jQQWWQWQWQWQWQWWQWQWWWWWW" \
  "WQWQWQWQWWQWWWQWQWWWWQWQWQWQWWWQWQWWWWQWQWWQWQWQWWWWWWWWQWQWWWWWWWWWQW\n"   \
  "QWWWQQWWWWWQQQQQWQQQWWWWWWWQQQQQWQQQWWWWWWWQQQQQWQQQWWWWWWWWWQWWWWWWWQWQWQ" \
  "WWWWWWQWWWWWQWWWWWQWQWWWWWQWWQWWWWWQWQWWWWWWWWWWWQWQWQWQWWWWQWQWQWQWWW\n"   \
  "QWQWWWWWWWWWQQWWQWQWWWWWWWWWQQWWQWQWWWWWWWWQWQQWWQWWWQWQWQWQWWWQWQWQWWWWWW" \
  "WQWQWQWWWQWQWWQWQWWWWWQWQWWWQWWQWQWWQWWWQWQWQWQWQWWWWWWWWQWWWWWWWWWQWQ\n"   \
  "QWWWQWWQWQWQWWWQWWWWQWQWQWQWWWWQWWWWQWQWQWQWWWWWQWWQWWWWWWWWQWQWWWWWWQWQWQ" \
  "WWWWQWWQWWWWWQWWWWQWQWWWWQWQWWWWWWQWWWQWWWWWWWWWWWQWQWQWQWWQWQWQWQWWWW\n"   \
  "QWQWWWQWWWWWWWQWWQWQWWWWWWWQWQWWWQWQWWWWWWWWQWQWWWQWWQWQWQWQWWWWQWQWQWWWWW" \
  "QWQWWWWWWQWQWWWQWQWWWWQWQWWWWQWQWQWWQWWWQWQWQWQWQWWWWWWWWWQWWWWWWWQWQW\n"   \
  "QWWWQWWWQWQWQWWWWWWWm $Q@ mP` -4QW QWW QWQWQ   ~4QW QW   ~4QW ]QW Q[]     " \
  " QWW@^ -4WQB WW/]WW[<WWQWWWQWWWWWWWQWWQWWWWWWWWQWWQWQWQWQWWWQWQWQWWWWQ\n"   \
  "QWQWWWQWWWWWWWQWQWQWWL)W'j@ yWw.$Q QWQ QWWQQ QQw $Q QQ QQw $Q :QW "         \
  "Q[]QW[]QWWWQf<WmyQW[.]WQ,4E_"                                               \
  "mQWWWQWWWQWQWQWWWWWWQWQWQWQWWWWWWWWWWWQWWWWWWQWQWW\n"                       \
  "QWWWQWWWQWQWQWWWWWWQWW/\"<Qf]WWW[]Q QWQ QWQWQ QWW[]Q QQ QWW[]Q L]W "        \
  "Q6jQQ[]QWWQWL-?9QWW`g-QW6-'"                                                \
  "yQQWQWWWQWWWWWWWQWQWQWWWWWWWWQWQWQWQWQWWWQWQWQWWWWQ\n"                      \
  "QWQWWWQWWWWWWQWQWQWWWQQ QW[]WWW[]Q QWQ QWWWQ QWW[]Q QQ QWW[]Q Q,4 "         \
  "QQQQQ[]QWQWWQga,)WF<W>4WQ[]"                                                \
  "QWWWWWQWWWQWQWQWWWWWWWQWQWQWQWWWWWQWWWQWQWWWWWWQWQW\n"                      \
  "QWWWQWWWQWQWQWWWWWQWQWQ WWk-QWW'jQ WW@ QWQWQ QWW'jQ QQ QWW'jQ QL+ "         \
  "QWWQWf]QWWWWWWWm Q(   "                                                     \
  ")WW[]QWQWQWWWQWWQWWWQWQWQWQWWWWWQWWQWQWWWQWWWWWQWQWQWWWW\n"                 \
  "QWQWWWQWWQWWWWQWQWWWWWQ QWW,\"?'<QQc-?']QWWQQ \?\?'_QQ QQ \?\?'_QQ QQ/ "    \
  "QWWWW[]QWWQWf\"?^_@.QWQ.$Wf]"                                               \
  "WWWWWWQWWQWWWQWWWWWWWWWQWQWWWWWWWWQWWWQWQWWWWWWWQWQ\n"                      \
  "QWWWQWWWQWWWQWWWWWQWQWQaWWQQwawWWWWwawWWWWWQaaawQQQaWQaaawQQQaWWmaWWQWQ6jQ" \
  "QWWWQwaaQ6wWWWwjQ6jQQWQWQWWQWWQWWWQWQWQWQWWWWWQWQWQWQWWQWWWWWQWQWQWWWW\n"   \
  "QWQWWWQWWWQWWQWQWQWWWWWWWWWWWWWWWWWWWWWWWWQWWWWWWWWWWWWWWWWWWWWWWWWWWWWQQQ" \
  "WWQWWWWWWWWWWWWQQQQQQWWWWWQWWWWWQWWWWWWWWQWQWQWWWWWWWWQWWQWQWWWWQWWQWQ\n"   \
  "QWWWQWWWQWWWQWWWWWWQWQWWWQWWWWWWWWWQWWWWWWWWWWWWWWQWWWWWWWWWQWWWQWWQWQWWQW" \
  "QWWWWWWWWWQWWWWWWWWQWWQWQWWWQWQWWWQWQWQWQWWWWWWQWQWQWQWWWWWWQWQWWWQWWW\n"   \
  "QWQWWWQWWQWQWWWQWQWWWWWQWWWQWQWWWWQWWWWWWQWQWWWWWQWWWQWWWWWQWWQWWWQWWWWQWW" \
  "WWQWQWWWWQWWQWQWQWQWWWWWWWQWWWWWQWWWWWWWWWQWQWQWWWWWWWWQWQWQWWWWQWWWQW\n"   \
  "QWWWQWWWQWWWWQWWWWWQWQWWQWQWWWWWQWWWQWWQWWWWQWQWQWWWQWWQWQWWWWWWQWWWQWQWWW" \
  "QWWWWWQWQWWWWWWWWWWWQWQWQWWWQWQWWQWQWQWQWQWWWWWWQWQWQWQWWWWWWQWQWWQWWW\n"   \
  "QWQWWWQWWWQWWWWQWQWWWWQWWWWWQWQWWWQWWWQWWQWQWWW[     ]f]WWf]Q[   ]QWWW "    \
  "=WQ' QWQ[]WWWP~  \"QQ QWP^  \"QWQW.$W( $W(jWP` -4QQ   4WW[  "               \
  "-?WWWQWWWWQWWQW\n"                                                          \
  "QWWWQWWWQWWWQWQWWWWQWQWWQWQWWWWWQWWQWQWWWWWWWQWQWW QWQ[]QW[]Qf]WQQWWQQ "    \
  ";$D< QWW..WWD.wQQwWQ QD`wWQwWWWQ[]Q /jW mD.wWw.$Q Qg "                      \
  "WWf]Qm/)WWWWQWQWWWWQ\n"                                                     \
  "QWQWWWQWWQWQWWWWQWQWWWWQWWWWQWQWWWQWWWWQWQWQWWWWQQ "                        \
  "QWWf\"\?\?']Q[\"\?\?4QWQW L][j QWf]c]Qf]WP\?\?WQ "                          \
  "Qf]BWWWWWQWL)E:k)E:Qf]WWQ[]Q QE.QW[]QWm QWWQWWWWQWQW\n"                     \
  "QWWWQWWWQWWWWQWQWWWWQWQWWWQWWWWWQWWWQWWWWWWWQWQWWQ QWQ[_aa/]Q[_aajQQWQ "    \
  "Q:`Q QW'dh=Q[]W6a QQ Q[]WWWWWQWWm f]m-f]W[]WWW[]Q   jQQf]WWW "              \
  "QWQWWWQWWWWW\n"                                                             \
  "QWQWWWQWWWQWQWWWWQWQWWWWQWWWQWQWWQWQWWQWQWQWWWWWQQ QWWf]QW[]Qf]QWQQWWQ "    \
  "Qc]W QE    $L+WWQ QQ Qk-QWWQWWWWQ,'jW,'jWk-QWW'jQ "                         \
  "Qc)WW[]QWF:QWWWQWWWQWQW\n"                                                  \
  "QWWWQWWWQWWWWWQWQWWWWQWQWWQWWWWQWWWWWQWWWWWQWQWQWQ QWW[]QW[]Q[)\?\?4QWQQ "  \
  "QWWW Q[]WW[]W,\"?\"_QQ QW/-?!'QWQWW[ mQ[ mQW,\"?'<QQ "                      \
  "QW,4W[)?\".jQQWQWWQWWWWQ\n"                                                 \
  "QWQWWWQWWQWQWQWWWWQWWWWWWWWWQWQWWQWQWWWQWQWWWWWWQWaWWQgjQW6jQ6aaajQQWQaWWW" \
  "WaWamQWmaWWwawWWQaWWQgaayWWWWQ6aQW6wWWQQwawWWWaWWmaW6aaamQQWWWWWWWQWQW\n"   \
  "QWWWQWWWQWWWWWWQWWWWQWQWQWQWWQWWWWWWWQWWWWWQWQWQWWWWWWWQQQQQQQWWWWQWWWWWWW" \
  "WWWWWWWQWWWWWBWWWWWWWWWWWWQWQWQWWQWWWWWWWWWWWWWWWWWQWWWWQQWQWQWQWQWWWW\n"   \
  "QWQWWWQWWWQWQWQWWQWQWWWWWWWQWWWQWQWQWWWQWQWWWWWWWQWWQWWWWWWWQWWWWWWQWQWWWQ" \
  "WWWWQWQWWQWWWWWWWWWWQWWWWWWWWWWWQWWWWWWWWWWWWWWQWQWWWWWWWWWWWWWWWWWQWQ\n"   \
  "QWWWQWWWQWWWWWWWWWWWWQWQWQWWWQWWWWWWQWQWWWWQWQWQWWWQWWQWQWQWWWQWWWQWWWWQWW" \
  "WQWQWWWWQWWQWQWQWQWQWWWWWQWQWQWQWWWQWWWQWWWWWQWWWWWQWQWWWQWQWQWQWQWWWW\n\n"

#endif
