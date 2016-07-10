/* Units for temperature below (on x axis) is in 0.1DegC as
   required by the battery driver. Note the resolution used
   here to compute the table was done for DegC to milli-volts.
   In consideration to limit the size of the table for the given
   temperature range below, the result is linearly interpolated
   and provided to the battery driver in the units desired for
   their framework which is 0.1DegC. True resolution of 0.1DegC
   will result in the below table size to increase by 10 times */

static const struct qpnp_vadc_map_pt adcmap_btm_threshold[] = {
        {-300,  1538},
        {-200,  1538},
        {-100,  1384},
        {-90,   1372},
        {-80,   1360},
        {-70,   1346},
        {-60,   1335},
        {-50,   1322},
        {-40,   1308},
        {-30,   1298},
        {-20,   1282},
        {-10,   1269},
        {0,     1255},
        {10,    1251},
        {20,    1238},
        {30,    1225},
        {40,    1212},
        {50,    1199},
        {60,    1186},
        {70,    1173},
        {80,    1160},
        {90,    1147},
        {100,   1122},
        {110,   1111},
        {120,   1097},
        {130,   1086},
        {140,   1074},
        {150,   1060},
        {160,   1048},
        {170,   1035},
        {180,   1021},
        {190,   1009},
        {200,   998},
        {210,   987},
        {220,   977},
        {230,   966},
        {240,   952},
        {250,   943},
        {260,   932},
        {270,   923},
        {280,   911},
        {290,   902},
        {300,   891},
        {310,   881},
        {320,   871},
        {330,   860},
        {340,   849},
        {350,   839},
        {360,   832},
        {370,   823},
        {380,   813},
        {390,   807},
        {400,   801},
        {410,   790},
        {420,   779},
        {430,   774},
        {440,   769},
        {450,   760},
        {460,   750},
        {470,   742},
        {480,   738},
        {490,   730},
        {500,   721},
        {510,   714},
        {520,   713},
        {530,   707},
        {540,   701},
        {550,   695},
        {560,   689},
        {570,   683},
        {580,   677},
        {590,   671},
        {600,   665},
        {610,   659},
        {620,   653},
        {630,   647},
        {640,   641},
        {650,   635},
        {660,   629},
        {670,   623},
        {680,   617},
        {690,   611},
        {700,   496},
        {710,   490},
        {720,   484},
        {730,   478},
        {740,   472},
        {750,   466},
        {760,   460},
        {770,   454},
        {780,   448},
        {790,   442}
};

