#ifndef LIST_SELECTOR_H_
#define LIST_SELECTOR_H_

typedef struct ListSelector ListSelector;

ListSelector *create_list_selector(const Sprite_font *sprite_font,
                                   const char *items[],
                                   size_t count,
                                   Vec font_scale,
                                   float padding_bottom);
void destroy_list_selector(ListSelector *list_selector);

int list_selector_render(const ListSelector *list_selector,
                         SDL_Renderer *renderer);
Vec list_selector_size(const ListSelector *list_selector, Vec font_scale, float padding_bottom);

int list_selector_update(ListSelector *list_selector, float delta_time);
int list_selector_event(ListSelector *list_selector, const SDL_Event *event);

int list_selector_selected(const ListSelector *list_selector);
void list_selector_clean_selection(ListSelector *list_selector);

void list_selector_move(ListSelector *list_selector, Vec position);

#endif  // LIST_SELECTOR_H_
