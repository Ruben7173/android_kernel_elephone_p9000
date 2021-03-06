#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H


// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             24000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          2800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954},
	{-15, 360850},
	{-10, 271697},
	{ -5, 206463},
	{  0, 158214},
	{  5, 122259},
	{ 10, 95227},
	{ 15, 74730},
	{ 20, 59065},
	{ 25, 47000},
	{ 30, 37643},
	{ 35, 30334},
	{ 40, 24591},
	{ 45, 20048},
	{ 50, 16433},
	{ 55, 13539},
	{ 60, 11210}
};
#endif

// T0 -10C
BATTERY_PROFILE_STRUCT battery_profile_t0[] =
{
	{0, 4325},
	{1, 4316},
	{2, 4307},
	{3, 4299},
	{4, 4288},
	{6, 4257},
	{7, 4247},
	{8, 4237},
	{10, 4217},
	{11, 4207},
	{12, 4198},
	{13, 4180},
	{14, 4170},
	{15, 4161},
	{16, 4152},
	{17, 4143},
	{18, 4134},
	{20, 4107},
	{21, 4098},
	{22, 4090},
	{23, 4083},
	{24, 4077},
	{26, 4065},
	{27, 4040},
	{28, 4027},
	{29, 4015},
	{30, 4006},
	{31, 3997},
	{32, 3985},
	{33, 3981},
	{34, 3977},
	{36, 3965},
	{37, 3959},
	{38, 3953},
	{40, 3933},
	{41, 3926},
	{42, 3917},
	{43, 3909},
	{44, 3899},
	{46, 3872},
	{47, 3866},
	{48, 3860},
	{50, 3849},
	{51, 3844},
	{52, 3840},
	{53, 3832},
	{54, 3828},
	{56, 3821},
	{57, 3818},
	{58, 3815},
	{60, 3807},
	{61, 3804},
	{62, 3801},
	{63, 3799},
	{64, 3797},
	{66, 3790},
	{67, 3788},
	{68, 3786},
	{70, 3782},
	{71, 3780},
	{72, 3776},
	{73, 3774},
	{74, 3772},
	{76, 3766},
	{77, 3763},
	{78, 3760},
	{80, 3750},
	{81, 3748},
	{82, 3745},
	{84, 3737},
	{86, 3722},
	{87, 3716},
	{88, 3711},
	{90, 3698},
	{91, 3694},
	{92, 3692},
	{93, 3691},
	{94, 3689},
	{96, 3677},
	{97, 3667},
	{98, 3591},
	{100, 3464}
};

BATTERY_PROFILE_STRUCT battery_profile_t1[] =
{
	{0, 4325},
	{1, 4316},
	{2, 4307},
	{3, 4299},
	{4, 4288},
	{6, 4257},
	{7, 4247},
	{8, 4237},
	{10, 4217},
	{11, 4207},
	{12, 4198},
	{13, 4180},
	{14, 4170},
	{15, 4161},
	{16, 4152},
	{17, 4143},
	{18, 4134},
	{20, 4107},
	{21, 4098},
	{22, 4090},
	{23, 4083},
	{24, 4077},
	{26, 4065},
	{27, 4040},
	{28, 4027},
	{29, 4015},
	{30, 4006},
	{31, 3997},
	{32, 3985},
	{33, 3981},
	{34, 3977},
	{36, 3965},
	{37, 3959},
	{38, 3953},
	{40, 3933},
	{41, 3926},
	{42, 3917},
	{43, 3909},
	{44, 3899},
	{46, 3872},
	{47, 3866},
	{48, 3860},
	{50, 3849},
	{51, 3844},
	{52, 3840},
	{53, 3832},
	{54, 3828},
	{56, 3821},
	{57, 3818},
	{58, 3815},
	{60, 3807},
	{61, 3804},
	{62, 3801},
	{63, 3799},
	{64, 3797},
	{66, 3790},
	{67, 3788},
	{68, 3786},
	{70, 3782},
	{71, 3780},
	{72, 3776},
	{73, 3774},
	{74, 3772},
	{76, 3766},
	{77, 3763},
	{78, 3760},
	{80, 3750},
	{81, 3748},
	{82, 3745},
	{84, 3737},
	{86, 3722},
	{87, 3716},
	{88, 3711},
	{90, 3698},
	{91, 3694},
	{92, 3692},
	{93, 3691},
	{94, 3689},
	{96, 3677},
	{97, 3667},
	{98, 3591},
	{100, 3464}
};

