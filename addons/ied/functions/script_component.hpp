#include "\x\iedd\addons\ied\script_component.hpp"

#define IEDD_BARRELVARS [\
    [["Red","Green","Yellow","Black","Blue","Black","Red"],[1,0,4,5,3,6,2]],\
	[["Blue","Red","Green","Yellow","Black","Black","Red"],[5,1,3,0,4,2,6]],\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[0,5,3,2,4,6,1]],\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[6,2,1,5,3,0,4]],\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[3,4,6,1,2,0,5]]\
]
#define IEDD_CANVARS [\
    [["Blue","Red","Green","Yellow","Black","Black","Red"],[4,2,6,1,3,5,0]],\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[5,3,1,2,4,0,6]],\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[6,4,3,2,1,5,0]],\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[0,1,6,5,3,2,4]],\
	[["Red","Green","Yellow","Black","Blue","Black","Red"],[0,6,2,4,3,5,1]]\
]
#define IEDD_CDVARS [\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[2,3,4,0,1,6,5]],\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[4,0,5,1,6,3,2]],\
	[["Red","Green","Yellow","Black","Blue","Black","Red"],[1,5,3,2,6,0,4]],\
	[["Blue","Red","Green","Yellow","Black","Black","Red"],[6,4,3,0,2,5,1]],\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[0,2,1,5,4,6,3]]\
]
#define IEDD_CINDERVARS [\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[2,0,4,1,5,3,6]],\
	[["Red","Green","Yellow","Black","Blue","Black","Red"],[6,1,5,2,3,0,4]],\
	[["Blue","Red","Green","Yellow","Black","Black","Red"],[4,5,3,1,6,0,2]],\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[0,6,2,1,4,3,5]],\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[3,6,4,5,2,1,0]]\
]
#define IEDD_JERRYVARS [\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[5,1,2,6,3,0,4]],\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[1,2,0,5,3,6,4]],\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[6,2,4,3,5,1,0]],\
	[["Red","Green","Yellow","Black","Blue","Black","Red"],[3,5,1,2,4,6,0]],\
	[["Blue","Red","Green","Yellow","Black","Black","Red"],[5,6,3,4,1,0,2]]\
]
#define IEDD_METALVARS [\
	[["Blue","Red","Green","Yellow","Black","Black","Red"],[2,1,5,4,3,6,0]],\
	[["Red","Green","Yellow","Black","Blue","Black","Red"],[1,6,4,5,2,0,3]],\
	[["Green","Yellow","Black","Blue","Red","Black","Red"],[1,0,3,6,4,2,5]],\
	[["Yellow","Black","Blue","Red","Green","Black","Red"],[5,2,1,0,6,3,4]],\
	[["Black","Blue","Red","Green","Yellow","Black","Red"],[6,4,3,2,1,5,0]]\
]

#define IEDD_CHARGE [\
	[["Green","Blue","Yellow","Black","Red","Black","Red"],[5,0,4,1,2,3,6]],\
	[["Black","Blue","Yellow","Red","Green","Black","Red"],[2,4,5,6,1,3,0]],\
	[["Yellow","Red","Blue","Green","Black","Black","Red"],[4,3,6,1,5,0,2]],\
	[["Black","Green","Yellow","Blue","Red","Black","Red"],[6,2,1,0,4,3,5]],\
	[["Red","Black","Green","Blue","Yellow","Black","Red"],[5,4,6,2,3,1,0]]\
]

#define IEDD_DUDS_JERRY [\
	[[-0.067,-0.111,-0.054],[[-0.782,0.623,-0.01],[-0.009,0.004,1]]],\
	[[-0.12,-0.121,-0.066],[[-0.061,0.98,-0.192],[-0.446,0.146,0.883]]],\
	[[-0.126,-0.122,-0.089],[[-0.16,0.987,-0.01],[-0.004,0.009,1]]],\
	[[-0.1,-0.117,-0.085],[[0.064,0.304,0.951],[-0.103,0.949,-0.297]]],\
	[[-0.146,-0.097,-0.075],[[0.05,-0.817,0.575],[0.053,-0.573,-0.818]]],\
	[[-0.055,-0.115,-0.13],[[0.356,0.452,0.818],[0.934,-0.193,-0.3]]],\
	[[-0.136,-0.103,-0.131],[[0.095,-0.015,0.995],[0.996,-0.002,-0.095]]]\
]

