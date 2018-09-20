#pragma once
#include "base/ccConfig.h"

#include "cocos/scripting/js-bindings/jswrapper/SeApi.h"

extern se::Object* __jsb_sdkbox_PluginAppodeal_proto;
extern se::Class* __jsb_sdkbox_PluginAppodeal_class;

bool js_register_sdkbox_PluginAppodeal(se::Object* obj);
bool register_all_PluginAppodealJS(se::Object* obj);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setBannerBackgroundVisible);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_isAutocacheEnabled);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_hideBanner);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserGender);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setBannerAnimationEnabled);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_getSDKVersion);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_disableNetworkForAdType);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserSmokingAttitude);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserInterests);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserBirthday);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setSmartBannersEnabled);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_disableLocationPermissionCheck);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserAlcoholAttitude);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserOccupation);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_isReadyForShowWithStyle);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserVkId);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_cacheAd);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setAutocache);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setDebugEnabled);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserAge);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_init);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserEmail);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_confirmUsage);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserFacebookId);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_setUserRelationship);
SE_DECLARE_FUNC(js_PluginAppodealJS_PluginAppodeal_showAd);

