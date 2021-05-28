typedef struct {
    int small;
    int medium;
    int big;
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem *obj = malloc(sizeof(ParkingSystem));
    obj->small = small;
    obj->medium = medium;
    obj->big = big;
    return obj;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if (carType == 1) return (obj->big-- > 0);
    if (carType == 2) return (obj->medium-- > 0);
    return (obj->small-- > 0);
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}