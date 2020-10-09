native GetPlayerCameraPos(Player:player, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native SetPlayerCameraPos(Player:player, Float:x, Float:y, Float:z);

native SetPlayerCameraLookAt(Player:player, Float:x, Float:y, Float:z, cut);

native SetCameraBehindPlayer(Player:player);

native InterpolateCameraPos(Player:player, Float:fromx, Float:fromy, Float:fromz, Float:tox, Float:toy, Float:toz, time, cut);

native InterpolateCameraLookAt(Player:player, Float:fromx, Float:fromy, Float:fromz, Float:tox, Float:toy, Float:toz, time, cut);

native GetPlayerCameraFrontVector(Player:player, &Float:pos_x, &Float:pos_y, &Float:pos_z);

native Float:GetPlayerCameraZoom(Player:player);

native GetPlayerCameraMode(Player:player);

native Float:GetPlayerCameraAspectRatio(Player:player);

native EnablePlayerCameraTarget(Player:playerdata, bool:enable);

native GetPlayerCameraTargetPlayer(Player:playerdata);

native GetPlayerCameraTargetVehicle(Player:playerdata);

native GetPlayerCameraTargetObject(Player:playerdata);

native GetPlayerCameraTargetActor(Player:playerdata);

native TogglePlayerSpectating(Player:player, bool:toggle);

native bool:PlayerSpectatePlayer(Player:player, Player:target, mode);

native bool:PlayerSpectateVehicle(Player:player, Vehicle:vehicle, mode);

native bool:AttachCameraToObject(Player:player, object);

native bool:AttachCameraToPlayerObject(Player:player, object);
