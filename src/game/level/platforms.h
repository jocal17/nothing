#ifndef PLATFORMS_H_
#define PLATFORMS_H_

#include <SDL2/SDL.h>

#include "game/camera.h"
#include "math/rect.h"

typedef struct Platforms Platforms;
typedef struct LineStream LineStream;
typedef struct Layer Layer;

Platforms *create_platforms_from_layer(const Layer *layer);
void destroy_platforms(Platforms *platforms);

int platforms_render(const Platforms *platforms,
                     Camera *camera);

void platforms_touches_rect_sides(const Platforms *platforms,
                                  Rect object,
                                  int sides[RECT_SIDE_N]);
Vec platforms_snap_rect(const Platforms *platforms,
                        Rect *object);

#endif  // PLATFORMS_H_
