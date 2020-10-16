Lights1 mario_Pants_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_Shirt_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_Hand_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_0___Open_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_1___Half_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_2___Closed_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 mario_face_7___Dead_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx mario_pants_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_pants_ci4[] = {
	#include "actors/mario/pants.ci4.inc.c"
};

Gfx mario_pants_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_pants_ci4_pal_rgba16[] = {
	#include "actors/mario/pants.ci4.pal"
};

Gfx mario_ShirtPattern_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_ShirtPattern_ci4[] = {
	#include "actors/mario/ShirtPattern.ci4.inc.c"
};

Gfx mario_ShirtPattern_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_ShirtPattern_ci4_pal_rgba16[] = {
	#include "actors/mario/ShirtPattern.ci4.pal"
};

Gfx mario_metal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_metal_rgba16[] = {
	#include "actors/mario/metal.rgba16.inc.c"
};

Gfx mario_Hand_Texture_i8_aligner[] = {gsSPEndDisplayList()};
u8 mario_Hand_Texture_i8[] = {
	#include "actors/mario/Hand_Texture.i8.inc.c"
};

Gfx mario_FullFace_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_FullFace_ci4[] = {
	#include "actors/mario/FullFace.ci4.inc.c"
};

Gfx mario_FullFace_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_FullFace_ci4_pal_rgba16[] = {
	#include "actors/mario/FullFace.ci4.pal"
};

Gfx mario_HalfBlink_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_HalfBlink_ci4[] = {
	#include "actors/mario/HalfBlink.ci4.inc.c"
};

Gfx mario_HalfBlink_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_HalfBlink_ci4_pal_rgba16[] = {
	#include "actors/mario/HalfBlink.ci4.pal"
};

Gfx mario_FaceBlink_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_FaceBlink_ci4[] = {
	#include "actors/mario/FaceBlink.ci4.inc.c"
};

Gfx mario_FaceBlink_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_FaceBlink_ci4_pal_rgba16[] = {
	#include "actors/mario/FaceBlink.ci4.pal"
};

Gfx mario_FrightenedFace_ci4_aligner[] = {gsSPEndDisplayList()};
u8 mario_FrightenedFace_ci4[] = {
	#include "actors/mario/FrightenedFace.ci4.inc.c"
};

Gfx mario_FrightenedFace_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 mario_FrightenedFace_ci4_pal_rgba16[] = {
	#include "actors/mario/FrightenedFace.ci4.pal"
};

Gfx mario_wingCombined_ia4_aligner[] = {gsSPEndDisplayList()};
u8 mario_wingCombined_ia4[] = {
	#include "actors/mario/wingCombined.ia4.inc.c"
};

Vtx mario_000_offset_bottom_mesh_vtx_0[43] = {
	{{{73, -20, 36},0, {875, -976},{0x71, 0xD4, 0x27, 0xFF}}},
	{{{41, -27, 74},0, {1734, -657},{0x25, 0xB6, 0x60, 0xFF}}},
	{{{38, -57, 0},0, {367, -155},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{35, 13, 82},0, {1734, -1910},{0x1F, 0x9, 0x7B, 0xFF}}},
	{{{66, 30, 41},0, {896, -2026},{0x6C, 0x34, 0x2A, 0xFF}}},
	{{{69, 33, 0},0, {153, -2030},{0x6F, 0x3E, 0x0, 0xFF}}},
	{{{73, -20, 0},0, {281, -908},{0x78, 0xD5, 0x0, 0xFF}}},
	{{{73, -20, -36},0, {875, -976},{0x71, 0xD4, 0xD9, 0xFF}}},
	{{{41, -27, -74},0, {1734, -657},{0x25, 0xB6, 0xA0, 0xFF}}},
	{{{35, 13, -82},0, {1734, -1910},{0x1F, 0x9, 0x85, 0xFF}}},
	{{{66, 30, -41},0, {896, -2026},{0x6C, 0x34, 0xD6, 0xFF}}},
	{{{11, -15, 74},0, {-129, 2832},{0xAE, 0xD3, 0x56, 0xFF}}},
	{{{41, -27, 74},0, {-1221, 3455},{0x25, 0xB6, 0x60, 0xFF}}},
	{{{35, 13, 82},0, {-1030, 1761},{0x1F, 0x9, 0x7B, 0xFF}}},
	{{{9, -52, 0},0, {679, 3280},{0xB2, 0x9B, 0x0, 0xFF}}},
	{{{-5, -7, 0},0, {655, 2602},{0x81, 0xF6, 0x0, 0xFF}}},
	{{{12, 44, 68},0, {89, 1914},{0xA8, 0x3F, 0x42, 0xFF}}},
	{{{-5, -7, 0},0, {655, 2602},{0x81, 0xF6, 0x0, 0xFF}}},
	{{{11, -15, 74},0, {-129, 2832},{0xAE, 0xD3, 0x56, 0xFF}}},
	{{{35, 13, 82},0, {-1030, 1761},{0x1F, 0x9, 0x7B, 0xFF}}},
	{{{33, 51, 74},0, {-167, 1411},{0x18, 0x59, 0x57, 0xFF}}},
	{{{66, 30, 41},0, {-591, 129},{0x6C, 0x34, 0x2A, 0xFF}}},
	{{{32, 63, 0},0, {608, 1234},{0xD, 0x7E, 0x0, 0xFF}}},
	{{{69, 33, 0},0, {560, -153},{0x6F, 0x3E, 0x0, 0xFF}}},
	{{{66, 30, -41},0, {-591, 129},{0x6C, 0x34, 0xD6, 0xFF}}},
	{{{33, 51, -74},0, {-167, 1411},{0x18, 0x59, 0xA9, 0xFF}}},
	{{{35, 13, -82},0, {-1030, 1761},{0x1F, 0x9, 0x85, 0xFF}}},
	{{{12, 44, -68},0, {89, 1914},{0xA8, 0x3F, 0xBE, 0xFF}}},
	{{{11, -15, -74},0, {-129, 2832},{0xAE, 0xD3, 0xAA, 0xFF}}},
	{{{41, -27, -74},0, {-1221, 3455},{0x25, 0xB6, 0xA0, 0xFF}}},
	{{{9, -52, 0},0, {679, 3280},{0xB2, 0x9B, 0x0, 0xFF}}},
	{{{38, -57, 0},0, {718, 4420},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{38, -57, 0},0, {718, 4420},{0x1D, 0x84, 0x0, 0xFF}}},
	{{{41, -27, 74},0, {-1221, 3455},{0x25, 0xB6, 0x60, 0xFF}}},
	{{{9, -52, 0},0, {679, 3280},{0xB2, 0x9B, 0x0, 0xFF}}},
	{{{-5, -7, 0},0, {655, 2602},{0x81, 0xF6, 0x0, 0xFF}}},
	{{{11, -15, -74},0, {-129, 2832},{0xAE, 0xD3, 0xAA, 0xFF}}},
	{{{12, 44, -68},0, {89, 1914},{0xA8, 0x3F, 0xBE, 0xFF}}},
	{{{6, 50, 0},0, {629, 1837},{0x9B, 0x4D, 0x0, 0xFF}}},
	{{{12, 44, 68},0, {89, 1914},{0xA8, 0x3F, 0x42, 0xFF}}},
	{{{32, 63, 0},0, {608, 1234},{0xD, 0x7E, 0x0, 0xFF}}},
	{{{33, 51, 74},0, {-167, 1411},{0x18, 0x59, 0x57, 0xFF}}},
	{{{33, 51, -74},0, {-167, 1411},{0x18, 0x59, 0xA9, 0xFF}}},
};

