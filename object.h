
typedef struct object {
   const char    *description;
   const char   **tags;
   struct object *location;
   struct object *destination;
} OBJECT;

extern OBJECT objs[];

#define field	(objs + 0)
#define cave	(objs + 1)
#define silver	(objs + 2)
#define gold	(objs + 3)
#define guard	(objs + 4)
#define guard2	(objs + 5)
#define player	(objs + 6)
#define intoCave	(objs + 7)
#define exitCave	(objs + 8)
#define wallField	(objs + 9)
#define wallCave	(objs + 10)

#define endOfObjs	(objs + 11)