#define IEDD_DUDS_CAN [\
	[[0.143,0.21,-0.206],[[-0.567,0.7,0.434],[0.821,0.521,0.231]]],\
	[[0.146,0.204,-0.163],[[-0.079,0.995,0.061],[-0.994,-0.083,0.066]]],\
	[[0.145,0.253,-0.143],[[0.999,-0.002,-0.05],[0.02,-0.898,0.44]]],\
	[[0.14,0.203,-0.119],[[-0.888,0.458,-0.041],[0.46,0.886,-0.057]]],\
	[[0.128,0.248,-0.088],[[0.116,-0.993,-0.01],[-0.001,-0.01,1]]],\
	[[0.129,0.214,-0.235],[[-0.214,0.527,-0.822],[0.265,0.842,0.471]]],\
	[[0.098,0.233,-0.15],[[0.002,0.645,0.764],[-0.089,0.761,-0.643]]]\
]

#define IEDD_DUDS_CARDBOARD [\
	[[0.294,0.034,-0.191],[[0.617,-0.232,-0.752],[0.03,-0.948,0.317]]],\
	[[0.295,-0.106,-0.09],[[0.306,-0.109,-0.946],[0.167,0.984,-0.059]]],\
	[[0.311,0.008,-0.203],[[-0.964,0.153,0.218],[0.015,-0.788,0.616]]],\
	[[0.325,-0.082,-0.131],[[-0.098,-0.795,0.599],[-0.141,0.607,0.782]]],\
	[[0.282,-0.083,-0.121],[[0.88,-0.049,0.473],[-0.359,0.585,0.727]]],\
	[[0.285,0.062,-0.131],[[0.984,0.179,-0.002],[-0.178,0.979,0.099]]],\
	[[0.288,-0.174,-0.132],[[-0.915,0.12,-0.385],[0.387,0.001,-0.922]]]\
]

#define IEDD_DUDS_CINDER [\
	[[0.055,0.038,0.042],[[-0.987,-0.135,-0.089],[0.064,0.177,-0.982]]],\
	[[-0.037,0.075,0.031],[[-0.037,-0.982,-0.187],[-0.339,0.188,-0.922]]],\
	[[0.056,0.056,0.017],[[-0.999,-0.041,-0.029],[0.045,-0.478,-0.877]]],\
	[[0.02,0.019,0.03],[[-0.051,0.999,0.011],[-0.057,0.008,-0.998]]],\
	[[-0.017,0.069,-0.003],[[0.313,0.834,0.454],[0.001,-0.478,0.878]]],\
	[[0.021,-0.066,0.007],[[-0.718,-0.669,-0.189],[-0.197,-0.065,0.978]]],\
	[[-0.026,-0.065,-0.011],[[-0.116,0.259,0.959],[0.842,-0.487,0.233]]]\
]

#define IEDD_DUDS_METAL [\
	[[-0.026,0.125,0.254],[[-0.883,-0.036,0.468],[0.461,0.126,0.879]]],\
	[[-0.132,0.093,0.204],[[0,0.991,-0.13],[0,0.13,0.991]]],\
	[[-0.021,0.137,0.29],[[-0.763,0.627,0.156],[0.644,0.722,0.253]]],\
	[[-0.032,0.191,0.25],[[0.413,-0.091,-0.906],[0.832,-0.367,0.416]]],\
	[[-0.066,0.116,0.289],[[0.62,0.513,-0.594],[0.619,-0.785,-0.032]]],\
	[[-0.112,-0.014,0.247],[[-0.002,-0.869,0.495],[0.089,-0.493,-0.865]]],\
	[[-0.132,0.093,0.204],[[0,0.991,-0.13],[0,0.13,0.991]]]\
]

