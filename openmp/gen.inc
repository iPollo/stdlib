#include <openmp\gen\gen-actors.inc>
#include <openmp\gen\gen-camera.inc>
#include <openmp\gen\gen-checkpoints.inc>
#include <openmp\gen\gen-classes.inc>
#include <openmp\gen\gen-dialogs.inc>
#include <openmp\gen\gen-game.inc>
#include <openmp\gen\gen-legacytranslator.inc>
#include <openmp\gen\gen-map.inc>
#include <openmp\gen\gen-menus.inc>
#include <openmp\gen\gen-miscscripting.inc>
#include <openmp\gen\gen-netstats.inc>
#include <openmp\gen\gen-objects.inc>
#include <openmp\gen\gen-pickups.inc>
#include <openmp\gen\gen-sqlite.inc>
#include <openmp\gen\gen-text3d.inc>
#include <openmp\gen\gen-textdraws.inc>
#include <openmp\gen\gen-turfs.inc>
#include <openmp\gen\gen-vars.inc>
#include <openmp\gen\gen-vehicles.inc>

// Events

forward OnClientCheckResponse(Player:playerid, actionid, address, data);
forward OnDialogResponse(Player:playerid, dialogid, response, listitem, string:inputtext[]);
forward OnIncomingConnection(Player:playerid, ip, port);
forward OnObjectMoved(Object:objectid);
forward OnPlayerClickMap(Player:playerid, Float:x, Float:y, Float:z);
forward OnPlayerClickTextDraw(Player:playerid, clickedid);
forward OnPlayerCommandText(Player:playerid, string:cmdtext[]);
forward OnPlayerConnect(Player:playerid);
forward OnPlayerDeath(Player:playerid, Player:killerid, reason);
forward OnPlayerDisconnect(Player:playerid, reason);
forward OnPlayerEditAttachedObject(Player:playerid, response, index, modelid, boneid, Float:fx, Float:fy, Float:fz, Float:rx, Float:ry, Float:rz, Float:sx, Float:sy, Float:sz);
forward OnPlayerEditObject(Player:playerid, playerobject, objectid, response, Float:fx, Float:fy, Float:fz, Float:rx, Float:ry, Float:rz);
forward OnPlayerEnterCheckpoint(Player:playerid);
forward OnPlayerEnterRaceCheckpoint(Player:playerid);
forward OnPlayerEnterVehicle(Player:playerid, vehicleid, bool:ispassenger);
forward OnPlayerExitVehicle(Player:playerid, vehicleid);
forward OnPlayerExitedMenu(Player:playerid);
forward OnPlayerGiveDamage(Player:playerid, damagedid, Float:damage, weaponid, bodypart);
forward OnPlayerGiveDamageActor(Player:playerid, Actor:actorid, Float:damage, weaponid, bodypart);
forward OnPlayerInteriorChange(Player:playerid, newinteriorid, oldinteriorid);
forward OnPlayerKeyStateChange(Player:playerid, newkeys, oldkeys);
forward OnPlayerLeaveCheckpoint(Player:playerid);
forward OnPlayerLeaveRaceCheckpoint(Player:playerid);
forward OnPlayerPickUpPickup(Player:playerid, pickupid);
forward OnPlayerRequestClass(Player:playerid, classid);
forward OnPlayerRequestSpawn(Player:playerid);
forward OnPlayerSelectedMenuRow(Player:playerid, row);
forward OnPlayerSpawn(Player:playerid);
forward OnPlayerStateChange(Player:playerid, oldstate, newstate);
forward OnPlayerTakeDamage(Player:playerid, issuerid, Float:amount, weaponid, bodypart);
forward OnPlayerText(Player:playerid, string:text[]);
forward OnPlayerUpdate(Player:playerid);
forward OnPlayerWeaponShot(Player:playerid, weaponid, hittype, hitid, Float:x, Float:y, Float:z);
forward OnPluginLoad(data);
forward OnPluginUnload(data);
forward OnScriptExit(script, type);
forward OnScriptInit(script, type);
forward OnServerCommand(string:ip[], string:command[]);
forward OnTick(tick);