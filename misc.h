typedef enum {
   distPlayer,
   distHeld,
   distHeldContained,
   distLocation,
   distHere,
   distHereContained,
   distOverthere,
   distNotHere,
   distUnknownObject,
   distNoObjectSpecified
} DISTANCE;

extern OBJECT *getPassageTo(OBJECT *targetLocation);
extern DISTANCE distanceTo(OBJECT *obj);
extern OBJECT *parseObject(const char *noun);
extern OBJECT *personHere(void);
extern int listObjectAtLocation(OBJECT *location);
