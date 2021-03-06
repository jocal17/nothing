# "OOP" entities

## Examples

- [level](../src/game/level.h)
- [player](../src/game/level/player.h)
- [camera](../src/game/camera.h)
- ...

## Conventions

- One translation unit per entity
- Entity stores its state in an opaque forward declared struct
- Constructors are `create_<entity-name>` or `create_<entity-name>_from_<resource-name>` (for example `create_level_from_file`)
- Single destructor with name `destroy_<entity-name>`
- Regular methods are `<entity-name>_<method-suffix>` (for example `player_render`)