BATTERY_PROFILE_STRUCT battery_profile_t2[] =
{
	{0, 4325},
	{1, 4316},
	{2, 4307},
	{3, 4299},
	{4, 4288},
	{6, 4257},
	{7, 4247},
	{8, 4237},
	{10, 4217},
	{11, 4207},
	{12, 4198},
	{13, 4180},
	{14, 4170},
	{15, 4161},
	{16, 4152},
	{17, 4143},
	{18, 4134},
	{20, 4107},
	{21, 4098},
	{22, 4090},
	{23, 4083},
	{24, 4077},
	{26, 4065},
	{27, 4040},
	{28, 4027},
	{29, 4015},
	{30, 4006},
	{31, 3997},
	{32, 3985},
	{33, 3981},
	{34, 3977},
	{36, 3965},
	{37, 3959},
	{38, 3953},
	{40, 3933},
	{41, 3926},
	{42, 3917},
	{43, 3909},
	{44, 3899},
	{46, 3872},
	{47, 3866},
	{48, 3860},
	{50, 3849},
	{51, 3844},
	{52, 3840},
	{53, 3832},
	{54, 3828},
	{56, 3821},
	{57, 3818},
	{58, 3815},
	{60, 3807},
	{61, 3804},
	{62, 3801},
	{63, 3799},
	{64, 3797},
	{66, 3790},
	{67, 3788},
	{68, 3786},
	{70, 3782},
	{71, 3780},
	{72, 3776},
	{73, 3774},
	{74, 3772},
	{76, 3766},
	{77, 3763},
	{78, 3760},
	{80, 3750},
	{81, 3748},
	{82, 3745},
	{84, 3737},
	{86, 3722},
	{87, 3716},
	{88, 3711},
	{90, 3698},
	{91, 3694},
	{92, 3692},
	{93, 3691},
	{94, 3689},
	{96, 3677},
	{97, 3667},
	{98, 3591},
	{100, 3464}
};

