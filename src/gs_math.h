
/*

math routines for gravity sim

*/

#ifndef __GS_MATH_H__
#define __GS_MATH_H__

#include <math.h>


#include "gravitysim.h"

#define SQR(x) ((x)*(x))
#define SQRT(x) (sqrt((x)))


#define MAT4_0 mat4_create(0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0)

#define MAT4_I mat4_create( \
        1.0, 0.0, 0.0, 0.0, \
        0.0, 1.0, 0.0, 0.0, \
        0.0, 0.0, 1.0, 0.0, \
        0.0, 0.0, 0.0, 1.0 \
    )

vec4_t get_nth_color(int n);

vec4_t get_part_color(int x, int xN, int y, int yN, int z, int zN);
vec4_t get_3d_color(float x_prop, float y_prop, float z_prop);

vec4_t vec4_add(vec4_t a, vec4_t b);
vec4_t vec4_add_2(vec4_t a, vec4_t b, vec4_t c);
vec4_t vec4_sub(vec4_t a, vec4_t b);
float vec4_dot(vec4_t a, vec4_t b);
vec4_t vec4_scale(vec4_t a, float b);

mat4_t mat4_scale(mat4_t a, float b);

mat4_t perspective(float rads, float aspect, float Znear, float Zfar);

mat4_t rotator(float yaw, float pitch, float roll);

mat4_t scaler(float X, float Y, float Z);

float get_period(vec4_t point);

mat4_t translator(float Xoff, float Yoff, float Zoff);

mat4_t mat4_transpose(mat4_t a);
float random_float();

mat4_t mat4_mul(mat4_t a, mat4_t b);

vec4_t vec4_normalized(vec4_t a) ;
vec4_t vec4_cross_3(vec4_t a, vec4_t b);

mat4_t look_at(vec4_t camera, vec4_t target, vec4_t camera_euler);
vec4_t camera_orbit(vec4_t center, float dist, float period, float pitch);
float calculate_distance_squared(vec4_t a, vec4_t b);
float calculate_distance(vec4_t a, vec4_t b);

void dump_mat4(mat4_t a);

// return distance between 'a' and 'b'
float calculate_distance(vec4_t a, vec4_t b);
float vec4_normscale(vec4_t a);

mat4_t mat4_create(
    float v00, float v01, float v02, float v03,
    float v10, float v11, float v12, float v13,
    float v20, float v21, float v22, float v23,
    float v30, float v31, float v32, float v33
);


float float_gen_default(float fa, float fr);
// generates stuff




#endif


