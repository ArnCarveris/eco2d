#include "modules/physics.h"

void MoveWalk(ecs_iter_t *it) {

}

void PhysicsImport(ecs_world_t *ecs) {
    ECS_MODULE(ecs, Physics);
    ecs_set_name_prefix(ecs, "Physics");

    ECS_TAG(ecs, Walking);
    ECS_TAG(ecs, Flying);
    ECS_TYPE(ecs, Movement, Walking, Flying);

    ECS_COMPONENT(ecs, Velocity);

    ECS_SYSTEM(ecs, MoveWalk, EcsOnUpdate, general.Position, Velocity, SWITCH | Movement, CASE | Walking);

    ECS_SET_TYPE(Movement);
    ECS_SET_ENTITY(Walking);
    ECS_SET_ENTITY(Flying);
    ECS_SET_COMPONENT(Velocity);
    ECS_SET_ENTITY(MoveWalk);
}
