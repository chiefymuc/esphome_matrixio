/*
FIR filter coefficients from: https://github.com/matrix-io/matrixio_hal_esp32
*/

#pragma once
#include <valarray>

namespace esphome {
namespace matrixio {

struct FIRCoeff {
  uint32_t rate_;
  std::valarray<int16_t> coeff_;
};

const FIRCoeff FIR_default[] = {
    {8000u,
     {-26,   -2,    -26,  -1,    -17,   -19,   0,     -30,  1,     -13,   -24,
      14,    -33,   10,   5,     -23,   51,    -20,   37,   53,    -12,   116,
      12,    74,    133,  0,     196,   58,    96,    224,  -10,   253,   89,
      55,    287,   -91,  233,   65,    -103,  279,   -280, 85,    -32,   -424,
      183,   -588,  -211, -182,  -915,  32,    -977,  -649, -281,  -1578, -62,
      -1368, -1229, -71,  -2553, 188,   -1658, -2337, 1862, -6351, 5228,  24468,
      5228,  -6351, 1862, -2337, -1658, 188,   -2553, -71,  -1229, -1368, -62,
      -1578, -281,  -649, -977,  32,    -915,  -182,  -211, -588,  183,   -424,
      -32,   85,    -280, 279,   -103,  65,    233,   -91,  287,   55,    89,
      253,   -10,   224,  96,    58,    196,   0,     133,  74,    12,    116,
      -12,   53,    37,   -20,   51,    -23,   5,     10,   -33,   14,    -24,
      -13,   1,     -30,  0,     -19,   -17,   -1}},
    {12000u,
     {2,     6,     2,     25,   9,     2,     31,   15,    3,     39,    22,
      1,     50,    31,    -1,   60,    41,    -10,  68,    51,    -27,   70,
      59,    -55,   62,    64,   -95,   41,    63,   -151,  3,     56,    -223,
      -54,   43,    -312,  -136, 25,    -416,  -241, 6,     -533,  -372,  -7,
      -658,  -529,  -8,    -786, -714,  15,    -910, -936,  89,    -1024, -1216,
      253,   -1120, -1619, 613,  -1194, -2377, 1574, -1241, -5149, 8368,  20600,
      8368,  -5149, -1241, 1574, -2377, -1194, 613,  -1619, -1120, 253,   -1216,
      -1024, 89,    -936,  -910, 15,    -714,  -786, -8,    -529,  -658,  -7,
      -372,  -533,  6,     -241, -416,  25,    -136, -312,  43,    -54,   -223,
      56,    3,     -151,  63,   41,    -95,   64,   62,    -55,   59,    70,
      -27,   51,    68,    -10,  41,    60,    -1,   31,    50,    1,     22,
      39,    3,     15,    31,   2,     9,     25}},
    {16000u,
     {-3,    18,    -3,   19,    3,     1,     21,    -9,   19,    4,     -7,
      29,    -22,   16,   5,     -30,   36,    -45,   0,    4,     -75,   37,
      -82,   -38,   0,    -150,  24,    -131,  -113,  -4,   -257,  -8,    -187,
      -232,  -9,    -394, -71,   -237,  -401,  -7,    -553, -167,  -262,  -625,
      13,    -720,  -303, -229,  -916,  80,    -877,  -497, -76,   -1319, 245,
      -1006, -820,  380,  -2055, 721,   -1091, -1742, 2474, -5713, 5863,  25086,
      5863,  -5713, 2474, -1742, -1091, 721,   -2055, 380,  -820,  -1006, 245,
      -1319, -76,   -497, -877,  80,    -916,  -229,  -303, -720,  13,    -625,
      -262,  -167,  -553, -7,    -401,  -237,  -71,   -394, -9,    -232,  -187,
      -8,    -257,  -4,   -113,  -131,  24,    -150,  0,    -38,   -82,   37,
      -75,   4,     0,    -45,   36,    -30,   5,     16,   -22,   29,    -7,
      4,     19,    -9,   21,    1,     3,     19}},
    {22050u,
     {-15,   1,     -15,  7,     -13,  -7,   2,     -26,  5,     -19,   -21,
      4,     -47,   1,    -29,   -50,  5,    -82,   -17,  -41,   -100,  4,
      -128,  -54,   -49,  -175,  1,    -181, -117,  -49,  -277,  -14,   -232,
      -215,  -35,   -400, -43,   -265, -354, 0,     -538, -95,   -261,  -543,
      70,    -678,  -182, -190,  -799, 189,  -807,  -329, 2,     -1174, 404,
      -911,  -615,  499,  -1894, 920,  -979, -1518, 2622, -5551, 6084,  25202,
      6084,  -5551, 2622, -1518, -979, 920,  -1894, 499,  -615,  -911,  404,
      -1174, 2,     -329, -807,  189,  -799, -190,  -182, -678,  70,    -543,
      -261,  -95,   -538, 0,     -354, -265, -43,   -400, -35,   -215,  -232,
      -14,   -277,  -49,  -117,  -181, 1,    -175,  -49,  -54,   -128,  4,
      -100,  -41,   -17,  -82,   5,    -50,  -29,   1,    -47,   4,     -21,
      -19,   5,     -26,  2,     -7,   -13,  7}},
    {24000u,
     {-19,   2,     -19,  3,     -12,  -14,  3,     -29,  0,     -16,   -31,
      3,     -49,   -10,  -23,   -62,  3,    -80,   -33,  -30,   -112,  0,
      -119,  -75,   -34,  -185,  -7,   -163, -142,  -30,  -279,  -27,   -200,
      -240,  -12,   -390, -61,   -220, -376, 24,    -511, -117,  -203,  -556,
      91,    -632,  -206, -123,  -799, 206,  -742,  -353, 75,    -1158, 414,
      -830,  -636,  570,  -1860, 921,  -886, -1534, 2684, -5499, 6075,  25293,
      6075,  -5499, 2684, -1534, -886, 921,  -1860, 570,  -636,  -830,  414,
      -1158, 75,    -353, -742,  206,  -799, -123,  -206, -632,  91,    -556,
      -203,  -117,  -511, 24,    -376, -220, -61,   -390, -12,   -240,  -200,
      -27,   -279,  -30,  -142,  -163, -7,   -185,  -34,  -75,   -119,  0,
      -112,  -30,   -33,  -80,   3,    -62,  -23,   -10,  -49,   3,     -31,
      -16,   0,     -29,  3,     -14,  -12,  3}},
    {32000u,
     {-25,   -1,    -25,  -1,    -17,  -20,  -1,    -34,  -5,    -21,   -36,
      0,     -54,   -15,  -28,   -66,  -1,   -83,   -36,  -33,   -114,  -1,
      -119,  -73,   -31,  -180,  -1,   -154, -131,  -17,  -264,  -9,    -180,
      -217,  12,    -361, -28,   -184, -337, 67,    -465, -67,   -150,  -499,
      152,   -568,  -138, -52,   -725, 283,  -661,  -269, 162,   -1068, 506,
      -735,  -539,  669,  -1758, 1023, -782, -1428, 2790, -5391, 6180,  25393,
      6180,  -5391, 2790, -1428, -782, 1023, -1758, 669,  -539,  -735,  506,
      -1068, 162,   -269, -661,  283,  -725, -52,   -138, -568,  152,   -499,
      -150,  -67,   -465, 67,    -337, -184, -28,   -361, 12,    -217,  -180,
      -9,    -264,  -17,  -131,  -154, -1,   -180,  -31,  -73,   -119,  -1,
      -114,  -33,   -36,  -83,   -1,   -66,  -28,   -15,  -54,   0,     -36,
      -21,   -5,    -34,  -1,    -20,  -17,  -1}},
    {44100u,
     {0,     -23,   0,  -14,   -24,   1,     -19,   -29,   -1, -26,   -36,   0,
      -37,   -46,   2,  -52,   -57,   5,     -73,   -70,   8,  -99,   -82,   12,
      -131,  -94,   17, -170,  -103,  24,    -216,  -108,  30, -270,  -108,  38,
      -333,  -99,   46, -406,  -80,   54,    -491,  -46,   63, -591,  7,     70,
      -713,  91,    78, -870,  223,   84,    -1088, 438,   89, -1436, 838,   93,
      -2151, 1825,  96, -4896, 8627,  21950, 8627,  -4896, 96, 1825,  -2151, 93,
      838,   -1436, 89, 438,   -1088, 84,    223,   -870,  78, 91,    -713,  70,
      7,     -591,  63, -46,   -491,  54,    -80,   -406,  46, -99,   -333,  38,
      -108,  -270,  30, -108,  -216,  24,    -103,  -170,  17, -94,   -131,  12,
      -82,   -99,   8,  -70,   -73,   5,     -57,   -52,   2,  -46,   -37,   0,
      -36,   -26,   -1, -29,   -19,   1,     -24,   -14}},
    {48000u,
     {-19,  -20,   -19,   -1,   -16,   -26,   -1,   -12,   -36,   -7,   -7,
      -48,  -20,   1,     -57,  -43,   5,     -60,  -74,   7,     -52,  -113,
      -2,   -32,   -152,  -31,  0,     -181,  -84,  33,    -188,  -162, 60,
      -163, -256,  62,    -100, -352,  22,    -2,   -429,  -72,   118,  -460,
      -230, 240,   -416,  -447, 329,   -273,  -710, 344,   -3,    -992, 229,
      421,  -1262, -103,  1089, -1486, -901,  2372, -1634, -3821, 9465, 20180,
      9465, -3821, -1634, 2372, -901,  -1486, 1089, -103,  -1262, 421,  229,
      -992, -3,    344,   -710, -273,  329,   -447, -416,  240,   -230, -460,
      118,  -72,   -429,  -2,   22,    -352,  -100, 62,    -256,  -163, 60,
      -162, -188,  33,    -84,  -181,  0,     -31,  -152,  -32,   -2,   -113,
      -52,  7,     -74,   -60,  5,     -43,   -57,  1,     -20,   -48,  -7,
      -7,   -36,   -12,   -1,   -26,   -16,   -1}},
    {96000u,
     {-20,   -11,   -20, -18,  -6,   4,     4,    -7,   -25, -31,   -19,   1,
      13,    1,     -32, -56,  -48,  -10,   23,   19,   -29, -86,   -98,   -47,
      26,    54,    0,   -103, -165, -120,  1,    95,   64,  -84,   -231,  -235,
      -74,   120,   168, -1,   -263, -384,  -230, 92,   301, 177,   -215,  -549,
      -497,  -46,   439, 501,  -1,   -699,  -958, -432, 554, 1154,  658,   -805,
      -2135, -1898, 620, 4726, 8542, 10093, 8542, 4726, 620, -1898, -2135, -805,
      658,   1154,  554, -432, -958, -699,  -1,   501,  439, -46,   -497,  -549,
      -215,  177,   301, 92,   -230, -384,  -263, -1,   168, 120,   -74,   -235,
      -231,  -84,   64,  95,   1,    -120,  -165, -103, 0,   54,    26,    -47,
      -98,   -86,   -29, 19,   23,   -10,   -48,  -56,  -32, 1,     13,    1,
      -19,   -31,   -25, -7,   4,    4,     -6,   -18}},
    {0u, {0}}};
};
}