BATTERY_PROFILE_STRUCT battery_profile_t3[] =
{
	{0, 4325},
	{1, 4316},
	{2, 4307},
	{3, 4299},
	{4, 4288},
	{6, 4257},
	{7, 4247},
	{8, 4237},
	{10, 4217},
	{11, 4207},
	{12, 4198},
	{13, 4180},
	{14, 4170},
	{15, 4161},
	{16, 4152},
	{17, 4143},
	{18, 4134},
	{20, 4107},
	{21, 4098},
	{22, 4090},
	{23, 4083},
	{24, 4077},
	{26, 4065},
	{27, 4040},
	{28, 4027},
	{29, 4015},
	{30, 4006},
	{31, 3997},
	{32, 3985},
	{33, 3981},
	{34, 3977},
	{36, 3965},
	{37, 3959},
	{38, 3953},
	{40, 3933},
	{41, 3926},
	{42, 3917},
	{43, 3909},
	{44, 3899},
	{46, 3872},
	{47, 3866},
	{48, 3860},
	{50, 3849},
	{51, 3844},
	{52, 3840},
	{53, 3832},
	{54, 3828},
	{56, 3821},
	{57, 3818},
	{58, 3815},
	{60, 3807},
	{61, 3804},
	{62, 3801},
	{63, 3799},
	{64, 3797},
	{66, 3790},
	{67, 3788},
	{68, 3786},
	{70, 3782},
	{71, 3780},
	{72, 3776},
	{73, 3774},
	{74, 3772},
	{76, 3766},
	{77, 3763},
	{78, 3760},
	{80, 3750},
	{81, 3748},
	{82, 3745},
	{84, 3737},
	{86, 3722},
	{87, 3716},
	{88, 3711},
	{90, 3698},
	{91, 3694},
	{92, 3692},
	{93, 3691},
	{94, 3689},
	{96, 3677},
	{97, 3667},
	{98, 3591},
	{100, 3464}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUCT battery_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUCT r_profile_t0[] =
{
	{285, 4325},
	{280, 4316},
	{276, 4307},
	{272, 4299},
	{269, 4288},
	{270, 4257},
	{267, 4247},
	{265, 4237},
	{265, 4217},
	{265, 4207},
	{265, 4198},
	{267, 4180},
	{266, 4170},
	{265, 4161},
	{266, 4152},
	{267, 4143},
	{267, 4134},
	{257, 4107},
	{256, 4098},
	{255, 4090},
	{268, 4083},
	{282, 4077},
	{315, 4065},
	{300, 4040},
	{283, 4027},
	{267, 4015},
	{257, 4006},
	{247, 3997},
	{247, 3985},
	{253, 3981},
	{260, 3977},
	{265, 3965},
	{270, 3959},
	{275, 3953},
	{276, 3933},
	{275, 3926},
	{268, 3917},
	{262, 3909},
	{251, 3899},
	{220, 3872},
	{217, 3866},
	{215, 3860},
	{207, 3849},
	{204, 3844},
	{202, 3840},
	{200, 3832},
	{200, 3828},
	{198, 3821},
	{197, 3818},
	{197, 3815},
	{200, 3807},
	{198, 3804},
	{197, 3801},
	{198, 3799},
	{200, 3797},
	{197, 3790},
	{197, 3788},
	{197, 3786},
	{197, 3782},
	{197, 3780},
	{197, 3776},
	{199, 3774},
	{202, 3772},
	{205, 3766},
	{205, 3763},
	{205, 3760},
	{211, 3750},
	{217, 3748},
	{223, 3745},
	{232, 3737},
	{240, 3722},
	{232, 3716},
	{225, 3711},
	{205, 3698},
	{215, 3694},
	{241, 3692},
	{267, 3691},
	{267, 3689},
	{267, 3677},
	{267, 3667},
	{267, 3591},
	{267, 3464}
};

R_PROFILE_STRUCT r_profile_t1[] =
{
		{285, 4325},
	{280, 4316},
	{276, 4307},
	{272, 4299},
	{269, 4288},
	{270, 4257},
	{267, 4247},
	{265, 4237},
	{265, 4217},
	{265, 4207},
	{265, 4198},
	{267, 4180},
	{266, 4170},
	{265, 4161},
	{266, 4152},
	{267, 4143},
	{267, 4134},
	{257, 4107},
	{256, 4098},
	{255, 4090},
	{268, 4083},
	{282, 4077},
	{315, 4065},
	{300, 4040},
	{283, 4027},
	{267, 4015},
	{257, 4006},
	{247, 3997},
	{247, 3985},
	{253, 3981},
	{260, 3977},
	{265, 3965},
	{270, 3959},
	{275, 3953},
	{276, 3933},
	{275, 3926},
	{268, 3917},
	{262, 3909},
	{251, 3899},
	{220, 3872},
	{217, 3866},
	{215, 3860},
	{207, 3849},
	{204, 3844},
	{202, 3840},
	{200, 3832},
	{200, 3828},
	{198, 3821},
	{197, 3818},
	{197, 3815},
	{200, 3807},
	{198, 3804},
	{197, 3801},
	{198, 3799},
	{200, 3797},
	{197, 3790},
	{197, 3788},
	{197, 3786},
	{197, 3782},
	{197, 3780},
	{197, 3776},
	{199, 3774},
	{202, 3772},
	{205, 3766},
	{205, 3763},
	{205, 3760},
	{211, 3750},
	{217, 3748},
	{223, 3745},
	{232, 3737},
	{240, 3722},
	{232, 3716},
	{225, 3711},
	{205, 3698},
	{215, 3694},
	{241, 3692},
	{267, 3691},
	{267, 3689},
	{267, 3677},
	{267, 3667},
	{267, 3591},
	{267, 3464}
};

R_PROFILE_STRUCT r_profile_t2[] =
{
		{285, 4325},
	{280, 4316},
	{276, 4307},
	{272, 4299},
	{269, 4288},
	{270, 4257},
	{267, 4247},
	{265, 4237},
	{265, 4217},
	{265, 4207},
	{265, 4198},
	{267, 4180},
	{266, 4170},
	{265, 4161},
	{266, 4152},
	{267, 4143},
	{267, 4134},
	{257, 4107},
	{256, 4098},
	{255, 4090},
	{268, 4083},
	{282, 4077},
	{315, 4065},
	{300, 4040},
	{283, 4027},
	{267, 4015},
	{257, 4006},
	{247, 3997},
	{247, 3985},
	{253, 3981},
	{260, 3977},
	{265, 3965},
	{270, 3959},
	{275, 3953},
	{276, 3933},
	{275, 3926},
	{268, 3917},
	{262, 3909},
	{251, 3899},
	{220, 3872},
	{217, 3866},
	{215, 3860},
	{207, 3849},
	{204, 3844},
	{202, 3840},
	{200, 3832},
	{200, 3828},
	{198, 3821},
	{197, 3818},
	{197, 3815},
	{200, 3807},
	{198, 3804},
	{197, 3801},
	{198, 3799},
	{200, 3797},
	{197, 3790},
	{197, 3788},
	{197, 3786},
	{197, 3782},
	{197, 3780},
	{197, 3776},
	{199, 3774},
	{202, 3772},
	{205, 3766},
	{205, 3763},
	{205, 3760},
	{211, 3750},
	{217, 3748},
	{223, 3745},
	{232, 3737},
	{240, 3722},
	{232, 3716},
	{225, 3711},
	{205, 3698},
	{215, 3694},
	{241, 3692},
	{267, 3691},
	{267, 3689},
	{267, 3677},
	{267, 3667},
	{267, 3591},
	{267, 3464}
};

R_PROFILE_STRUCT r_profile_t3[] =
{
		{285, 4325},
	{280, 4316},
	{276, 4307},
	{272, 4299},
	{269, 4288},
	{270, 4257},
	{267, 4247},
	{265, 4237},
	{265, 4217},
	{265, 4207},
	{265, 4198},
	{267, 4180},
	{266, 4170},
	{265, 4161},
	{266, 4152},
	{267, 4143},
	{267, 4134},
	{257, 4107},
	{256, 4098},
	{255, 4090},
	{268, 4083},
	{282, 4077},
	{315, 4065},
	{300, 4040},
	{283, 4027},
	{267, 4015},
	{257, 4006},
	{247, 3997},
	{247, 3985},
	{253, 3981},
	{260, 3977},
	{265, 3965},
	{270, 3959},
	{275, 3953},
	{276, 3933},
	{275, 3926},
	{268, 3917},
	{262, 3909},
	{251, 3899},
	{220, 3872},
	{217, 3866},
	{215, 3860},
	{207, 3849},
	{204, 3844},
	{202, 3840},
	{200, 3832},
	{200, 3828},
	{198, 3821},
	{197, 3818},
	{197, 3815},
	{200, 3807},
	{198, 3804},
	{197, 3801},
	{198, 3799},
	{200, 3797},
	{197, 3790},
	{197, 3788},
	{197, 3786},
	{197, 3782},
	{197, 3780},
	{197, 3776},
	{199, 3774},
	{202, 3772},
	{205, 3766},
	{205, 3763},
	{205, 3760},
	{211, 3750},
	{217, 3748},
	{223, 3745},
	{232, 3737},
	{240, 3722},
	{232, 3716},
	{225, 3711},
	{205, 3698},
	{215, 3694},
	{241, 3692},
	{267, 3691},
	{267, 3689},
	{267, 3677},
	{267, 3667},
	{267, 3591},
	{267, 3464}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUCT r_profile_temperature[] =
{
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0},
	{0, 0}
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H