#define IEDD_DUDS_BARREL [\
	[[0.104,-0.098,0.153],[[0.912,0.209,0.354],[0.411,-0.47,-0.781]]],\
	[[0.128,-0.038,0.129],[[0.64,-0.709,-0.296],[-0.72,-0.688,0.092]]],\
	[[0.148,-0.049,0.167],[[0.398,-0.032,-0.917],[0.106,-0.991,0.081]]],\
	[[0.176,-0.042,0.119],[[-0.098,0.121,0.988],[-0.397,-0.915,0.072]]],\
	[[0.14,-0.042,0.169],[[0.139,-0.075,-0.987],[-0.944,-0.313,-0.109]]],\
	[[0.046,-0.191,0.178],[[-0.301,-0.576,0.76],[0.951,-0.127,0.281]]],\
	[[0.09,-0.06,0.089],[[0.786,-0.431,0.443],[0.497,0.867,-0.037]]]\
]

#define IEDD_DUDS_CHARGE [\
	[[0.108,0.04,-0.01],[[1,0,1],[0.2,1,-10]]],\
	[[0.102,0.014,-0.04],[[1,0,1],[0,1,10]]],\
	[[0.108,-0.02,0.01],[[1,1,1],[0,1,-4.3]]],\
	[[0.109,-0.021,0.01],[[1,0.1,-10],[-0.4,1,-44]]],\
	[[0.12,-0.06,-0.01],[[1,2,0],[0,1,-25]]],\
	[[0.120,0.035,0.04],[[-0,-0.642788,-0.766045],[0.34202,0.766045,-0.604023]]],\
	[[0.120,-0.093,0.073],[[-0,-4.64202,-0.739693],[0,1.939693,0.3]]]\
]

#define IEDD_BOMB_SIZE [\
	["iedd_ied_Tiny_Ammo"],\
	["M_AT","Missile_AA_03_F","M_Vorona_HE"],\
	["ammo_Missile_rim162","ammo_Missile_AMRAAM_D","M_Zephyr"],\
	["Bo_Mk82_MI08","Bomb_03_F"],\
	["ammo_Missile_Cruise_01"]\
]

#define IEDD_TRAINING_BOMB QGVAR(Training_IED_Ammo)

#define IEDD_DECALS [\
	"Land_Decal_RoadEdge_Dirt_03_F",\
	"Land_Garbage_square3_F",\
	"Land_Garbage_square5_F",\
	"Land_Garbage_line_F",\
	"Land_dirt_road_rocks_04_F",\
	"Land_dirt_road_rocks_01_F",\
	"Land_Decal_RoadCrack_Grass_04_F",\
	"Land_Decal_RoadCrack_Grass_05_F",\
	"Land_Decal_RoadCrack_Grass_01_F",\
	"Land_Decal_RoadEdge_Dirt_09_F",\
	"Land_Decal_RoadEdge_Dirt_07_F",\
	"Land_Decal_RoadEdge_Dirt_06_F",\
	"Land_Decal_RoadEdge_Dirt_01_F",\
	"Land_Decal_RoadEdge_Dirt_02_F",\
	"Land_Decal_RoadEdge_Dirt_10_F"\
]

#define IEDD_FAKE_CLASSES [\
    "Land_CanisterPlastic_F",\
    "Land_CanisterFuel_F",\
    "Land_PaperBox_01_small_ransacked_brown_F",\
    "Land_CinderBlock_01_F",\
    "Land_GarbageBarrel_01_F",\
    "Land_BarrelEmpty_F"\
]


#define IEDDSETPARAMS(AREAA,AREAB,ANGLE,BEHAVIOUR,COMBAT,SPEED,FORMATION,TIMEOUT)\
_a=AREAA;\
_b=AREAB;\
_angle=ANGLE;\
_behaviour=BEHAVIOUR;\
_combat=COMBAT;\
_speed=SPEED;\
_formation=FORMATION;\
_timeout=[TIMEOUT-2,TIMEOUT,TIMEOUT+1];

#define DISTANCE_0	0
#define DISTANCE_1	55
#define DISTANCE_2	100
#define DISTANCE_3	150
#define DISTANCE_4	200
#define DISTANCE_5	300
#define DISTANCE_6	500