Gfx mario_000_offset_bottom_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_bottom_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(7, 2, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(5, 7, 10, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 11, 14, 0),
	gsSP1Triangle(15, 14, 11, 0),
	gsSPVertex(mario_000_offset_bottom_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(mario_000_offset_bottom_mesh_vtx_0 + 32, 11, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(5, 3, 6, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(5, 6, 8, 0),
	gsSP1Triangle(5, 8, 10, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_bottom_mesh_vtx_1[24] = {
	{{{70, 53, -77},0, {-331, 2738},{0x1D, 0x53, 0xA5, 0xFF}}},
	{{{30, -28, -100},0, {-1343, 3342},{0xBB, 0xCE, 0xA2, 0xFF}}},
	{{{31, 61, -93},0, {-387, 3342},{0xBE, 0x45, 0xAC, 0xFF}}},
	{{{70, -23, -84},0, {-1275, 2729},{0x1E, 0xC3, 0x95, 0xFF}}},
	{{{30, 79, 0},0, {496, 3342},{0xA9, 0x5C, 0x0, 0xFF}}},
	{{{69, 69, 0},0, {496, 2750},{0xF, 0x7E, 0x0, 0xFF}}},
	{{{70, 53, 77},0, {-331, 2738},{0x1D, 0x53, 0x5B, 0xFF}}},
	{{{31, 61, 93},0, {-387, 3342},{0xBE, 0x45, 0x54, 0xFF}}},
	{{{59, 1, 0},0, {496, 3089},{0x81, 0x3, 0x0, 0xFF}}},
	{{{30, -28, -100},0, {-486, 3342},{0xBB, 0xCE, 0xA2, 0xFF}}},
	{{{30, -78, 0},0, {496, 3342},{0xB1, 0x9D, 0x0, 0xFF}}},
	{{{70, -23, -84},0, {-418, 2729},{0x1E, 0xC3, 0x95, 0xFF}}},
	{{{70, -66, 0},0, {496, 2735},{0x17, 0x83, 0x0, 0xFF}}},
	{{{70, -23, 83},0, {-418, 2729},{0x1E, 0xC3, 0x6B, 0xFF}}},
	{{{30, -28, 99},0, {-486, 3342},{0xBB, 0xCE, 0x5E, 0xFF}}},
	{{{30, -28, 99},0, {-1343, 3342},{0xBB, 0xCE, 0x5E, 0xFF}}},
	{{{70, 53, 77},0, {-331, 2738},{0x1D, 0x53, 0x5B, 0xFF}}},
	{{{30, -28, 99},0, {-1343, 3342},{0xBB, 0xCE, 0x5E, 0xFF}}},
	{{{70, -23, 83},0, {-1275, 2729},{0x1E, 0xC3, 0x6B, 0xFF}}},
	{{{158, 57, -69},0, {-294, 434},{0x11, 0x5A, 0xA8, 0xFF}}},
	{{{70, 53, -77},0, {-331, 2738},{0x1D, 0x53, 0xA5, 0xFF}}},
	{{{69, 69, 0},0, {496, 2750},{0xF, 0x7E, 0x0, 0xFF}}},
	{{{160, 70, 0},0, {496, 479},{0x14, 0x7D, 0x0, 0xFF}}},
	{{{158, 57, 69},0, {-294, 434},{0x11, 0x5A, 0x57, 0xFF}}},
};

Gfx mario_000_offset_bottom_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_bottom_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 0, 2, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(4, 2, 8, 0),
	gsSP1Triangle(2, 9, 8, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(13, 14, 10, 0),
	gsSP1Triangle(14, 8, 10, 0),
	gsSP1Triangle(7, 8, 14, 0),
	gsSP1Triangle(6, 7, 15, 0),
	gsSPVertex(mario_000_offset_bottom_mesh_vtx_1 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 0, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_001_Chest_mesh_vtx_0[9] = {
	{{{-10, -22, -78},0, {-1228, 464},{0xC, 0xC2, 0x92, 0xFF}}},
	{{{61, 35, -68},0, {-231, -620},{0x4B, 0x3E, 0xAF, 0xFF}}},
	{{{58, 50, 0},0, {496, -583},{0x50, 0x62, 0x0, 0xFF}}},
	{{{61, 35, 68},0, {-231, -620},{0x4B, 0x3E, 0x51, 0xFF}}},
	{{{-10, -22, 78},0, {-1228, 464},{0xC, 0xC2, 0x6E, 0xFF}}},
	{{{-10, -22, -78},0, {-371, 464},{0xC, 0xC2, 0x92, 0xFF}}},
	{{{-10, -22, -78},0, {-371, 464},{0xC, 0xC2, 0x92, 0xFF}}},
	{{{-15, -60, 0},0, {496, 544},{0xC, 0x82, 0x0, 0xFF}}},
	{{{-10, -22, 78},0, {-371, 464},{0xC, 0xC2, 0x6E, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_vtx_0 + 0, 6, 10),
	gsSP1Triangle(2, 10, 3, 0),
	gsSP1Triangle(1, 10, 2, 0),
	gsSP1Triangle(10, 1, 11, 0),
	gsSP1Triangle(11, 1, 5, 0),
	gsSP1Triangle(11, 5, 12, 0),
	gsSP1Triangle(12, 5, 6, 0),
	gsSP1Triangle(12, 6, 13, 0),
	gsSP1Triangle(14, 13, 6, 0),
	gsSP1Triangle(7, 14, 6, 0),
	gsSP1Triangle(8, 14, 7, 0),
	gsSP1Triangle(4, 15, 0, 0),
	gsSPVertex(mario_000_offset_001_Chest_mesh_vtx_0 + 6, 3, 10),
	gsSP1Triangle(0, 10, 11, 0),
	gsSP1Triangle(12, 0, 11, 0),
	gsSP1Triangle(9, 0, 12, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_001_Chest_mesh_vtx_1[40] = {
	{{{-10, -22, -78},0, {-1228, 464},{0xC, 0xC2, 0x92, 0xFF}}},
	{{{61, 35, -68},0, {-231, -620},{0x4B, 0x3E, 0xAF, 0xFF}}},
	{{{65, -18, -70},0, {-1125, -679},{0x4B, 0xCE, 0xA7, 0xFF}}},
	{{{-10, -22, 78},0, {-1228, 464},{0xC, 0xC2, 0x6E, 0xFF}}},
	{{{65, -18, 70},0, {-1125, -679},{0x4B, 0xCE, 0x59, 0xFF}}},
	{{{61, 35, 68},0, {-231, -620},{0x4B, 0x3E, 0x51, 0xFF}}},
	{{{-15, -60, 0},0, {496, 544},{0xC, 0x82, 0x0, 0xFF}}},
	{{{65, -18, 70},0, {-268, -679},{0x4B, 0xCE, 0x59, 0xFF}}},
	{{{-10, -22, 78},0, {-371, 464},{0xC, 0xC2, 0x6E, 0xFF}}},
	{{{60, -51, 0},0, {496, -617},{0x3F, 0x92, 0x0, 0xFF}}},
	{{{65, -18, -70},0, {-268, -679},{0x4B, 0xCE, 0xA7, 0xFF}}},
	{{{-10, -22, -78},0, {-371, 464},{0xC, 0xC2, 0x92, 0xFF}}},
	{{{74, -11, -36},0, {103, -805},{0x6C, 0xDD, 0xC7, 0xFF}}},
	{{{73, -30, 0},0, {496, -793},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{74, -11, 36},0, {103, -805},{0x6C, 0xDD, 0x39, 0xFF}}},
	{{{69, 22, 29},0, {189, -735},{0x66, 0x40, 0x28, 0xFF}}},
	{{{69, 22, 29},0, {189, -735},{0x66, 0x40, 0x28, 0xFF}}},
	{{{58, 50, 0},0, {496, -583},{0x50, 0x62, 0x0, 0xFF}}},
	{{{61, 35, 68},0, {-231, -620},{0x4B, 0x3E, 0x51, 0xFF}}},
	{{{67, 28, 0},0, {496, -704},{0x56, 0x5D, 0x0, 0xFF}}},
	{{{69, 22, -29},0, {189, -735},{0x66, 0x40, 0xD8, 0xFF}}},
	{{{61, 35, -68},0, {-231, -620},{0x4B, 0x3E, 0xAF, 0xFF}}},
	{{{74, -11, -36},0, {103, -805},{0x6C, 0xDD, 0xC7, 0xFF}}},
	{{{65, -18, -70},0, {-268, -679},{0x4B, 0xCE, 0xA7, 0xFF}}},
	{{{69, 22, -29},0, {-378, 1077},{0x66, 0x40, 0xD8, 0xFF}}},
	{{{67, 28, 0},0, {496, 1077},{0x56, 0x5D, 0x0, 0xFF}}},
	{{{75, 26, 0},0, {496, 603},{0x28, 0x79, 0x0, 0xFF}}},
	{{{78, 21, 26},0, {1274, 603},{0x31, 0x5A, 0x4B, 0xFF}}},
	{{{69, 22, 29},0, {1370, 1077},{0x66, 0x40, 0x28, 0xFF}}},
	{{{82, -9, 32},0, {1740, 603},{0x2C, 0xD8, 0x70, 0xFF}}},
	{{{74, -11, 36},0, {1894, 1077},{0x6C, 0xDD, 0x39, 0xFF}}},
	{{{81, -28, 0},0, {496, 603},{0x19, 0x83, 0x0, 0xFF}}},
	{{{74, -11, 36},0, {1894, 1077},{0x6C, 0xDD, 0x39, 0xFF}}},
	{{{73, -30, 0},0, {496, 1077},{0x58, 0xA5, 0x0, 0xFF}}},
	{{{81, -28, 0},0, {496, 603},{0x19, 0x83, 0x0, 0xFF}}},
	{{{82, -9, -32},0, {-748, 603},{0x2C, 0xD8, 0x90, 0xFF}}},
	{{{74, -11, -36},0, {-902, 1077},{0x6C, 0xDD, 0xC7, 0xFF}}},
	{{{78, 21, -26},0, {-282, 603},{0x31, 0x5A, 0xB5, 0xFF}}},
	{{{69, 22, -29},0, {-378, 1077},{0x66, 0x40, 0xD8, 0xFF}}},
	{{{75, 26, 0},0, {496, 603},{0x28, 0x79, 0x0, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_001_Chest_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(12, 9, 10, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(14, 9, 13, 0),
	gsSP1Triangle(14, 7, 9, 0),
	gsSP1Triangle(14, 5, 7, 0),
	gsSP1Triangle(14, 15, 5, 0),
	gsSPVertex(mario_000_offset_001_Chest_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(mario_000_offset_001_Chest_mesh_vtx_1 + 32, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_offset_001_Chest_skinned_vtx_0[10] = {
	{{{70, -66, 0},0, {496, 2735},{0x17, 0x83, 0x0, 0xFF}}},
	{{{158, 57, -69},0, {-294, 434},{0x11, 0x5A, 0xA8, 0xFF}}},
	{{{70, 53, -77},0, {-331, 2738},{0x1D, 0x53, 0xA5, 0xFF}}},
	{{{70, -23, -84},0, {-1275, 2729},{0x1E, 0xC3, 0x95, 0xFF}}},
	{{{70, -23, -84},0, {-418, 2729},{0x1E, 0xC3, 0x95, 0xFF}}},
	{{{160, 70, 0},0, {496, 479},{0x14, 0x7D, 0x0, 0xFF}}},
	{{{158, 57, 69},0, {-294, 434},{0x11, 0x5A, 0x57, 0xFF}}},
	{{{70, 53, 77},0, {-331, 2738},{0x1D, 0x53, 0x5B, 0xFF}}},
	{{{70, -23, 83},0, {-1275, 2729},{0x1E, 0xC3, 0x6B, 0xFF}}},
	{{{70, -23, 83},0, {-418, 2729},{0x1E, 0xC3, 0x6B, 0xFF}}},
};

Gfx mario_000_offset_001_Chest_skinned_tri_0[] = {
	gsSPVertex(mario_000_offset_001_Chest_skinned_vtx_0 + 0, 10, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_Head_mesh_vtx_0[1] = {
	{{{120, -27, 0},0, {78, 29},{0x7C, 0xE3, 0x0, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_0 + 0, 1, 6),
	gsSP1Triangle(0, 1, 6, 0),
	gsSP1Triangle(4, 6, 1, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(2, 6, 3, 0),
	gsSP1Triangle(2, 5, 6, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_displaylist_Head_mesh_vtx_1[156] = {
	{{{102, 75, 0},0, {536, 1446},{0x5D, 0x57, 0x0, 0xFF}}},
	{{{89, 45, 71},0, {-71, 1561},{0xF, 0x2F, 0x75, 0xFF}}},
	{{{168, 40, 59},0, {22, 880},{0x41, 0x40, 0x58, 0xFF}}},
	{{{171, 57, 0},0, {541, 859},{0x47, 0x69, 0x3, 0xFF}}},
	{{{168, 41, -60},0, {22, 880},{0x3D, 0x43, 0xA6, 0xFF}}},
	{{{89, 45, -71},0, {-71, 1561},{0xF, 0x30, 0x8B, 0xFF}}},
	{{{97, -48, -66},0, {890, 1940},{0xE7, 0xA2, 0x51, 0xFF}}},
	{{{175, -40, -57},0, {938, 1930},{0x40, 0xA9, 0xBC, 0xFF}}},
	{{{158, -40, -38},0, {928, 1930},{0xE7, 0xB9, 0x67, 0xFF}}},
	{{{108, -48, -83},0, {896, 1940},{0x5, 0x8C, 0xCD, 0xFF}}},
	{{{18, -28, -82},0, {840, 1903},{0xAF, 0xA6, 0xDB, 0xFF}}},
	{{{24, -26, -65},0, {843, 1900},{0xD4, 0xBB, 0x61, 0xFF}}},
	{{{47, 11, -70},0, {855, 1853},{0x1E, 0xE, 0x7B, 0xFF}}},
	{{{105, -4, -76},0, {895, 1885},{0xF7, 0x30, 0x75, 0xFF}}},
	{{{172, 2, -59},0, {936, 1877},{0x4A, 0x67, 0x0, 0xFF}}},
	{{{111, 23, -91},0, {899, 1851},{0x2D, 0x76, 0xF, 0xFF}}},
	{{{111, 23, -91},0, {899, 1851},{0x2D, 0x76, 0xF, 0xFF}}},
	{{{172, 2, -59},0, {936, 1877},{0x4A, 0x67, 0x0, 0xFF}}},
	{{{115, 11, -102},0, {901, 1866},{0x33, 0x33, 0x97, 0xFF}}},
	{{{116, -24, -107},0, {901, 1910},{0x23, 0xD8, 0x8D, 0xFF}}},
	{{{175, -40, -57},0, {938, 1930},{0x40, 0xA9, 0xBC, 0xFF}}},
	{{{108, -48, -83},0, {896, 1940},{0x5, 0x8C, 0xCD, 0xFF}}},
	{{{45, -6, -111},0, {855, 1873},{0xE2, 0xE1, 0x88, 0xFF}}},
	{{{18, -28, -82},0, {840, 1903},{0xAF, 0xA6, 0xDB, 0xFF}}},
	{{{10, 59, -97},0, {831, 1797},{0xB3, 0xE, 0x9C, 0xFF}}},
	{{{-6, 19, -67},0, {822, 1847},{0x8A, 0xEA, 0x29, 0xFF}}},
	{{{24, -26, -65},0, {843, 1900},{0xD4, 0xBB, 0x61, 0xFF}}},
	{{{10, 37, -61},0, {831, 1823},{0xE4, 0x2, 0x7C, 0xFF}}},
	{{{47, 11, -70},0, {855, 1853},{0x1E, 0xE, 0x7B, 0xFF}}},
	{{{26, 67, -57},0, {840, 1785},{0x11, 0x28, 0x77, 0xFF}}},
	{{{61, 44, -84},0, {862, 1810},{0x5E, 0x44, 0x33, 0xFF}}},
	{{{105, -4, -76},0, {895, 1885},{0xF7, 0x30, 0x75, 0xFF}}},
	{{{111, 23, -91},0, {899, 1851},{0x2D, 0x76, 0xF, 0xFF}}},
	{{{59, 37, -101},0, {862, 1819},{0x24, 0x3C, 0x96, 0xFF}}},
	{{{61, 44, -84},0, {862, 1810},{0x5E, 0x44, 0x33, 0xFF}}},
	{{{115, 11, -102},0, {901, 1866},{0x33, 0x33, 0x97, 0xFF}}},
	{{{45, -6, -111},0, {855, 1873},{0xE2, 0xE1, 0x88, 0xFF}}},
	{{{116, -24, -107},0, {901, 1910},{0x23, 0xD8, 0x8D, 0xFF}}},
	{{{10, 59, -97},0, {831, 1797},{0xB3, 0xE, 0x9C, 0xFF}}},
	{{{28, 87, -97},0, {840, 1760},{0xFD, 0x5A, 0xA7, 0xFF}}},
	{{{4, 84, -74},0, {826, 1766},{0xA9, 0x58, 0x1D, 0xFF}}},
	{{{-6, 19, -67},0, {822, 1847},{0x8A, 0xEA, 0x29, 0xFF}}},
	{{{10, 37, -61},0, {831, 1823},{0xE4, 0x2, 0x7C, 0xFF}}},
	{{{26, 67, -57},0, {840, 1785},{0x11, 0x28, 0x77, 0xFF}}},
	{{{40, 88, -83},0, {848, 1758},{0x48, 0x68, 0xF, 0xFF}}},
	{{{116, -24, 107},0, {901, 1910},{0x24, 0xD8, 0x73, 0xFF}}},
	{{{174, -41, 55},0, {938, 1931},{0x41, 0xA8, 0x41, 0xFF}}},
	{{{171, 3, 57},0, {935, 1876},{0x4B, 0x66, 0xFD, 0xFF}}},
	{{{174, -41, 55},0, {938, 1931},{0x41, 0xA8, 0x41, 0xFF}}},
	{{{116, -24, 107},0, {901, 1910},{0x24, 0xD8, 0x73, 0xFF}}},
	{{{108, -48, 83},0, {896, 1940},{0x5, 0x8C, 0x34, 0xFF}}},
	{{{45, -6, 111},0, {855, 1873},{0xE2, 0xE1, 0x78, 0xFF}}},
	{{{115, 11, 102},0, {901, 1866},{0x33, 0x33, 0x69, 0xFF}}},
	{{{171, 3, 57},0, {935, 1876},{0x4B, 0x66, 0xFD, 0xFF}}},
	{{{111, 23, 90},0, {899, 1851},{0x2C, 0x76, 0xF2, 0xFF}}},
	{{{105, -4, 75},0, {895, 1885},{0xF5, 0x30, 0x8B, 0xFF}}},
	{{{158, -40, 38},0, {928, 1930},{0xE5, 0xB8, 0x9B, 0xFF}}},
	{{{97, -48, 66},0, {890, 1940},{0xE6, 0xA2, 0xAE, 0xFF}}},
	{{{18, -28, 82},0, {840, 1903},{0xAF, 0xA6, 0x25, 0xFF}}},
	{{{10, 59, 97},0, {831, 1797},{0xB3, 0xE, 0x64, 0xFF}}},
	{{{59, 37, 101},0, {862, 1819},{0x24, 0x3C, 0x6A, 0xFF}}},
	{{{61, 44, 84},0, {862, 1810},{0x5E, 0x44, 0xCD, 0xFF}}},
	{{{47, 11, 69},0, {855, 1853},{0x1E, 0xE, 0x85, 0xFF}}},
	{{{24, -26, 65},0, {843, 1900},{0xD4, 0xBB, 0x9F, 0xFF}}},
	{{{24, -26, 65},0, {843, 1900},{0xD4, 0xBB, 0x9F, 0xFF}}},
	{{{18, -28, 82},0, {840, 1903},{0xAF, 0xA6, 0x25, 0xFF}}},
	{{{-6, 19, 66},0, {822, 1847},{0x8A, 0xEA, 0xD7, 0xFF}}},
	{{{10, 59, 97},0, {831, 1797},{0xB3, 0xE, 0x64, 0xFF}}},
	{{{4, 84, 74},0, {826, 1766},{0xA9, 0x58, 0xE3, 0xFF}}},
	{{{28, 87, 97},0, {840, 1760},{0xFD, 0x5A, 0x59, 0xFF}}},
	{{{59, 37, 101},0, {862, 1819},{0x24, 0x3C, 0x6A, 0xFF}}},
	{{{40, 88, 83},0, {848, 1758},{0x48, 0x68, 0xF1, 0xFF}}},
	{{{61, 44, 84},0, {862, 1810},{0x5E, 0x44, 0xCD, 0xFF}}},
	{{{26, 67, 57},0, {840, 1785},{0x11, 0x28, 0x89, 0xFF}}},
	{{{47, 11, 69},0, {855, 1853},{0x1E, 0xE, 0x85, 0xFF}}},
	{{{10, 37, 61},0, {831, 1823},{0xE4, 0x2, 0x84, 0xFF}}},
	{{{168, 40, 59},0, {934, 1830},{0x41, 0x40, 0x58, 0xFF}}},
	{{{187, 23, 29},0, {946, 1851},{0x64, 0x45, 0x27, 0xFF}}},
	{{{171, 57, 0},0, {935, 1809},{0x47, 0x69, 0x3, 0xFF}}},
	{{{190, -6, 33},0, {947, 1887},{0x76, 0xF8, 0x2F, 0xFF}}},
	{{{168, 40, 59},0, {934, 1830},{0x41, 0x40, 0x58, 0xFF}}},
	{{{174, -41, 55},0, {938, 1931},{0x48, 0xC8, 0x58, 0xFF}}},
	{{{190, -6, 33},0, {947, 1887},{0x76, 0xF8, 0x2F, 0xFF}}},
	{{{103, -49, 73},0, {893, 1941},{0xD, 0xBF, 0x6D, 0xFF}}},
	{{{89, 45, 71},0, {885, 1824},{0xF, 0x2F, 0x75, 0xFF}}},
	{{{38, 24, 64},0, {853, 1850},{0xD0, 0xC, 0x75, 0xFF}}},
	{{{69, 90, 56},0, {871, 1768},{0x1D, 0x4F, 0x5F, 0xFF}}},
	{{{96, 101, 0},0, {888, 1753},{0x60, 0x53, 0x0, 0xFF}}},
	{{{102, 75, 0},0, {893, 1787},{0x5D, 0x57, 0x0, 0xFF}}},
	{{{89, 45, -71},0, {885, 1824},{0xF, 0x30, 0x8B, 0xFF}}},
	{{{69, 90, -56},0, {871, 1768},{0x1D, 0x4F, 0xA0, 0xFF}}},
	{{{38, 24, -64},0, {853, 1850},{0xCE, 0xD, 0x8C, 0xFF}}},
	{{{103, -49, -74},0, {894, 1941},{0xC, 0xBF, 0x93, 0xFF}}},
	{{{168, 41, -60},0, {934, 1830},{0x3D, 0x43, 0xA6, 0xFF}}},
	{{{175, -40, -57},0, {938, 1930},{0x47, 0xC6, 0xA9, 0xFF}}},
	{{{188, 21, -37},0, {946, 1854},{0x6E, 0x17, 0xC5, 0xFF}}},
	{{{183, 38, -19},0, {943, 1833},{0x5F, 0x54, 0x3, 0xFF}}},
	{{{188, 21, -37},0, {946, 1854},{0x6E, 0x17, 0xC5, 0xFF}}},
	{{{168, 41, -60},0, {934, 1830},{0x3D, 0x43, 0xA6, 0xFF}}},
	{{{171, 57, 0},0, {935, 1809},{0x47, 0x69, 0x3, 0xFF}}},
	{{{187, 23, 29},0, {946, 1851},{0x64, 0x45, 0x27, 0xFF}}},
	{{{189, 8, 3},0, {947, 1871},{0x77, 0x25, 0x17, 0xFF}}},
	{{{196, 14, 18},0, {951, 1863},{0x6C, 0x20, 0xC5, 0xFF}}},
	{{{201, 23, 32},0, {955, 1852},{0x5B, 0x4A, 0x32, 0xFF}}},
	{{{190, -6, 33},0, {947, 1887},{0x76, 0xF8, 0x2F, 0xFF}}},
	{{{192, -29, 19},0, {949, 1916},{0x70, 0xE2, 0x34, 0xFF}}},
	{{{174, -41, 55},0, {938, 1931},{0x48, 0xC8, 0x58, 0xFF}}},
	{{{174, -65, 12},0, {937, 1960},{0x42, 0x95, 0x10, 0xFF}}},
	{{{110, -82, 0},0, {898, 1982},{0x8, 0x81, 0x0, 0xFF}}},
	{{{103, -49, 73},0, {893, 1941},{0xD, 0xBF, 0x6D, 0xFF}}},
	{{{46, -51, 72},0, {858, 1943},{0xD1, 0xBD, 0x61, 0xFF}}},
	{{{38, 24, 64},0, {853, 1850},{0xD0, 0xC, 0x75, 0xFF}}},
	{{{16, -16, 50},0, {840, 1901},{0x96, 0xED, 0x43, 0xFF}}},
	{{{46, -51, 72},0, {858, 1943},{0xD1, 0xBD, 0x61, 0xFF}}},
	{{{38, 24, 64},0, {853, 1850},{0xD0, 0xC, 0x75, 0xFF}}},
	{{{23, 91, 45},0, {843, 1768},{0xB5, 0x40, 0x4F, 0xFF}}},
	{{{69, 90, 56},0, {871, 1768},{0x1D, 0x4F, 0x5F, 0xFF}}},
	{{{2, -4, 0},0, {831, 1885},{0x82, 0xF4, 0x0, 0xFF}}},
	{{{22, -61, 0},0, {843, 1955},{0xAB, 0xA2, 0x0, 0xFF}}},
	{{{16, -16, -50},0, {840, 1901},{0x95, 0xED, 0xBF, 0xFF}}},
	{{{23, 91, -45},0, {843, 1768},{0xB5, 0x40, 0xB1, 0xFF}}},
	{{{11, 98, 0},0, {835, 1759},{0x98, 0x48, 0x0, 0xFF}}},
	{{{38, 24, -64},0, {853, 1850},{0xCE, 0xD, 0x8C, 0xFF}}},
	{{{46, -50, -73},0, {858, 1942},{0xD1, 0xBE, 0x9E, 0xFF}}},
	{{{103, -49, -74},0, {894, 1941},{0xC, 0xBF, 0x93, 0xFF}}},
	{{{110, -82, 0},0, {898, 1982},{0x8, 0x81, 0x0, 0xFF}}},
	{{{175, -40, -57},0, {938, 1930},{0x47, 0xC6, 0xA9, 0xFF}}},
	{{{174, -65, 12},0, {937, 1960},{0x42, 0x95, 0x10, 0xFF}}},
	{{{174, -65, 12},0, {937, 1960},{0x42, 0x95, 0x10, 0xFF}}},
	{{{175, -40, -57},0, {938, 1930},{0x47, 0xC6, 0xA9, 0xFF}}},
	{{{201, -30, 0},0, {954, 1918},{0x6A, 0xB9, 0x0, 0xFF}}},
	{{{198, -18, -20},0, {952, 1902},{0x72, 0xF4, 0xC9, 0xFF}}},
	{{{188, 21, -37},0, {946, 1854},{0x6E, 0x17, 0xC5, 0xFF}}},
	{{{192, 20, -16},0, {949, 1855},{0x78, 0x22, 0x16, 0xFF}}},
	{{{195, 42, -29},0, {951, 1828},{0x40, 0x68, 0xDB, 0xFF}}},
	{{{183, 38, -19},0, {943, 1833},{0x5F, 0x54, 0x3, 0xFF}}},
	{{{189, 8, 3},0, {947, 1871},{0x77, 0x25, 0x17, 0xFF}}},
	{{{200, -3, -4},0, {954, 1884},{0x64, 0x4C, 0x13, 0xFF}}},
	{{{192, -29, 19},0, {949, 1916},{0x70, 0xE2, 0x34, 0xFF}}},
	{{{215, -9, 2},0, {963, 1891},{0x73, 0x2F, 0x1B, 0xFF}}},
	{{{23, 91, -45},0, {843, 1768},{0xB5, 0x40, 0xB1, 0xFF}}},
	{{{69, 90, -56},0, {871, 1768},{0x1D, 0x4F, 0xA0, 0xFF}}},
	{{{38, 24, -64},0, {853, 1850},{0xCE, 0xD, 0x8C, 0xFF}}},
	{{{22, -61, 0},0, {843, 1955},{0xAB, 0xA2, 0x0, 0xFF}}},
	{{{46, -51, 72},0, {858, 1943},{0xD1, 0xBD, 0x61, 0xFF}}},
	{{{16, -16, 50},0, {840, 1901},{0x96, 0xED, 0x43, 0xFF}}},
	{{{110, -82, 0},0, {898, 1982},{0x8, 0x81, 0x0, 0xFF}}},
	{{{46, -50, -73},0, {858, 1942},{0xD1, 0xBE, 0x9E, 0xFF}}},
	{{{16, -16, -50},0, {840, 1901},{0x95, 0xED, 0xBF, 0xFF}}},
	{{{23, 91, -45},0, {249, 2069},{0xB5, 0x40, 0xB1, 0xFF}}},
	{{{56, 119, 0},0, {536, 1843},{0x2, 0x7F, 0x0, 0xFF}}},
	{{{69, 90, -56},0, {177, 1749},{0x1D, 0x4F, 0xA0, 0xFF}}},
	{{{11, 98, 0},0, {535, 2134},{0x98, 0x48, 0x0, 0xFF}}},
	{{{23, 91, 45},0, {249, 2069},{0xB5, 0x40, 0x4F, 0xFF}}},
	{{{69, 90, 56},0, {177, 1749},{0x1D, 0x4F, 0x5F, 0xFF}}},
	{{{96, 101, 0},0, {546, 1508},{0x60, 0x53, 0x0, 0xFF}}},
};

Gfx mario_000_displaylist_Head_mesh_tri_1[] = {
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(6, 11, 10, 0),
	gsSP1Triangle(12, 11, 6, 0),
	gsSP1Triangle(12, 6, 13, 0),
	gsSP1Triangle(8, 13, 6, 0),
	gsSP1Triangle(8, 14, 13, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(12, 0, 14, 0),
	gsSP1Triangle(12, 15, 0, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(1, 4, 6, 0),
	gsSP1Triangle(1, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(8, 11, 12, 0),
	gsSP1Triangle(11, 2, 12, 0),
	gsSP1Triangle(12, 2, 1, 0),
	gsSP1Triangle(7, 12, 1, 0),
	gsSP1Triangle(12, 7, 8, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 8, 0, 0),
	gsSP1Triangle(9, 0, 2, 0),
	gsSP1Triangle(9, 2, 10, 0),
	gsSP1Triangle(3, 10, 2, 0),
	gsSP1Triangle(3, 11, 10, 0),
	gsSP1Triangle(12, 11, 3, 0),
	gsSP1Triangle(3, 4, 12, 0),
	gsSP1Triangle(6, 12, 4, 0),
	gsSP1Triangle(6, 13, 12, 0),
	gsSP1Triangle(14, 13, 6, 0),
	gsSP1Triangle(14, 6, 7, 0),
	gsSP1Triangle(14, 7, 9, 0),
	gsSP1Triangle(14, 9, 15, 0),
	gsSP1Triangle(9, 10, 15, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 2, 3, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(0, 11, 10, 0),
	gsSP1Triangle(0, 2, 11, 0),
	gsSP1Triangle(2, 4, 11, 0),
	gsSP1Triangle(4, 9, 11, 0),
	gsSP1Triangle(4, 7, 9, 0),
	gsSP1Triangle(7, 4, 5, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 12, 9, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 96, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(4, 8, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 5, 6, 0),
	gsSP1Triangle(8, 9, 5, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 112, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(5, 0, 3, 0),
	gsSP1Triangle(6, 0, 5, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(8, 5, 9, 0),
	gsSP1Triangle(5, 3, 9, 0),
	gsSP1Triangle(10, 7, 8, 0),
	gsSP1Triangle(11, 7, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 128, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(5, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(11, 10, 2, 0),
	gsSP1Triangle(2, 10, 0, 0),
	gsSP1Triangle(2, 3, 11, 0),
	gsSP1Triangle(3, 9, 11, 0),
	gsSP1Triangle(3, 5, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(mario_000_displaylist_Head_mesh_vtx_1 + 143, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 11, 7, 0),
	gsSP1Triangle(7, 11, 12, 0),
	gsSP1Triangle(7, 12, 8, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_displaylist_Head_skinned_vtx_0[6] = {
	{{{78, 21, -26},0, {100, 7},{0x31, 0x5A, 0xB5, 0xFF}}},
	{{{75, 26, 0},0, {78, 5},{0x28, 0x79, 0x0, 0xFF}}},
	{{{81, -28, 0},0, {78, 52},{0x19, 0x83, 0x0, 0xFF}}},
	{{{82, -9, 32},0, {104, 39},{0x2C, 0xD8, 0x70, 0xFF}}},
	{{{78, 21, 26},0, {100, 7},{0x31, 0x5A, 0x4B, 0xFF}}},
	{{{82, -9, -32},0, {104, 39},{0x2C, 0xD8, 0x90, 0xFF}}},
};

Gfx mario_000_displaylist_Head_skinned_tri_0[] = {
	gsSPVertex(mario_000_displaylist_Head_skinned_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_001_RWing_mesh_vtx_0[3] = {
	{{{-153, -11, 26},0, {-509, 2059},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{10, 334, -2},0, {1061, -1152},{0xEA, 0x0, 0x83, 0xFF}}},
	{{{186, -4, -34},0, {2903, 1940},{0xEA, 0x0, 0x83, 0xFF}}},
};

Gfx mario_000_displaylist_001_RWing_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_001_RWing_mesh_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_002_LWing_mesh_vtx_0[3] = {
	{{{-153, -11, -26},0, {-509, 2059},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{186, -4, 34},0, {2903, 1940},{0xEA, 0x0, 0x7D, 0xFF}}},
	{{{10, 334, 2},0, {1061, -1152},{0xEA, 0x0, 0x7D, 0xFF}}},
};

Gfx mario_000_displaylist_002_LWing_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_002_LWing_mesh_vtx_0 + 0, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_003_LShoulder_mesh_vtx_0[13] = {
	{{{-8, -10, 20},0, {7, -2275},{0xCC, 0xD1, 0x6A, 0xFF}}},
	{{{76, -8, 17},0, {65, -523},{0x4, 0xC9, 0x72, 0xFF}}},
	{{{82, 26, 14},0, {119, -524},{0xFD, 0x4D, 0x65, 0xFF}}},
	{{{62, -26, -9},0, {494, -522},{0x6, 0x83, 0x15, 0xFF}}},
	{{{-11, -30, -9},0, {496, -2333},{0xC4, 0x91, 0xE, 0xFF}}},
	{{{-28, 3, -9},0, {504, -2663},{0x81, 0x0, 0xFF, 0xFF}}},
	{{{-6, 29, 17},0, {67, -2220},{0xD2, 0x4A, 0x5C, 0xFF}}},
	{{{72, 32, -9},0, {494, -708},{0xF9, 0x7D, 0xEB, 0xFF}}},
	{{{-11, 36, -9},0, {496, -2333},{0xC4, 0x6F, 0xF3, 0xFF}}},
	{{{-9, 16, -38},0, {982, -2280},{0xCC, 0x2F, 0x96, 0xFF}}},
	{{{82, 15, -35},0, {922, -525},{0xFF, 0x33, 0x8C, 0xFF}}},
	{{{-6, -22, -34},0, {920, -2225},{0xD2, 0xB6, 0xA4, 0xFF}}},
	{{{76, -19, -31},0, {868, -527},{0x5, 0xAE, 0xA0, 0xFF}}},
};

Gfx mario_000_offset_003_LShoulder_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_003_LShoulder_mesh_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(0, 2, 6, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 3, 0),
	gsSP1Triangle(11, 3, 4, 0),
	gsSP1Triangle(5, 11, 4, 0),
	gsSP1Triangle(5, 9, 11, 0),
	gsSP1Triangle(9, 5, 8, 0),
	gsSP1Triangle(6, 8, 5, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_004_LArm_mesh_vtx_0[6] = {
	{{{83, -19, -31},0, {868, 1120},{0xF4, 0xB0, 0x9E, 0xFF}}},
	{{{86, 15, -34},0, {921, 1182},{0xF2, 0x37, 0x8E, 0xFF}}},
	{{{8, 32, -9},0, {494, -336},{0xF3, 0x7D, 0xEF, 0xFF}}},
	{{{83, 26, 14},0, {119, 1125},{0xF1, 0x51, 0x60, 0xFF}}},
	{{{87, -8, 17},0, {64, 1188},{0xF3, 0xCB, 0x73, 0xFF}}},
	{{{90, -26, -9},0, {491, 1247},{0xF3, 0x84, 0x17, 0xFF}}},
};

Gfx mario_000_offset_004_LArm_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_mesh_vtx_0 + 0, 6, 6),
	gsSP1Triangle(2, 6, 1, 0),
	gsSP1Triangle(2, 7, 6, 0),
	gsSP1Triangle(8, 7, 2, 0),
	gsSP1Triangle(5, 8, 2, 0),
	gsSP1Triangle(0, 8, 5, 0),
	gsSP1Triangle(9, 8, 0, 0),
	gsSP1Triangle(10, 9, 0, 0),
	gsSP1Triangle(10, 0, 3, 0),
	gsSP1Triangle(3, 11, 10, 0),
	gsSP1Triangle(4, 11, 3, 0),
	gsSP1Triangle(1, 11, 4, 0),
	gsSP1Triangle(6, 11, 1, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_004_LArm_mesh_vtx_1[14] = {
	{{{83, 26, 14},0, {119, 1125},{0xF1, 0x51, 0x60, 0xFF}}},
	{{{90, 32, -9},0, {491, 1247},{0xF0, 0x7C, 0xEA, 0xFF}}},
	{{{8, 32, -9},0, {494, -336},{0xF3, 0x7D, 0xEF, 0xFF}}},
	{{{98, 28, 16},0, {77, 1406},{0x50, 0x3B, 0x4E, 0xFF}}},
	{{{87, -8, 17},0, {64, 1188},{0xF3, 0xCB, 0x73, 0xFF}}},
	{{{101, -9, 20},0, {16, 1476},{0x5E, 0xE2, 0x50, 0xFF}}},
	{{{90, -26, -9},0, {491, 1247},{0xF3, 0x84, 0x17, 0xFF}}},
	{{{105, -29, -9},0, {492, 1542},{0x67, 0xB6, 0x6, 0xFF}}},
	{{{97, -22, -34},0, {911, 1400},{0x50, 0xC5, 0xB0, 0xFF}}},
	{{{83, -19, -31},0, {868, 1120},{0xF4, 0xB0, 0x9E, 0xFF}}},
	{{{86, 15, -34},0, {921, 1182},{0xF2, 0x37, 0x8E, 0xFF}}},
	{{{101, 16, -37},0, {970, 1469},{0x5D, 0x20, 0xB0, 0xFF}}},
	{{{105, 35, -9},0, {492, 1542},{0x67, 0x49, 0xF9, 0xFF}}},
	{{{72, 3, -9},0, {492, 915},{0x7F, 0x0, 0xFF, 0xFF}}},
};

Gfx mario_000_offset_004_LArm_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_004_LArm_mesh_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 11, 8, 0),
	gsSP1Triangle(1, 11, 10, 0),
	gsSP1Triangle(2, 1, 10, 0),
	gsSP1Triangle(1, 12, 11, 0),
	gsSP1Triangle(1, 3, 12, 0),
	gsSP1Triangle(3, 13, 12, 0),
	gsSP1Triangle(5, 13, 3, 0),
	gsSP1Triangle(7, 13, 5, 0),
	gsSP1Triangle(8, 13, 7, 0),
	gsSP1Triangle(11, 13, 8, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_offset_004_LArm_skinned_vtx_0[6] = {
	{{{82, 26, 14},0, {119, -524},{0xFD, 0x4D, 0x65, 0xFF}}},
	{{{76, -19, -31},0, {868, -527},{0x5, 0xAE, 0xA0, 0xFF}}},
	{{{82, 15, -35},0, {922, -525},{0xFF, 0x33, 0x8C, 0xFF}}},
	{{{76, -8, 17},0, {65, -523},{0x4, 0xC9, 0x72, 0xFF}}},
	{{{62, -26, -9},0, {494, -522},{0x6, 0x83, 0x15, 0xFF}}},
	{{{72, 32, -9},0, {494, -708},{0xF9, 0x7D, 0xEB, 0xFF}}},
};

Gfx mario_000_offset_004_LArm_skinned_tri_0[] = {
	gsSPVertex(mario_000_offset_004_LArm_skinned_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_003_LHand_mesh_vtx_0[9] = {
	{{{8, -12, 6},0, {223, 926},{0x3, 0x8C, 0x34, 0xFF}}},
	{{{4, -13, -20},0, {328, 1010},{0xB0, 0x9E, 0x0, 0xFF}}},
	{{{-9, 19, -21},0, {432, 1002},{0x97, 0x42, 0xE3, 0xFF}}},
	{{{-7, 23, 4},0, {233, 994},{0xA1, 0x55, 0xFF, 0xFF}}},
	{{{4, -13, -20},0, {994, 591},{0xB0, 0x9E, 0x0, 0xFF}}},
	{{{-9, 19, -21},0, {952, 356},{0x97, 0x42, 0xE3, 0xFF}}},
	{{{2, 7, 13},0, {293, 248},{0xDD, 0xA, 0x7A, 0xFF}}},
	{{{8, -12, 6},0, {293, 587},{0x3, 0x8C, 0x34, 0xFF}}},
	{{{-7, 23, 4},0, {301, 65},{0xA1, 0x55, 0xFF, 0xFF}}},
};

Gfx mario_000_displaylist_003_LHand_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_vtx_0 + 0, 9, 4),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(8, 3, 9, 0),
	gsSP1Triangle(10, 1, 11, 0),
	gsSP1Triangle(12, 1, 10, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_displaylist_003_LHand_mesh_vtx_1[36] = {
	{{{33, 48, 12},0, {537, -3},{0x21, 0x65, 0x46, 0xFF}}},
	{{{45, 20, 17},0, {496, 471},{0x33, 0x23, 0x6F, 0xFF}}},
	{{{43, 47, -10},0, {667, 55},{0x4E, 0x61, 0xE8, 0xFF}}},
	{{{43, 47, -10},0, {460, 497},{0x4E, 0x61, 0xE8, 0xFF}}},
	{{{18, 37, -28},0, {525, 830},{0xED, 0x61, 0xB0, 0xFF}}},
	{{{33, 48, 12},0, {278, 595},{0x21, 0x65, 0x46, 0xFF}}},
	{{{10, 37, 7},0, {231, 890},{0xC8, 0x67, 0x31, 0xFF}}},
	{{{-9, 19, -21},0, {432, 1002},{0x97, 0x42, 0xE3, 0xFF}}},
	{{{-7, 23, 4},0, {233, 994},{0xA1, 0x55, 0xFF, 0xFF}}},
	{{{4, -13, -20},0, {994, 591},{0xB0, 0x9E, 0x0, 0xFF}}},
	{{{-9, 19, -21},0, {952, 356},{0x97, 0x42, 0xE3, 0xFF}}},
	{{{18, -7, -33},0, {925, 723},{0xDF, 0xCF, 0x90, 0xFF}}},
	{{{18, 37, -28},0, {834, 25},{0xED, 0x61, 0xB0, 0xFF}}},
	{{{42, 3, -32},0, {782, 635},{0x30, 0xF4, 0x8B, 0xFF}}},
	{{{43, 47, -10},0, {680, 56},{0x4E, 0x61, 0xE8, 0xFF}}},
	{{{65, 3, -16},0, {681, 795},{0x74, 0xDE, 0xDA, 0xFF}}},
	{{{45, 20, 17},0, {496, 471},{0x33, 0x23, 0x6F, 0xFF}}},
	{{{53, 0, 13},0, {498, 810},{0x53, 0xD2, 0x55, 0xFF}}},
	{{{65, 3, -16},0, {681, 795},{0x74, 0xDE, 0xDA, 0xFF}}},
	{{{8, -12, 6},0, {293, 587},{0x3, 0x8C, 0x34, 0xFF}}},
	{{{53, 0, 13},0, {457, 575},{0x53, 0xD2, 0x55, 0xFF}}},
	{{{2, 7, 13},0, {293, 248},{0xDD, 0xA, 0x7A, 0xFF}}},
	{{{45, 20, 17},0, {517, 336},{0x33, 0x23, 0x6F, 0xFF}}},
	{{{33, 48, 12},0, {500, 45},{0x21, 0x65, 0x46, 0xFF}}},
	{{{10, 37, 7},0, {378, 53},{0xC8, 0x67, 0x31, 0xFF}}},
	{{{-7, 23, 4},0, {301, 65},{0xA1, 0x55, 0xFF, 0xFF}}},
	{{{25, -15, -23},0, {459, 882},{0x17, 0x87, 0xE1, 0xFF}}},
	{{{18, -7, -33},0, {593, 918},{0xDF, 0xCF, 0x90, 0xFF}}},
	{{{42, 3, -32},0, {558, 781},{0x30, 0xF4, 0x8B, 0xFF}}},
	{{{4, -13, -20},0, {328, 1010},{0xB0, 0x9E, 0x0, 0xFF}}},
	{{{8, -12, 6},0, {223, 926},{0x3, 0x8C, 0x34, 0xFF}}},
	{{{53, 0, 13},0, {240, 697},{0x53, 0xD2, 0x55, 0xFF}}},
	{{{65, 3, -16},0, {434, 555},{0x74, 0xDE, 0xDA, 0xFF}}},
	{{{53, 0, 13},0, {240, 697},{0x53, 0xD2, 0x55, 0xFF}}},
	{{{25, -15, -23},0, {459, 882},{0x17, 0x87, 0xE1, 0xFF}}},
	{{{42, 3, -32},0, {558, 781},{0x30, 0xF4, 0x8B, 0xFF}}},
};

Gfx mario_000_displaylist_003_LHand_mesh_tri_1[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSP1Triangle(14, 1, 15, 0),
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(9, 5, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 10, 13, 0),
	gsSP1Triangle(13, 10, 14, 0),
	gsSP1Triangle(10, 15, 14, 0),
	gsSPVertex(mario_000_displaylist_003_LHand_mesh_vtx_1 + 32, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_displaylist_003_LHand_skinned_vtx_0[4] = {
	{{{84, 5, -4},0, {276, 968},{0x8A, 0xDA, 0xE4, 0xFF}}},
	{{{84, 5, -4},0, {297, 326},{0x8A, 0xDA, 0xE4, 0xFF}}},
	{{{84, 5, -4},0, {333, 998},{0x8A, 0xDA, 0xE4, 0xFF}}},
	{{{84, 5, -4},0, {973, 473},{0x8A, 0xDA, 0xE4, 0xFF}}},
};

Gfx mario_000_displaylist_003_LHand_skinned_tri_0[] = {
	gsSPVertex(mario_000_displaylist_003_LHand_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_vtx_0[62] = {
	{{{76, -18, -37},0, {521, 68},{0x65, 0xDC, 0xBC, 0xFF}}},
	{{{63, -3, -28},0, {521, 68},{0x6, 0x23, 0x86, 0xFF}}},
	{{{76, -7, -12},0, {518, 40},{0x59, 0xB8, 0x38, 0xFF}}},
	{{{99, 18, -31},0, {668, 53},{0x7A, 0xE0, 0x11, 0xFF}}},
	{{{70, 30, 5},0, {561, 403},{0x3E, 0x18, 0x6C, 0xFF}}},
	{{{97, 52, -36},0, {693, 362},{0x66, 0x4B, 0x4, 0xFF}}},
	{{{91, 47, -48},0, {693, 362},{0x2E, 0x27, 0x90, 0xFF}}},
	{{{95, 15, -43},0, {668, 53},{0x3A, 0xC9, 0x9D, 0xFF}}},
	{{{76, -7, -12},0, {357, 301},{0x59, 0xB8, 0x38, 0xFF}}},
	{{{70, 30, 5},0, {368, 397},{0x3E, 0x18, 0x6C, 0xFF}}},
	{{{16, 1, 17},0, {336, 450},{0xDD, 0xEF, 0x79, 0xFF}}},
	{{{32, 24, 12},0, {361, 452},{0xEE, 0x23, 0x79, 0xFF}}},
	{{{8, 17, 2},0, {355, 493},{0x9B, 0x43, 0x26, 0xFF}}},
	{{{0, -7, -1},0, {346, 441},{0x8D, 0xCC, 0xF, 0xFF}}},
	{{{8, 10, -19},0, {355, 486},{0xAE, 0x18, 0xA2, 0xFF}}},
	{{{35, 40, -20},0, {357, 492},{0xA9, 0x3E, 0xBB, 0xFF}}},
	{{{37, 41, 8},0, {373, 493},{0xDD, 0x59, 0x53, 0xFF}}},
	{{{35, 40, -20},0, {357, 492},{0xA9, 0x3E, 0xBB, 0xFF}}},
	{{{8, 17, 2},0, {355, 493},{0x9B, 0x43, 0x26, 0xFF}}},
	{{{70, 30, 5},0, {413, 415},{0x3E, 0x18, 0x6C, 0xFF}}},
	{{{37, 41, 8},0, {415, 456},{0xDD, 0x59, 0x53, 0xFF}}},
	{{{32, 24, 12},0, {410, 439},{0xEE, 0x23, 0x79, 0xFF}}},
	{{{8, 17, 2},0, {408, 456},{0x9B, 0x43, 0x26, 0xFF}}},
	{{{37, 41, 8},0, {582, 767},{0xDD, 0x59, 0x53, 0xFF}}},
	{{{70, 30, 5},0, {561, 403},{0x3E, 0x18, 0x6C, 0xFF}}},
	{{{65, 64, -27},0, {661, 766},{0x0, 0x7D, 0x17, 0xFF}}},
	{{{97, 52, -36},0, {690, 341},{0x66, 0x4B, 0x4, 0xFF}}},
	{{{60, 61, -40},0, {661, 766},{0xCE, 0x4C, 0xA8, 0xFF}}},
	{{{91, 47, -48},0, {690, 341},{0x2E, 0x27, 0x90, 0xFF}}},
	{{{63, -3, -28},0, {521, 68},{0x6, 0x23, 0x86, 0xFF}}},
	{{{95, 15, -43},0, {668, 53},{0x3A, 0xC9, 0x9D, 0xFF}}},
	{{{35, 40, -20},0, {515, 767},{0xA9, 0x3E, 0xBB, 0xFF}}},
	{{{18, -11, -18},0, {354, 398},{0xC9, 0xB6, 0xA9, 0xFF}}},
	{{{0, -7, -1},0, {346, 441},{0x8D, 0xCC, 0xF, 0xFF}}},
	{{{8, 10, -19},0, {355, 460},{0xAE, 0x18, 0xA2, 0xFF}}},
	{{{35, 40, -20},0, {357, 467},{0xA9, 0x3E, 0xBB, 0xFF}}},
	{{{63, -3, -28},0, {358, 308},{0x6, 0x23, 0x86, 0xFF}}},
	{{{60, -12, -40},0, {355, 306},{0xFA, 0x27, 0x87, 0xFF}}},
	{{{76, -18, -37},0, {356, 250},{0x65, 0xDC, 0xBC, 0xFF}}},
	{{{56, -21, -35},0, {356, 247},{0xE5, 0x9C, 0xB6, 0xFF}}},
	{{{76, -18, -37},0, {356, 247},{0x65, 0xDC, 0xBC, 0xFF}}},
	{{{22, -17, 5},0, {507, 373},{0xF4, 0x92, 0x3E, 0xFF}}},
	{{{18, -11, -18},0, {507, 407},{0xC9, 0xB6, 0xA9, 0xFF}}},
	{{{56, -21, -35},0, {514, -164},{0xE5, 0x9C, 0xB6, 0xFF}}},
	{{{0, -7, -1},0, {507, 390},{0x8D, 0xCC, 0xF, 0xFF}}},
	{{{76, -7, -12},0, {181, 262},{0x59, 0xB8, 0x38, 0xFF}}},
	{{{63, -3, -28},0, {184, 289},{0x6, 0x23, 0x86, 0xFF}}},
	{{{95, 15, -43},0, {166, 490},{0x3A, 0xC9, 0x9D, 0xFF}}},
	{{{99, 18, -31},0, {166, 490},{0x7A, 0xE0, 0x11, 0xFF}}},
	{{{76, -7, -12},0, {181, 262},{0x59, 0xB8, 0x38, 0xFF}}},
	{{{95, 15, -43},0, {166, 490},{0x3A, 0xC9, 0x9D, 0xFF}}},
	{{{16, 1, 17},0, {355, 470},{0xDD, 0xEF, 0x79, 0xFF}}},
	{{{0, -7, -1},0, {346, 441},{0x8D, 0xCC, 0xF, 0xFF}}},
	{{{22, -17, 5},0, {354, 389},{0xF4, 0x92, 0x3E, 0xFF}}},
	{{{76, -7, -12},0, {357, 301},{0x59, 0xB8, 0x38, 0xFF}}},
	{{{64, -22, -24},0, {356, 267},{0x1F, 0x88, 0x1E, 0xFF}}},
	{{{56, -21, -35},0, {356, 247},{0xE5, 0x9C, 0xB6, 0xFF}}},
	{{{76, -18, -37},0, {357, 301},{0x65, 0xDC, 0xBC, 0xFF}}},
	{{{35, 40, -20},0, {166, 490},{0xA9, 0x3E, 0xBB, 0xFF}}},
	{{{37, 41, 8},0, {373, 493},{0xDD, 0x59, 0x53, 0xFF}}},
	{{{60, 61, -40},0, {166, 490},{0xCE, 0x4C, 0xA8, 0xFF}}},
	{{{65, 64, -27},0, {395, 493},{0x0, 0x7D, 0x17, 0xFF}}},
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(13, 15, 11, 0),
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(0, 5, 7, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 12, 10, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_vtx_0 + 48, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 6, 3, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(7, 9, 6, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_006_Rshoulder_mesh_vtx_0[13] = {
	{{{-8, -10, -19},0, {7, -2275},{0xCC, 0xD1, 0x96, 0xFF}}},
	{{{82, 25, -13},0, {119, -524},{0xFE, 0x4C, 0x9B, 0xFF}}},
	{{{76, -8, -16},0, {65, -523},{0x4, 0xC8, 0x8E, 0xFF}}},
	{{{-5, 29, -16},0, {67, -2220},{0xD2, 0x4A, 0xA4, 0xFF}}},
	{{{-28, 4, 10},0, {504, -2663},{0x81, 0x1, 0x1, 0xFF}}},
	{{{-11, -30, 10},0, {496, -2333},{0xC2, 0x92, 0xF3, 0xFF}}},
	{{{63, -26, 10},0, {494, -522},{0x5, 0x83, 0xEB, 0xFF}}},
	{{{-6, -22, 35},0, {920, -2225},{0xD2, 0xB6, 0x5C, 0xFF}}},
	{{{-8, 16, 39},0, {982, -2280},{0xCC, 0x2F, 0x6A, 0xFF}}},
	{{{82, 14, 35},0, {922, -525},{0xFF, 0x33, 0x74, 0xFF}}},
	{{{76, -19, 32},0, {868, -527},{0x5, 0xAE, 0x60, 0xFF}}},
	{{{73, 32, 10},0, {494, -708},{0xF9, 0x7D, 0x14, 0xFF}}},
	{{{-11, 36, 10},0, {496, -2333},{0xC3, 0x6F, 0xD, 0xFF}}},
};

Gfx mario_000_offset_006_Rshoulder_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_006_Rshoulder_mesh_vtx_0 + 0, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(9, 7, 10, 0),
	gsSP1Triangle(7, 6, 10, 0),
	gsSP1Triangle(11, 8, 9, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(3, 12, 11, 0),
	gsSP1Triangle(3, 11, 1, 0),
	gsSP1Triangle(3, 4, 12, 0),
	gsSP1Triangle(8, 12, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_007_RArm_mesh_vtx_0[6] = {
	{{{83, -19, 32},0, {868, 1120},{0xF4, 0xB0, 0x62, 0xFF}}},
	{{{90, -26, 10},0, {491, 1247},{0xF3, 0x84, 0xE9, 0xFF}}},
	{{{87, -8, -16},0, {64, 1188},{0xF3, 0xCA, 0x8E, 0xFF}}},
	{{{84, 25, -13},0, {119, 1125},{0xF1, 0x50, 0x9F, 0xFF}}},
	{{{8, 32, 10},0, {494, -336},{0xF3, 0x7D, 0x11, 0xFF}}},
	{{{87, 14, 35},0, {921, 1182},{0xF2, 0x38, 0x71, 0xFF}}},
};

Gfx mario_000_offset_007_RArm_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_mesh_vtx_0 + 0, 6, 6),
	gsSP1Triangle(2, 1, 6, 0),
	gsSP1Triangle(6, 1, 7, 0),
	gsSP1Triangle(7, 1, 4, 0),
	gsSP1Triangle(4, 3, 7, 0),
	gsSP1Triangle(7, 3, 8, 0),
	gsSP1Triangle(8, 3, 0, 0),
	gsSP1Triangle(8, 0, 9, 0),
	gsSP1Triangle(9, 0, 10, 0),
	gsSP1Triangle(0, 5, 10, 0),
	gsSP1Triangle(5, 2, 10, 0),
	gsSP1Triangle(10, 2, 11, 0),
	gsSP1Triangle(2, 6, 11, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_007_RArm_mesh_vtx_1[14] = {
	{{{84, 25, -13},0, {119, 1125},{0xF1, 0x50, 0x9F, 0xFF}}},
	{{{8, 32, 10},0, {494, -336},{0xF3, 0x7D, 0x11, 0xFF}}},
	{{{90, 32, 10},0, {491, 1247},{0xF1, 0x7C, 0x16, 0xFF}}},
	{{{87, 14, 35},0, {921, 1182},{0xF2, 0x38, 0x71, 0xFF}}},
	{{{101, 16, 38},0, {970, 1469},{0x5D, 0x20, 0x50, 0xFF}}},
	{{{98, -22, 35},0, {911, 1400},{0x50, 0xC5, 0x50, 0xFF}}},
	{{{83, -19, 32},0, {868, 1120},{0xF4, 0xB0, 0x62, 0xFF}}},
	{{{90, -26, 10},0, {491, 1247},{0xF3, 0x84, 0xE9, 0xFF}}},
	{{{105, -29, 10},0, {492, 1542},{0x67, 0xB6, 0xFA, 0xFF}}},
	{{{102, -10, -19},0, {16, 1476},{0x5E, 0xE2, 0xB0, 0xFF}}},
	{{{87, -8, -16},0, {64, 1188},{0xF3, 0xCA, 0x8E, 0xFF}}},
	{{{98, 28, -15},0, {77, 1406},{0x51, 0x3B, 0xB1, 0xFF}}},
	{{{105, 35, 10},0, {492, 1542},{0x67, 0x4A, 0x6, 0xFF}}},
	{{{73, 3, 10},0, {492, 915},{0x7F, 0xFF, 0x1, 0xFF}}},
};

Gfx mario_000_offset_007_RArm_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_007_RArm_mesh_vtx_1 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 0, 11, 0),
	gsSP1Triangle(2, 11, 0, 0),
	gsSP1Triangle(2, 12, 11, 0),
	gsSP1Triangle(2, 4, 12, 0),
	gsSP1Triangle(12, 4, 13, 0),
	gsSP1Triangle(4, 5, 13, 0),
	gsSP1Triangle(5, 8, 13, 0),
	gsSP1Triangle(8, 9, 13, 0),
	gsSP1Triangle(9, 11, 13, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_offset_007_RArm_skinned_vtx_0[6] = {
	{{{82, 25, -13},0, {119, -524},{0xFE, 0x4C, 0x9B, 0xFF}}},
	{{{76, -19, 32},0, {868, -527},{0x5, 0xAE, 0x60, 0xFF}}},
	{{{82, 14, 35},0, {922, -525},{0xFF, 0x33, 0x74, 0xFF}}},
	{{{76, -8, -16},0, {65, -523},{0x4, 0xC8, 0x8E, 0xFF}}},
	{{{63, -26, 10},0, {494, -522},{0x5, 0x83, 0xEB, 0xFF}}},
	{{{73, 32, 10},0, {494, -708},{0xF9, 0x7D, 0x14, 0xFF}}},
};

Gfx mario_000_offset_007_RArm_skinned_tri_0[] = {
	gsSPVertex(mario_000_offset_007_RArm_skinned_vtx_0 + 0, 6, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_004_Rhand_mesh_vtx_0[9] = {
	{{{8, -12, -6},0, {223, 926},{0xBB, 0x9B, 0xDD, 0xFF}}},
	{{{5, -13, 20},0, {328, 1010},{0xD9, 0x89, 0x15, 0xFF}}},
	{{{-8, 19, 22},0, {432, 1002},{0xBC, 0x3B, 0x5A, 0xFF}}},
	{{{-7, 23, -3},0, {233, 994},{0xB4, 0x64, 0xEB, 0xFF}}},
	{{{5, -13, 20},0, {994, 591},{0xD9, 0x89, 0x15, 0xFF}}},
	{{{-8, 19, 22},0, {952, 356},{0xBC, 0x3B, 0x5A, 0xFF}}},
	{{{-7, 23, -3},0, {301, 65},{0xB4, 0x64, 0xEB, 0xFF}}},
	{{{2, 7, -12},0, {293, 248},{0xA5, 0xFA, 0xA8, 0xFF}}},
	{{{8, -12, -6},0, {293, 587},{0xBB, 0x9B, 0xDD, 0xFF}}},
};

Gfx mario_000_displaylist_004_Rhand_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_vtx_0 + 0, 9, 4),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(8, 9, 3, 0),
	gsSP1Triangle(10, 11, 0, 0),
	gsSP1Triangle(11, 12, 0, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_displaylist_004_Rhand_mesh_vtx_1[36] = {
	{{{33, 48, -11},0, {537, -3},{0xFE, 0x5E, 0xAB, 0xFF}}},
	{{{43, 47, 10},0, {667, 55},{0x4C, 0x5F, 0x25, 0xFF}}},
	{{{45, 20, -16},0, {496, 471},{0x40, 0x9, 0x93, 0xFF}}},
	{{{-7, 23, -3},0, {301, 65},{0xB4, 0x64, 0xEB, 0xFF}}},
	{{{10, 37, -6},0, {378, 53},{0xB1, 0x59, 0xD4, 0xFF}}},
	{{{2, 7, -12},0, {293, 248},{0xA5, 0xFA, 0xA8, 0xFF}}},
	{{{33, 48, -11},0, {500, 45},{0xFE, 0x5E, 0xAB, 0xFF}}},
	{{{45, 20, -16},0, {517, 336},{0x40, 0x9, 0x93, 0xFF}}},
	{{{53, 0, -12},0, {457, 575},{0x40, 0xC1, 0xA6, 0xFF}}},
	{{{8, -12, -6},0, {293, 587},{0xBB, 0x9B, 0xDD, 0xFF}}},
	{{{65, 2, 17},0, {681, 795},{0x78, 0xE1, 0x1C, 0xFF}}},
	{{{53, 0, -12},0, {498, 810},{0x40, 0xC1, 0xA6, 0xFF}}},
	{{{43, 47, 10},0, {680, 56},{0x4C, 0x5F, 0x25, 0xFF}}},
	{{{43, 3, 33},0, {782, 635},{0x39, 0xE9, 0x6F, 0xFF}}},
	{{{18, 37, 29},0, {834, 25},{0xD6, 0x54, 0x55, 0xFF}}},
	{{{18, -7, 33},0, {925, 723},{0xE0, 0xD3, 0x72, 0xFF}}},
	{{{18, 37, 29},0, {834, 25},{0xD6, 0x54, 0x55, 0xFF}}},
	{{{-8, 19, 22},0, {952, 356},{0xBC, 0x3B, 0x5A, 0xFF}}},
	{{{18, -7, 33},0, {925, 723},{0xE0, 0xD3, 0x72, 0xFF}}},
	{{{5, -13, 20},0, {994, 591},{0xD9, 0x89, 0x15, 0xFF}}},
	{{{43, 47, 10},0, {460, 497},{0x4C, 0x5F, 0x25, 0xFF}}},
	{{{33, 48, -11},0, {278, 595},{0xFE, 0x5E, 0xAB, 0xFF}}},
	{{{18, 37, 29},0, {525, 830},{0xD6, 0x54, 0x55, 0xFF}}},
	{{{10, 37, -6},0, {231, 890},{0xB1, 0x59, 0xD4, 0xFF}}},
	{{{-8, 19, 22},0, {432, 1002},{0xBC, 0x3B, 0x5A, 0xFF}}},
	{{{-7, 23, -3},0, {233, 994},{0xB4, 0x64, 0xEB, 0xFF}}},
	{{{5, -13, 20},0, {328, 1010},{0xD9, 0x89, 0x15, 0xFF}}},
	{{{8, -12, -6},0, {223, 926},{0xBB, 0x9B, 0xDD, 0xFF}}},
	{{{25, -15, 24},0, {459, 882},{0xF, 0x89, 0x2A, 0xFF}}},
	{{{53, 0, -12},0, {240, 697},{0x40, 0xC1, 0xA6, 0xFF}}},
	{{{65, 2, 17},0, {434, 555},{0x78, 0xE1, 0x1C, 0xFF}}},
	{{{43, 3, 33},0, {558, 781},{0x39, 0xE9, 0x6F, 0xFF}}},
	{{{25, -15, 24},0, {459, 882},{0xF, 0x89, 0x2A, 0xFF}}},
	{{{43, 3, 33},0, {558, 781},{0x39, 0xE9, 0x6F, 0xFF}}},
	{{{18, -7, 33},0, {593, 918},{0xE0, 0xD3, 0x72, 0xFF}}},
	{{{5, -13, 20},0, {328, 1010},{0xD9, 0x89, 0x15, 0xFF}}},
};

Gfx mario_000_displaylist_004_Rhand_mesh_tri_1[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(9, 5, 8, 0),
	gsSP1Triangle(2, 10, 11, 0),
	gsSP1Triangle(12, 10, 2, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(mario_000_displaylist_004_Rhand_mesh_vtx_1 + 32, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_displaylist_004_Rhand_skinned_vtx_0[4] = {
	{{{84, 5, 4},0, {297, 326},{0x91, 0xF0, 0xC4, 0xFF}}},
	{{{84, 5, 4},0, {276, 968},{0x91, 0xF0, 0xC4, 0xFF}}},
	{{{84, 5, 4},0, {333, 998},{0x91, 0xF0, 0xC4, 0xFF}}},
	{{{84, 5, 4},0, {973, 473},{0x91, 0xF0, 0xC4, 0xFF}}},
};

Gfx mario_000_displaylist_004_Rhand_skinned_tri_0[] = {
	gsSPVertex(mario_000_displaylist_004_Rhand_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_vtx_0[62] = {
	{{{69, -18, 37},0, {521, 68},{0x65, 0xDC, 0x44, 0xFF}}},
	{{{69, -7, 13},0, {518, 40},{0x59, 0xB8, 0xC8, 0xFF}}},
	{{{55, -3, 28},0, {521, 68},{0x6, 0x23, 0x7A, 0xFF}}},
	{{{63, 30, -4},0, {561, 403},{0x3E, 0x18, 0x94, 0xFF}}},
	{{{92, 18, 32},0, {668, 53},{0x7A, 0xE0, 0xEF, 0xFF}}},
	{{{90, 52, 36},0, {693, 362},{0x66, 0x4B, 0xFC, 0xFF}}},
	{{{83, 47, 49},0, {693, 362},{0x2E, 0x27, 0x70, 0xFF}}},
	{{{87, 15, 44},0, {668, 53},{0x3A, 0xC9, 0x63, 0xFF}}},
	{{{69, -7, 13},0, {357, 301},{0x59, 0xB8, 0xC8, 0xFF}}},
	{{{9, 1, -16},0, {336, 450},{0xDD, 0xEF, 0x87, 0xFF}}},
	{{{63, 30, -4},0, {368, 397},{0x3E, 0x18, 0x94, 0xFF}}},
	{{{24, 24, -12},0, {361, 452},{0xEE, 0x23, 0x87, 0xFF}}},
	{{{1, 17, -1},0, {355, 493},{0x9B, 0x43, 0xDA, 0xFF}}},
	{{{-8, -7, 2},0, {346, 441},{0x8D, 0xCC, 0xF1, 0xFF}}},
	{{{1, 10, 20},0, {355, 486},{0xAE, 0x18, 0x5E, 0xFF}}},
	{{{28, 40, 21},0, {357, 492},{0xA9, 0x3E, 0x45, 0xFF}}},
	{{{30, 41, -7},0, {373, 493},{0xDD, 0x59, 0xAD, 0xFF}}},
	{{{1, 17, -1},0, {355, 493},{0x9B, 0x43, 0xDA, 0xFF}}},
	{{{28, 40, 21},0, {357, 492},{0xA9, 0x3E, 0x45, 0xFF}}},
	{{{63, 30, -4},0, {413, 415},{0x3E, 0x18, 0x94, 0xFF}}},
	{{{24, 24, -12},0, {410, 439},{0xEE, 0x23, 0x87, 0xFF}}},
	{{{30, 41, -7},0, {415, 456},{0xDD, 0x59, 0xAD, 0xFF}}},
	{{{1, 17, -1},0, {408, 456},{0x9B, 0x43, 0xDA, 0xFF}}},
	{{{30, 41, -7},0, {582, 767},{0xDD, 0x59, 0xAD, 0xFF}}},
	{{{57, 64, 28},0, {661, 766},{0x0, 0x7D, 0xE9, 0xFF}}},
	{{{63, 30, -4},0, {561, 403},{0x3E, 0x18, 0x94, 0xFF}}},
	{{{90, 52, 36},0, {690, 341},{0x66, 0x4B, 0xFC, 0xFF}}},
	{{{52, 61, 41},0, {661, 766},{0xCE, 0x4C, 0x58, 0xFF}}},
	{{{83, 47, 49},0, {690, 341},{0x2E, 0x27, 0x70, 0xFF}}},
	{{{55, -3, 28},0, {521, 68},{0x6, 0x23, 0x7A, 0xFF}}},
	{{{28, 40, 21},0, {515, 767},{0xA9, 0x3E, 0x45, 0xFF}}},
	{{{87, 15, 44},0, {668, 53},{0x3A, 0xC9, 0x63, 0xFF}}},
	{{{10, -11, 19},0, {354, 398},{0xC9, 0xB6, 0x57, 0xFF}}},
	{{{1, 10, 20},0, {355, 460},{0xAE, 0x18, 0x5E, 0xFF}}},
	{{{-8, -7, 2},0, {346, 441},{0x8D, 0xCC, 0xF1, 0xFF}}},
	{{{28, 40, 21},0, {357, 467},{0xA9, 0x3E, 0x45, 0xFF}}},
	{{{55, -3, 28},0, {358, 308},{0x6, 0x23, 0x7A, 0xFF}}},
	{{{53, -12, 41},0, {355, 306},{0xFA, 0x27, 0x79, 0xFF}}},
	{{{48, -21, 36},0, {356, 247},{0xE5, 0x9C, 0x4A, 0xFF}}},
	{{{69, -18, 37},0, {356, 247},{0x65, 0xDC, 0x44, 0xFF}}},
	{{{69, -18, 37},0, {356, 250},{0x65, 0xDC, 0x44, 0xFF}}},
	{{{15, -17, -4},0, {507, 373},{0xF4, 0x92, 0xC2, 0xFF}}},
	{{{48, -21, 36},0, {514, -164},{0xE5, 0x9C, 0x4A, 0xFF}}},
	{{{10, -11, 19},0, {507, 407},{0xC9, 0xB6, 0x57, 0xFF}}},
	{{{-8, -7, 2},0, {507, 390},{0x8D, 0xCC, 0xF1, 0xFF}}},
	{{{69, -7, 13},0, {181, 262},{0x59, 0xB8, 0xC8, 0xFF}}},
	{{{87, 15, 44},0, {166, 490},{0x3A, 0xC9, 0x63, 0xFF}}},
	{{{55, -3, 28},0, {184, 289},{0x6, 0x23, 0x7A, 0xFF}}},
	{{{92, 18, 32},0, {166, 490},{0x7A, 0xE0, 0xEF, 0xFF}}},
	{{{87, 15, 44},0, {166, 490},{0x3A, 0xC9, 0x63, 0xFF}}},
	{{{69, -7, 13},0, {181, 262},{0x59, 0xB8, 0xC8, 0xFF}}},
	{{{9, 1, -16},0, {355, 470},{0xDD, 0xEF, 0x87, 0xFF}}},
	{{{15, -17, -4},0, {354, 389},{0xF4, 0x92, 0xC2, 0xFF}}},
	{{{-8, -7, 2},0, {346, 441},{0x8D, 0xCC, 0xF1, 0xFF}}},
	{{{69, -7, 13},0, {357, 301},{0x59, 0xB8, 0xC8, 0xFF}}},
	{{{56, -22, 24},0, {356, 267},{0x1F, 0x88, 0xE2, 0xFF}}},
	{{{69, -18, 37},0, {357, 301},{0x65, 0xDC, 0x44, 0xFF}}},
	{{{48, -21, 36},0, {356, 247},{0xE5, 0x9C, 0x4A, 0xFF}}},
	{{{28, 40, 21},0, {166, 490},{0xA9, 0x3E, 0x45, 0xFF}}},
	{{{52, 61, 41},0, {166, 490},{0xCE, 0x4C, 0x58, 0xFF}}},
	{{{30, 41, -7},0, {373, 493},{0xDD, 0x59, 0xAD, 0xFF}}},
	{{{57, 64, 28},0, {395, 493},{0x0, 0x7D, 0xE9, 0xFF}}},
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_tri_0[] = {
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 9, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(13, 11, 14, 0),
	gsSP1Triangle(15, 12, 13, 0),
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(5, 8, 4, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 11, 12, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_vtx_0 + 48, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 3, 6, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(7, 9, 4, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPEndDisplayList(),
};

Vtx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0[77] = {
	{{{126, 60, 8},0, {482, 706},{0x1E, 0x7B, 0x1, 0xFF}}},
	{{{131, 43, 18},0, {481, 705},{0x51, 0xE9, 0x5F, 0xFF}}},
	{{{137, 46, -2},0, {480, 708},{0x68, 0xFF, 0xB8, 0xFF}}},
	{{{75, -10, -18},0, {513, 567},{0x1A, 0xC3, 0x94, 0xFF}}},
	{{{44, -17, -21},0, {401, 583},{0x1, 0xBA, 0x96, 0xFF}}},
	{{{76, 13, -12},0, {515, 436},{0x1A, 0x25, 0x89, 0xFF}}},
	{{{56, -17, 34},0, {783, 750},{0x37, 0xB1, 0x52, 0xFF}}},
	{{{84, -12, 15},0, {681, 862},{0x2B, 0x9D, 0x43, 0xFF}}},
	{{{74, -3, 27},0, {718, 687},{0x57, 0xF8, 0x5D, 0xFF}}},
	{{{74, -3, 27},0, {703, 562},{0x57, 0xF8, 0x5D, 0xFF}}},
	{{{84, -12, 15},0, {704, 546},{0x2B, 0x9D, 0x43, 0xFF}}},
	{{{79, 12, 16},0, {706, 555},{0x4C, 0x11, 0x65, 0xFF}}},
	{{{69, 11, 28},0, {705, 570},{0x5A, 0x17, 0x56, 0xFF}}},
	{{{73, 38, 17},0, {708, 563},{0x39, 0x47, 0x58, 0xFF}}},
	{{{64, 30, 29},0, {707, 577},{0x3F, 0x2A, 0x66, 0xFF}}},
	{{{49, 66, 1},0, {537, 64},{0x1B, 0x73, 0xD1, 0xFF}}},
	{{{62, 58, 16},0, {673, 122},{0x4C, 0x5C, 0x2B, 0xFF}}},
	{{{67, 41, -6},0, {514, 437},{0x1E, 0x45, 0x9A, 0xFF}}},
	{{{73, 38, 17},0, {676, 420},{0x39, 0x47, 0x58, 0xFF}}},
	{{{64, 30, 29},0, {718, 436},{0x3F, 0x2A, 0x66, 0xFF}}},
	{{{-2, -4, -7},0, {223, 926},{0xB8, 0xA8, 0xC6, 0xFF}}},
	{{{-4, -1, 18},0, {328, 1010},{0xA2, 0xB6, 0x2A, 0xFF}}},
	{{{-21, 9, 3},0, {276, 968},{0x88, 0xD7, 0xF8, 0xFF}}},
	{{{32, -30, 19},0, {459, 882},{0xF1, 0x82, 0xFE, 0xFF}}},
	{{{44, -17, -21},0, {231, 791},{0x1, 0xBA, 0x96, 0xFF}}},
	{{{75, -10, -18},0, {251, 617},{0x1A, 0xC3, 0x94, 0xFF}}},
	{{{84, -12, 15},0, {434, 555},{0x2B, 0x9D, 0x43, 0xFF}}},
	{{{56, -17, 34},0, {527, 731},{0x37, 0xB1, 0x52, 0xFF}}},
	{{{24, -24, 45},0, {593, 918},{0xE0, 0xAF, 0x5C, 0xFF}}},
	{{{56, -17, 34},0, {589, 830},{0x37, 0xB1, 0x52, 0xFF}}},
	{{{56, -17, 34},0, {822, 826},{0x37, 0xB1, 0x52, 0xFF}}},
	{{{55, 8, 41},0, {772, 594},{0x31, 0x8, 0x75, 0xFF}}},
	{{{24, -24, 45},0, {906, 731},{0xE0, 0xAF, 0x5C, 0xFF}}},
	{{{22, 47, 40},0, {834, 92},{0xE7, 0x47, 0x66, 0xFF}}},
	{{{62, 58, 16},0, {673, 122},{0x4C, 0x5C, 0x2B, 0xFF}}},
	{{{64, 30, 29},0, {722, 436},{0x3F, 0x2A, 0x66, 0xFF}}},
	{{{69, 11, 28},0, {722, 617},{0x5A, 0x17, 0x56, 0xFF}}},
	{{{74, -3, 27},0, {722, 687},{0x57, 0xF8, 0x5D, 0xFF}}},
	{{{56, -17, 34},0, {783, 750},{0x37, 0xB1, 0x52, 0xFF}}},
	{{{-11, 26, 24},0, {952, 423},{0x9F, 0x20, 0x4C, 0xFF}}},
	{{{-4, -1, 18},0, {991, 625},{0xA2, 0xB6, 0x2A, 0xFF}}},
	{{{-21, 9, 3},0, {971, 524},{0x88, 0xD7, 0xF8, 0xFF}}},
	{{{62, 58, 16},0, {460, 497},{0x4C, 0x5C, 0x2B, 0xFF}}},
	{{{49, 66, 1},0, {280, 609},{0x1B, 0x73, 0xD1, 0xFF}}},
	{{{22, 47, 40},0, {525, 830},{0xE7, 0x47, 0x66, 0xFF}}},
	{{{15, 60, 0},0, {231, 890},{0xD1, 0x6D, 0xD3, 0xFF}}},
	{{{15, 60, 0},0, {231, 890},{0xD1, 0x6D, 0xD3, 0xFF}}},
	{{{-17, 30, 1},0, {233, 994},{0x94, 0x3F, 0xEB, 0xFF}}},
	{{{22, 47, 40},0, {525, 830},{0xE7, 0x47, 0x66, 0xFF}}},
	{{{-11, 26, 24},0, {432, 1002},{0x9F, 0x20, 0x4C, 0xFF}}},
	{{{-21, 9, 3},0, {333, 998},{0x88, 0xD7, 0xF8, 0xFF}}},
	{{{131, 43, 18},0, {475, 719},{0x51, 0xE9, 0x5F, 0xFF}}},
	{{{79, 12, 16},0, {482, 719},{0x4C, 0x11, 0x65, 0xFF}}},
	{{{137, 46, -2},0, {475, 721},{0x68, 0xFF, 0xB8, 0xFF}}},
	{{{73, 38, 17},0, {482, 719},{0x39, 0x47, 0x58, 0xFF}}},
	{{{126, 60, 8},0, {476, 720},{0x1E, 0x7B, 0x1, 0xFF}}},
	{{{67, 41, -6},0, {483, 722},{0x1E, 0x45, 0x9A, 0xFF}}},
	{{{76, 13, -12},0, {482, 722},{0x1A, 0x25, 0x89, 0xFF}}},
	{{{145, 8, -2},0, {474, 721},{0x5E, 0x3D, 0xC4, 0xFF}}},
	{{{139, 4, 21},0, {475, 718},{0x3D, 0x1E, 0x6B, 0xFF}}},
	{{{84, -12, 15},0, {481, 719},{0x2B, 0x9D, 0x43, 0xFF}}},
	{{{143, -10, 6},0, {474, 720},{0x57, 0xA3, 0xFD, 0xFF}}},
	{{{75, -10, -18},0, {482, 723},{0x1A, 0xC3, 0x94, 0xFF}}},
	{{{143, -10, 6},0, {474, 720},{0x57, 0xA3, 0xFD, 0xFF}}},
	{{{84, -12, 15},0, {481, 719},{0x2B, 0x9D, 0x43, 0xFF}}},
	{{{145, 8, -2},0, {474, 721},{0x5E, 0x3D, 0xC4, 0xFF}}},
	{{{76, 13, -12},0, {482, 722},{0x1A, 0x25, 0x89, 0xFF}}},
	{{{139, 4, 21},0, {475, 718},{0x3D, 0x1E, 0x6B, 0xFF}}},
	{{{-7, 19, -16},0, {293, 248},{0xC5, 0xB, 0x90, 0xFF}}},
	{{{49, 66, 1},0, {500, 45},{0x1B, 0x73, 0xD1, 0xFF}}},
	{{{67, 41, -6},0, {510, 218},{0x1E, 0x45, 0x9A, 0xFF}}},
	{{{15, 60, 0},0, {378, 53},{0xD1, 0x6D, 0xD3, 0xFF}}},
	{{{-17, 30, 1},0, {301, 65},{0x94, 0x3F, 0xEB, 0xFF}}},
	{{{-21, 9, 3},0, {297, 333},{0x88, 0xD7, 0xF8, 0xFF}}},
	{{{-2, -4, -7},0, {295, 601},{0xB8, 0xA8, 0xC6, 0xFF}}},
	{{{44, -17, -21},0, {401, 583},{0x1, 0xBA, 0x96, 0xFF}}},
	{{{76, 13, -12},0, {515, 434},{0x1A, 0x25, 0x89, 0xFF}}},
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_tri_0[] = {
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 5, 8, 0),
	gsSP1Triangle(8, 5, 9, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(12, 8, 11, 0),
	gsSP1Triangle(13, 6, 8, 0),
	gsSP1Triangle(8, 14, 13, 0),
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(6, 5, 1, 0),
	gsSP1Triangle(7, 6, 1, 0),
	gsSP1Triangle(7, 1, 8, 0),
	gsSP1Triangle(3, 9, 2, 0),
	gsSP1Triangle(10, 2, 9, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 6, 5, 0),
	gsSP1Triangle(5, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(11, 9, 7, 0),
	gsSP1Triangle(7, 6, 11, 0),
	gsSP1Triangle(6, 12, 11, 0),
	gsSP1Triangle(13, 12, 6, 0),
	gsSP1Triangle(14, 13, 6, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_vtx_0 + 62, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(1, 3, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 7, 6, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(10, 6, 11, 0),
	gsSP1Triangle(6, 12, 11, 0),
	gsSP1Triangle(12, 6, 13, 0),
	gsSP1Triangle(6, 14, 13, 0),
	gsSP1Triangle(6, 8, 14, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_009_LThigh_mesh_vtx_0[9] = {
	{{{-14, 29, 2},0, {496, -333},{0xCF, 0x75, 0x0, 0xFF}}},
	{{{-43, -12, 1},0, {512, -824},{0x81, 0x5, 0xFF, 0xFF}}},
	{{{-13, -16, 42},0, {-420, -363},{0xD1, 0xFB, 0x76, 0xFF}}},
	{{{-13, -16, -40},0, {1412, -360},{0xD3, 0xFC, 0x89, 0xFF}}},
	{{{73, -13, -33},0, {1338, 1262},{0x3, 0xFE, 0x81, 0xFF}}},
	{{{49, 28, 2},0, {479, 1298},{0x1, 0x7F, 0x1, 0xFF}}},
	{{{72, -13, 38},0, {-381, 1258},{0x1, 0xFE, 0x7F, 0xFF}}},
	{{{64, -50, 2},0, {481, 1004},{0x8, 0x81, 0x0, 0xFF}}},
	{{{-17, -55, 2},0, {499, -456},{0xCD, 0x8C, 0x0, 0xFF}}},
};

Gfx mario_000_offset_009_LThigh_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_009_LThigh_mesh_vtx_0 + 0, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 5, 0, 0),
	gsSP1Triangle(6, 0, 2, 0),
	gsSP1Triangle(7, 6, 2, 0),
	gsSP1Triangle(7, 2, 8, 0),
	gsSP1Triangle(1, 8, 2, 0),
	gsSP1Triangle(1, 3, 8, 0),
	gsSP1Triangle(3, 7, 8, 0),
	gsSP1Triangle(3, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_010_LLeg_mesh_vtx_0[4] = {
	{{{86, 29, 2},0, {461, 2664},{0x44, 0x6B, 0x0, 0xFF}}},
	{{{83, -12, 41},0, {-347, 2615},{0x3E, 0x1, 0x6F, 0xFF}}},
	{{{18, -49, 3},0, {476, 1418},{0xFF, 0x81, 0x0, 0xFF}}},
	{{{83, -12, -37},0, {1268, 2616},{0x3E, 0x1, 0x91, 0xFF}}},
};

Gfx mario_000_offset_010_LLeg_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_mesh_vtx_0 + 0, 4, 4),
	gsSP1Triangle(1, 4, 0, 0),
	gsSP1Triangle(2, 4, 1, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(6, 5, 2, 0),
	gsSP1Triangle(6, 2, 3, 0),
	gsSP1Triangle(0, 6, 3, 0),
	gsSP1Triangle(7, 6, 0, 0),
	gsSP1Triangle(0, 4, 7, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_010_LLeg_mesh_vtx_1[6] = {
	{{{86, 29, 2},0, {461, 2664},{0x44, 0x6B, 0x0, 0xFF}}},
	{{{92, -13, 2},0, {460, 2840},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{83, -12, -37},0, {1268, 2616},{0x3E, 0x1, 0x91, 0xFF}}},
	{{{83, -12, 41},0, {-347, 2615},{0x3E, 0x1, 0x6F, 0xFF}}},
	{{{86, -52, 2},0, {458, 2658},{0x43, 0x94, 0x0, 0xFF}}},
	{{{18, -49, 3},0, {476, 1418},{0xFF, 0x81, 0x0, 0xFF}}},
};

Gfx mario_000_offset_010_LLeg_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_010_LLeg_mesh_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(2, 4, 5, 0),
	gsSP1Triangle(2, 1, 4, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_offset_010_LLeg_skinned_vtx_0[4] = {
	{{{73, -13, -33},0, {1338, 1262},{0x3, 0xFE, 0x81, 0xFF}}},
	{{{49, 28, 2},0, {479, 1298},{0x1, 0x7F, 0x1, 0xFF}}},
	{{{72, -13, 38},0, {-381, 1258},{0x1, 0xFE, 0x7F, 0xFF}}},
	{{{64, -50, 2},0, {481, 1004},{0x8, 0x81, 0x0, 0xFF}}},
};

Gfx mario_000_offset_010_LLeg_skinned_tri_0[] = {
	gsSPVertex(mario_000_offset_010_LLeg_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_011_LFoot_mesh_vtx_0[94] = {
	{{{-12, 40, 4},0, {368, 624},{0xD1, 0x76, 0x3, 0xFF}}},
	{{{-6, 38, -22},0, {368, 496},{0xDE, 0x60, 0xB4, 0xFF}}},
	{{{-25, 21, 4},0, {496, 624},{0x86, 0x25, 0x1, 0xFF}}},
	{{{82, 6, 14},0, {98, 158},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{77, 7, 34},0, {47, 158},{0x2E, 0x53, 0x55, 0xFF}}},
	{{{94, 1, 25},0, {69, 158},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{37, 22, 4},0, {125, 158},{0x2C, 0x77, 0x0, 0xFF}}},
	{{{82, 6, -7},0, {152, 158},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{94, 1, 4},0, {125, 158},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{77, 7, -26},0, {203, 158},{0x2E, 0x53, 0xAB, 0xFF}}},
	{{{94, 1, -18},0, {181, 158},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{35, 23, -28},0, {207, 158},{0x1F, 0x5C, 0xAF, 0xFF}}},
	{{{71, -7, -29},0, {209, 121},{0x12, 0xF5, 0x83, 0xFF}}},
	{{{29, 6, -32},0, {218, 115},{0xFB, 0x0, 0x81, 0xFF}}},
	{{{61, -22, -26},0, {201, 78},{0x2, 0xA0, 0xAD, 0xFF}}},
	{{{22, -11, -27},0, {206, 70},{0xDD, 0xAC, 0xA8, 0xFF}}},
	{{{20, -18, 4},0, {125, 53},{0xD7, 0x88, 0x0, 0xFF}}},
	{{{22, -11, -27},0, {206, 70},{0xDD, 0xAC, 0xA8, 0xFF}}},
	{{{61, -22, -26},0, {201, 78},{0x2, 0xA0, 0xAD, 0xFF}}},
	{{{65, -24, -7},0, {151, 76},{0xE, 0x82, 0xF9, 0xFF}}},
	{{{65, -24, 14},0, {98, 77},{0xE, 0x82, 0x8, 0xFF}}},
	{{{61, -22, 33},0, {48, 78},{0x2, 0x9F, 0x52, 0xFF}}},
	{{{22, -11, 35},0, {44, 70},{0xDD, 0xAC, 0x58, 0xFF}}},
	{{{29, 6, 40},0, {31, 115},{0xFA, 0x0, 0x7F, 0xFF}}},
	{{{71, -7, 36},0, {40, 121},{0x12, 0xF5, 0x7D, 0xFF}}},
	{{{35, 23, 36},0, {42, 158},{0x1F, 0x5C, 0x51, 0xFF}}},
	{{{77, 7, 34},0, {47, 158},{0x2E, 0x53, 0x55, 0xFF}}},
	{{{37, 22, 4},0, {125, 158},{0x2C, 0x77, 0x0, 0xFF}}},
	{{{-4, 37, 30},0, {57, 158},{0xE1, 0x61, 0x4C, 0xFF}}},
	{{{-12, 40, 4},0, {125, 158},{0xD1, 0x76, 0x3, 0xFF}}},
	{{{-6, 38, -22},0, {193, 158},{0xDE, 0x60, 0xB4, 0xFF}}},
	{{{35, 23, -28},0, {207, 158},{0x1F, 0x5C, 0xAF, 0xFF}}},
	{{{-6, 38, -22},0, {193, 158},{0xDE, 0x60, 0xB4, 0xFF}}},
	{{{35, 23, -28},0, {207, 158},{0x1F, 0x5C, 0xAF, 0xFF}}},
	{{{29, 6, -32},0, {218, 115},{0xFB, 0x0, 0x81, 0xFF}}},
	{{{-17, 7, -22},0, {193, 80},{0xAD, 0xDB, 0xA8, 0xFF}}},
	{{{22, -11, -27},0, {206, 70},{0xDD, 0xAC, 0xA8, 0xFF}}},
	{{{20, -18, 4},0, {125, 53},{0xD7, 0x88, 0x0, 0xFF}}},
	{{{-25, 0, 4},0, {125, 57},{0x98, 0xB8, 0x0, 0xFF}}},
	{{{-17, 7, 30},0, {57, 80},{0xAC, 0xDD, 0x59, 0xFF}}},
	{{{22, -11, 35},0, {44, 70},{0xDD, 0xAC, 0x58, 0xFF}}},
	{{{29, 6, 40},0, {31, 115},{0xFA, 0x0, 0x7F, 0xFF}}},
	{{{-4, 37, 30},0, {57, 158},{0xE1, 0x61, 0x4C, 0xFF}}},
	{{{35, 23, 36},0, {42, 158},{0x1F, 0x5C, 0x51, 0xFF}}},
	{{{-25, 21, 4},0, {125, 104},{0x86, 0x25, 0x1, 0xFF}}},
	{{{-12, 40, 4},0, {125, 158},{0xD1, 0x76, 0x3, 0xFF}}},
	{{{86, -19, 25},0, {656, 827},{0x42, 0x94, 0xB, 0xFF}}},
	{{{61, -22, 33},0, {710, 979},{0x2, 0x9F, 0x52, 0xFF}}},
	{{{65, -24, 14},0, {714, 653},{0xE, 0x82, 0x8, 0xFF}}},
	{{{90, -9, 32},0, {600, 949},{0x41, 0xE7, 0x6A, 0xFF}}},
	{{{95, -10, 26},0, {595, 837},{0x79, 0xD9, 0xA, 0xFF}}},
	{{{94, 1, 25},0, {545, 830},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{77, 7, 34},0, {545, 991},{0x2E, 0x53, 0x55, 0xFF}}},
	{{{71, -7, 36},0, {622, 1034},{0x12, 0xF5, 0x7D, 0xFF}}},
	{{{65, -24, -7},0, {714, 653},{0xE, 0x82, 0xF9, 0xFF}}},
	{{{61, -22, -26},0, {710, 969},{0x2, 0xA0, 0xAD, 0xFF}}},
	{{{86, -19, -18},0, {656, 822},{0x42, 0x94, 0xF5, 0xFF}}},
	{{{91, -9, -11},0, {599, 704},{0x51, 0xE3, 0x5D, 0xFF}}},
	{{{95, -10, -18},0, {595, 832},{0x79, 0xD9, 0xF6, 0xFF}}},
	{{{90, -9, -24},0, {600, 940},{0x41, 0xE8, 0x96, 0xFF}}},
	{{{94, 1, -18},0, {545, 826},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{77, 7, -26},0, {545, 982},{0x2E, 0x53, 0xAB, 0xFF}}},
	{{{90, -9, -24},0, {600, 940},{0x41, 0xE8, 0x96, 0xFF}}},
	{{{71, -7, -29},0, {623, 1025},{0x12, 0xF5, 0x83, 0xFF}}},
	{{{77, 7, -26},0, {545, 982},{0x2E, 0x53, 0xAB, 0xFF}}},
	{{{61, -22, -26},0, {710, 969},{0x2, 0xA0, 0xAD, 0xFF}}},
	{{{86, -19, -18},0, {656, 818},{0x42, 0x94, 0xF5, 0xFF}}},
	{{{95, -10, -18},0, {595, 832},{0x79, 0xD9, 0xF6, 0xFF}}},
	{{{94, 1, -18},0, {545, 826},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{91, -9, -11},0, {599, 704},{0x51, 0xE3, 0x5D, 0xFF}}},
	{{{82, 6, -7},0, {545, 653},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{81, -7, -8},0, {605, 645},{0x71, 0xC8, 0xE, 0xFF}}},
	{{{65, -24, -7},0, {714, 653},{0xE, 0x82, 0xF9, 0xFF}}},
	{{{82, 6, 14},0, {545, 653},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{94, 1, 25},0, {545, 826},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{91, -9, 19},0, {599, 704},{0x51, 0xE3, 0xA3, 0xFF}}},
	{{{95, -10, 26},0, {595, 832},{0x79, 0xD9, 0xA, 0xFF}}},
	{{{86, -19, 25},0, {656, 822},{0x42, 0x94, 0xB, 0xFF}}},
	{{{86, -19, 25},0, {656, 822},{0x42, 0x94, 0xB, 0xFF}}},
	{{{65, -24, 14},0, {714, 653},{0xE, 0x82, 0x8, 0xFF}}},
	{{{91, -9, 19},0, {599, 704},{0x51, 0xE3, 0xA3, 0xFF}}},
	{{{81, -7, 15},0, {605, 645},{0x71, 0xC8, 0xF1, 0xFF}}},
	{{{82, 6, 14},0, {545, 653},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{94, 1, 4},0, {545, 302},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{82, 6, 14},0, {545, 238},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{91, -9, 10},0, {599, 259},{0x51, 0xE4, 0x5D, 0xFF}}},
	{{{81, -7, 15},0, {609, 237},{0x71, 0xC8, 0xF1, 0xFF}}},
	{{{65, -24, 14},0, {714, 238},{0xE, 0x82, 0x8, 0xFF}}},
	{{{86, -19, 4},0, {656, 302},{0x47, 0x96, 0x0, 0xFF}}},
	{{{65, -24, -7},0, {715, 369},{0xE, 0x82, 0xF9, 0xFF}}},
	{{{91, -9, -3},0, {599, 345},{0x51, 0xE4, 0xA3, 0xFF}}},
	{{{81, -7, -8},0, {609, 372},{0x71, 0xC8, 0xE, 0xFF}}},
	{{{82, 6, -7},0, {545, 370},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{96, -10, 4},0, {595, 302},{0x79, 0xD9, 0x0, 0xFF}}},
};

Gfx mario_000_offset_011_LFoot_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 4, 3, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(8, 7, 3, 0),
	gsSP1Triangle(6, 7, 9, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(6, 9, 11, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(0, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(12, 9, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 13, 11, 0),
	gsSP1Triangle(14, 11, 15, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 32, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(7, 10, 12, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(7, 12, 6, 0),
	gsSP1Triangle(12, 3, 6, 0),
	gsSP1Triangle(0, 3, 12, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(7, 1, 3, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(mario_000_offset_011_LFoot_mesh_vtx_0 + 78, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 4, 2, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(14, 5, 12, 0),
	gsSP1Triangle(5, 15, 12, 0),
	gsSP1Triangle(15, 5, 7, 0),
	gsSP1Triangle(10, 15, 7, 0),
	gsSP1Triangle(15, 10, 12, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_012_RThigh_mesh_vtx_0[9] = {
	{{{-43, -12, -1},0, {512, -824},{0x81, 0x5, 0x1, 0xFF}}},
	{{{-13, -16, -42},0, {-420, -363},{0xD1, 0xFB, 0x8A, 0xFF}}},
	{{{-17, -55, -2},0, {499, -456},{0xCD, 0x8C, 0x0, 0xFF}}},
	{{{-14, 29, -2},0, {496, -333},{0xCF, 0x75, 0x0, 0xFF}}},
	{{{-13, -16, 40},0, {1412, -360},{0xD3, 0xFC, 0x77, 0xFF}}},
	{{{64, -50, -3},0, {481, 1004},{0x8, 0x81, 0x0, 0xFF}}},
	{{{72, -13, -38},0, {-381, 1258},{0x1, 0xFE, 0x81, 0xFF}}},
	{{{49, 28, -3},0, {479, 1298},{0x1, 0x7F, 0xFF, 0xFF}}},
	{{{73, -13, 33},0, {1338, 1262},{0x3, 0xFE, 0x7F, 0xFF}}},
};

Gfx mario_000_offset_012_RThigh_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_012_RThigh_mesh_vtx_0 + 0, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(5, 2, 1, 0),
	gsSP1Triangle(5, 1, 6, 0),
	gsSP1Triangle(6, 1, 3, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(3, 8, 7, 0),
	gsSP1Triangle(3, 4, 8, 0),
	gsSP1Triangle(4, 5, 8, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_offset_013_RLeg_mesh_vtx_0[4] = {
	{{{86, 29, -2},0, {461, 2664},{0x44, 0x6B, 0x0, 0xFF}}},
	{{{83, -12, 37},0, {1268, 2616},{0x3E, 0x1, 0x6F, 0xFF}}},
	{{{18, -49, -3},0, {476, 1418},{0xFF, 0x81, 0x0, 0xFF}}},
	{{{83, -12, -42},0, {-347, 2615},{0x3E, 0x1, 0x91, 0xFF}}},
};

Gfx mario_000_offset_013_RLeg_mesh_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_mesh_vtx_0 + 0, 4, 4),
	gsSP1Triangle(1, 0, 4, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(0, 3, 6, 0),
	gsSP1Triangle(6, 3, 2, 0),
	gsSP1Triangle(6, 2, 7, 0),
	gsSP1Triangle(2, 4, 7, 0),
	gsSP1Triangle(1, 4, 2, 0),
	gsSPEndDisplayList(),
};Vtx mario_000_offset_013_RLeg_mesh_vtx_1[6] = {
	{{{83, -12, 37},0, {1268, 2616},{0x3E, 0x1, 0x6F, 0xFF}}},
	{{{18, -49, -3},0, {476, 1418},{0xFF, 0x81, 0x0, 0xFF}}},
	{{{86, -52, -3},0, {458, 2658},{0x43, 0x94, 0x0, 0xFF}}},
	{{{83, -12, -42},0, {-347, 2615},{0x3E, 0x1, 0x91, 0xFF}}},
	{{{92, -13, -3},0, {460, 2840},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{86, 29, -2},0, {461, 2664},{0x44, 0x6B, 0x0, 0xFF}}},
};

Gfx mario_000_offset_013_RLeg_mesh_tri_1[] = {
	gsSPVertex(mario_000_offset_013_RLeg_mesh_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSPEndDisplayList(),
};
Vtx mario_000_offset_013_RLeg_skinned_vtx_0[4] = {
	{{{73, -13, 33},0, {1338, 1262},{0x3, 0xFE, 0x7F, 0xFF}}},
	{{{49, 28, -3},0, {479, 1298},{0x1, 0x7F, 0xFF, 0xFF}}},
	{{{72, -13, -38},0, {-381, 1258},{0x1, 0xFE, 0x81, 0xFF}}},
	{{{64, -50, -3},0, {481, 1004},{0x8, 0x81, 0x0, 0xFF}}},
};

Gfx mario_000_offset_013_RLeg_skinned_tri_0[] = {
	gsSPVertex(mario_000_offset_013_RLeg_skinned_vtx_0 + 0, 4, 0),
	gsSPEndDisplayList(),
};

Vtx mario_000_displaylist_005_RFoot_mesh_vtx_0[101] = {
	{{{-12, 40, -4},0, {368, 624},{0xD1, 0x76, 0xFD, 0xFF}}},
	{{{-25, 21, -4},0, {496, 624},{0x86, 0x25, 0xFF, 0xFF}}},
	{{{-6, 38, 22},0, {368, 496},{0xDE, 0x60, 0x4C, 0xFF}}},
	{{{82, 6, -14},0, {98, 158},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{94, 1, -26},0, {69, 158},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{77, 7, -34},0, {47, 158},{0x2E, 0x53, 0xAB, 0xFF}}},
	{{{37, 22, -4},0, {125, 158},{0x2C, 0x77, 0x0, 0xFF}}},
	{{{35, 23, -36},0, {42, 158},{0x1F, 0x5C, 0xAF, 0xFF}}},
	{{{71, -7, -37},0, {40, 121},{0x12, 0xF5, 0x83, 0xFF}}},
	{{{29, 6, -40},0, {31, 115},{0xFA, 0x0, 0x81, 0xFF}}},
	{{{61, -22, -34},0, {48, 78},{0x2, 0x9F, 0xAE, 0xFF}}},
	{{{22, -11, -35},0, {44, 70},{0xDD, 0xAC, 0xA8, 0xFF}}},
	{{{20, -18, -4},0, {125, 53},{0xD7, 0x88, 0x0, 0xFF}}},
	{{{65, -24, -14},0, {98, 77},{0xE, 0x82, 0xF8, 0xFF}}},
	{{{65, -24, 6},0, {151, 76},{0xE, 0x82, 0x7, 0xFF}}},
	{{{61, -22, 26},0, {201, 78},{0x2, 0xA0, 0x53, 0xFF}}},
	{{{20, -18, -4},0, {125, 53},{0xD7, 0x88, 0x0, 0xFF}}},
	{{{61, -22, 26},0, {201, 78},{0x2, 0xA0, 0x53, 0xFF}}},
	{{{22, -11, 27},0, {206, 70},{0xDD, 0xAC, 0x58, 0xFF}}},
	{{{29, 6, 32},0, {218, 115},{0xFB, 0x0, 0x7F, 0xFF}}},
	{{{71, -7, 29},0, {209, 121},{0x12, 0xF5, 0x7D, 0xFF}}},
	{{{35, 23, 28},0, {207, 158},{0x1F, 0x5C, 0x51, 0xFF}}},
	{{{77, 7, 26},0, {203, 158},{0x2E, 0x53, 0x55, 0xFF}}},
	{{{37, 22, -4},0, {125, 158},{0x2C, 0x77, 0x0, 0xFF}}},
	{{{82, 6, 6},0, {152, 158},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{94, 1, 18},0, {181, 158},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{82, 6, -14},0, {98, 158},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{94, 1, -4},0, {125, 158},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{86, -19, -25},0, {656, 827},{0x41, 0x94, 0xF4, 0xFF}}},
	{{{65, -24, -14},0, {714, 653},{0xE, 0x82, 0xF8, 0xFF}}},
	{{{61, -22, -34},0, {710, 979},{0x2, 0x9F, 0xAE, 0xFF}}},
	{{{90, -9, -32},0, {600, 949},{0x41, 0xE7, 0x96, 0xFF}}},
	{{{71, -7, -37},0, {622, 1034},{0x12, 0xF5, 0x83, 0xFF}}},
	{{{90, -9, -32},0, {600, 949},{0x41, 0xE7, 0x96, 0xFF}}},
	{{{61, -22, -34},0, {710, 979},{0x2, 0x9F, 0xAE, 0xFF}}},
	{{{77, 7, -34},0, {545, 991},{0x2E, 0x53, 0xAB, 0xFF}}},
	{{{94, 1, -26},0, {545, 830},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{95, -10, -26},0, {595, 837},{0x79, 0xD9, 0xF6, 0xFF}}},
	{{{86, -19, -25},0, {656, 827},{0x41, 0x94, 0xF4, 0xFF}}},
	{{{65, -24, 6},0, {714, 653},{0xE, 0x82, 0x7, 0xFF}}},
	{{{86, -19, 17},0, {656, 822},{0x42, 0x94, 0xB, 0xFF}}},
	{{{61, -22, 26},0, {710, 969},{0x2, 0xA0, 0x53, 0xFF}}},
	{{{91, -9, 11},0, {599, 704},{0x51, 0xE3, 0xA3, 0xFF}}},
	{{{81, -7, 7},0, {605, 645},{0x71, 0xC8, 0xF2, 0xFF}}},
	{{{82, 6, 6},0, {545, 653},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{94, 1, 18},0, {545, 826},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{95, -10, 18},0, {595, 832},{0x79, 0xD9, 0xA, 0xFF}}},
	{{{90, -9, 24},0, {600, 940},{0x41, 0xE8, 0x6A, 0xFF}}},
	{{{90, -9, 24},0, {600, 940},{0x41, 0xE8, 0x6A, 0xFF}}},
	{{{94, 1, 18},0, {545, 826},{0x6B, 0x43, 0xA, 0xFF}}},
	{{{77, 7, 26},0, {545, 982},{0x2E, 0x53, 0x55, 0xFF}}},
	{{{71, -7, 29},0, {623, 1025},{0x12, 0xF5, 0x7D, 0xFF}}},
	{{{61, -22, 26},0, {710, 969},{0x2, 0xA0, 0x53, 0xFF}}},
	{{{86, -19, 17},0, {656, 818},{0x42, 0x94, 0xB, 0xFF}}},
	{{{95, -10, 18},0, {595, 832},{0x79, 0xD9, 0xA, 0xFF}}},
	{{{86, -19, 17},0, {656, 822},{0x42, 0x94, 0xB, 0xFF}}},
	{{{91, -9, 11},0, {599, 704},{0x51, 0xE3, 0xA3, 0xFF}}},
	{{{22, -11, -35},0, {44, 70},{0xDD, 0xAC, 0xA8, 0xFF}}},
	{{{-17, 7, -30},0, {57, 80},{0xAC, 0xDD, 0xA8, 0xFF}}},
	{{{29, 6, -40},0, {31, 115},{0xFA, 0x0, 0x81, 0xFF}}},
	{{{20, -18, -4},0, {125, 53},{0xD7, 0x88, 0x0, 0xFF}}},
	{{{-25, 0, -4},0, {125, 57},{0x98, 0xB8, 0x0, 0xFF}}},
	{{{-17, 7, 22},0, {193, 80},{0xAD, 0xDB, 0x58, 0xFF}}},
	{{{22, -11, 27},0, {206, 70},{0xDD, 0xAC, 0x58, 0xFF}}},
	{{{-17, 7, 22},0, {193, 80},{0xAD, 0xDB, 0x58, 0xFF}}},
	{{{22, -11, 27},0, {206, 70},{0xDD, 0xAC, 0x58, 0xFF}}},
	{{{29, 6, 32},0, {218, 115},{0xFB, 0x0, 0x7F, 0xFF}}},
	{{{-6, 38, 22},0, {193, 158},{0xDE, 0x60, 0x4C, 0xFF}}},
	{{{35, 23, 28},0, {207, 158},{0x1F, 0x5C, 0x51, 0xFF}}},
	{{{37, 22, -4},0, {125, 158},{0x2C, 0x77, 0x0, 0xFF}}},
	{{{-12, 40, -4},0, {125, 158},{0xD1, 0x76, 0xFD, 0xFF}}},
	{{{-4, 37, -30},0, {57, 158},{0xE1, 0x61, 0xB4, 0xFF}}},
	{{{35, 23, -36},0, {42, 158},{0x1F, 0x5C, 0xAF, 0xFF}}},
	{{{29, 6, -40},0, {31, 115},{0xFA, 0x0, 0x81, 0xFF}}},
	{{{-17, 7, -30},0, {57, 80},{0xAC, 0xDD, 0xA8, 0xFF}}},
	{{{-25, 21, -4},0, {125, 104},{0x86, 0x25, 0xFF, 0xFF}}},
	{{{-25, 0, -4},0, {125, 57},{0x98, 0xB8, 0x0, 0xFF}}},
	{{{94, 1, -4},0, {545, 302},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{91, -9, -11},0, {599, 259},{0x51, 0xE4, 0xA3, 0xFF}}},
	{{{82, 6, -14},0, {545, 238},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{96, -10, -4},0, {595, 302},{0x79, 0xD9, 0x0, 0xFF}}},
	{{{91, -9, -11},0, {599, 259},{0x51, 0xE4, 0xA3, 0xFF}}},
	{{{94, 1, -4},0, {545, 302},{0x6C, 0x43, 0x0, 0xFF}}},
	{{{91, -9, 3},0, {599, 345},{0x51, 0xE4, 0x5D, 0xFF}}},
	{{{82, 6, 6},0, {545, 370},{0x44, 0x6B, 0x1, 0xFF}}},
	{{{81, -7, 7},0, {609, 372},{0x71, 0xC8, 0xF2, 0xFF}}},
	{{{65, -24, 6},0, {715, 369},{0xE, 0x82, 0x7, 0xFF}}},
	{{{86, -19, -4},0, {656, 302},{0x47, 0x96, 0x0, 0xFF}}},
	{{{65, -24, -14},0, {714, 238},{0xE, 0x82, 0xF8, 0xFF}}},
	{{{81, -7, -15},0, {609, 237},{0x71, 0xC8, 0xF, 0xFF}}},
	{{{82, 6, -14},0, {545, 238},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{81, -7, -15},0, {605, 645},{0x71, 0xC8, 0xF, 0xFF}}},
	{{{91, -9, -19},0, {599, 704},{0x51, 0xE3, 0x5D, 0xFF}}},
	{{{82, 6, -14},0, {545, 653},{0x44, 0x6B, 0xFF, 0xFF}}},
	{{{65, -24, -14},0, {714, 653},{0xE, 0x82, 0xF8, 0xFF}}},
	{{{86, -19, -25},0, {656, 822},{0x41, 0x94, 0xF4, 0xFF}}},
	{{{95, -10, -26},0, {595, 832},{0x79, 0xD9, 0xF6, 0xFF}}},
	{{{91, -9, -19},0, {599, 704},{0x51, 0xE3, 0x5D, 0xFF}}},
	{{{86, -19, -25},0, {656, 822},{0x41, 0x94, 0xF4, 0xFF}}},
	{{{94, 1, -26},0, {545, 826},{0x6B, 0x43, 0xF6, 0xFF}}},
	{{{82, 6, -14},0, {545, 653},{0x44, 0x6B, 0xFF, 0xFF}}},
};

Gfx mario_000_displaylist_005_RFoot_mesh_tri_0[] = {
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(7, 8, 10, 0),
	gsSP1Triangle(11, 10, 8, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(5, 1, 4, 0),
	gsSP1Triangle(6, 1, 5, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 10, 8, 0),
	gsSP1Triangle(11, 10, 7, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(14, 10, 13, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(6, 0, 7, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 9, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(10, 11, 7, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 0, 0),
	gsSP1Triangle(3, 11, 0, 0),
	gsSP1Triangle(7, 11, 6, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(6, 3, 5, 0),
	gsSP1Triangle(7, 3, 6, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 1, 7, 0),
	gsSP1Triangle(9, 1, 8, 0),
	gsSP1Triangle(10, 1, 9, 0),
	gsSP1Triangle(7, 1, 0, 0),
	gsSP1Triangle(0, 3, 7, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 12, 11, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(mario_000_displaylist_005_RFoot_mesh_vtx_0 + 96, 5, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_mario_Pants_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_pants_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_pants_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_Pants_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Pants_001[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_Shirt_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_ShirtPattern_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_ShirtPattern_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_Shirt_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_Shirt_001[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_metal[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, TEXEL0, 0, 0, 0, ENVIRONMENT),
	gsSPSetGeometryMode(G_TEXTURE_GEN),
	gsSPTexture(4031, 1983, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, mario_metal_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 252, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_metal[] = {
	gsDPPipeSync(),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsSPEndDisplayList(),
};


Gfx mat_mario_Hand[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 32, mario_Hand_Texture_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(mario_Hand_lights),
	gsSPEndDisplayList(),
};


Gfx mat_mario_face_0___Open_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_FullFace_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_FullFace_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_0___Open_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_face_0___Open_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_face_1___Half_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_HalfBlink_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_HalfBlink_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_1___Half_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_face_1___Half_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_face_2___Closed_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_FaceBlink_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_FaceBlink_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_2___Closed_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_face_2___Closed_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_face_7___Dead_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, mario_FrightenedFace_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, -1),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, mario_FrightenedFace_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(mario_face_7___Dead_Eyes_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_face_7___Dead_Eyes[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_mario_wingCombined[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 32, mario_wingCombined_ia4),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 126, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_mario_wingCombined[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_bottom_mesh[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_bottom_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_bottom_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_bottom_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_bottom_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_bottom_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_001_Chest_mesh[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_001_Chest_skinned[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_001_Chest_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_001_Chest_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_Head_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_mario_face_0___Open_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_face_0___Open_Eyes),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_mat_override_face_1___Half_Eyes_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_mario_face_1___Half_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_face_1___Half_Eyes),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_mat_override_face_2___Closed_Eyes_2[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_face_2___Closed_Eyes),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_mat_override_face_2___Closed_Eyes_3[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_mario_face_2___Closed_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_face_2___Closed_Eyes),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_mesh_mat_override_face_7___Dead_Eyes_4[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_0),
	gsSPDisplayList(mat_mario_face_7___Dead_Eyes),
	gsSPDisplayList(mario_000_displaylist_Head_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_face_7___Dead_Eyes),
	gsSPEndDisplayList(),
};


Gfx mario_000_displaylist_Head_skinned[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mat_override_face_1___Half_Eyes_1[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mat_override_face_2___Closed_Eyes_2[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mat_override_face_2___Closed_Eyes_3[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_Head_skinned_mat_override_face_7___Dead_Eyes_4[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_Head_skinned_tri_0),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_001_RWing_mesh[] = {
	gsSPDisplayList(mat_mario_wingCombined),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_001_RWing_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_001_RWing_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_002_LWing_mesh[] = {
	gsSPDisplayList(mat_mario_wingCombined),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_wingCombined),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_002_LWing_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_002_LWing_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_003_LShoulder_mesh[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_003_LShoulder_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_003_LShoulder_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_004_LArm_mesh[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_004_LArm_skinned[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_004_LArm_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_004_LArm_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_003_LHand_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_tri_0),
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_displaylist_003_LHand_skinned[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_003_LHand_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_003_LHand_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_003_LHand_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_LOPEN_000_displaylistOption1_LOPEN_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_006_Rshoulder_mesh[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_006_Rshoulder_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_006_Rshoulder_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_007_RArm_mesh[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_007_RArm_skinned[] = {
	gsSPDisplayList(mat_mario_Shirt_001),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_Shirt_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_007_RArm_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_007_RArm_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_004_Rhand_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_tri_0),
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_tri_1),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_displaylist_004_Rhand_skinned[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_skinned_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_004_Rhand_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_004_Rhand_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_LHandOption1_000_displaylist_003__ROPEN_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_002_switch_option_RPEACE_000_displaylist_003__RPEACE_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_009_LThigh_mesh[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_009_LThigh_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_009_LThigh_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_010_LLeg_mesh[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_010_LLeg_skinned[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_010_LLeg_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_010_LLeg_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_011_LFoot_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_011_LFoot_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_011_LFoot_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_012_RThigh_mesh[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_012_RThigh_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_012_RThigh_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_offset_013_RLeg_mesh[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_mesh_tri_1),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};


Gfx mario_000_offset_013_RLeg_skinned[] = {
	gsSPDisplayList(mat_mario_Pants_001),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_Pants_001),
	gsSPEndDisplayList(),
};

Gfx mario_000_offset_013_RLeg_skinned_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_offset_013_RLeg_skinned_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_000_displaylist_005_RFoot_mesh[] = {
	gsSPDisplayList(mat_mario_Hand),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_tri_0),
	gsSPEndDisplayList(),
};

Gfx mario_000_displaylist_005_RFoot_mesh_mat_override_metal_0[] = {
	gsSPDisplayList(mat_mario_metal),
	gsSPDisplayList(mario_000_displaylist_005_RFoot_mesh_tri_0),
	gsSPDisplayList(mat_revert_mario_metal),
	gsSPEndDisplayList(),
};



Gfx mario_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
