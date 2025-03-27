/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iotexplorer/v20190423/model/IotApplication.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

IotApplication::IotApplication() :
    m_iotAppIDHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_devModeHasBeenSet(false),
    m_iOSAppKeyHasBeenSet(false),
    m_iOSAppSecretHasBeenSet(false),
    m_androidAppKeyHasBeenSet(false),
    m_androidAppSecretHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pushSecretIDHasBeenSet(false),
    m_pushSecretKeyHasBeenSet(false),
    m_pushEnvironmentHasBeenSet(false),
    m_miniProgramAppKeyHasBeenSet(false),
    m_miniProgramAppSecretHasBeenSet(false),
    m_tPNSiOSAccessIDHasBeenSet(false),
    m_tPNSiOSSecretKeyHasBeenSet(false),
    m_tPNSiOSPushEnvironmentHasBeenSet(false),
    m_tPNSAndroidAccessIDHasBeenSet(false),
    m_tPNSAndroidSecretKeyHasBeenSet(false),
    m_tPNSiOSRegionHasBeenSet(false),
    m_tPNSAndroidRegionHasBeenSet(false),
    m_selfSmsAppIdHasBeenSet(false),
    m_selfSmsAppKeyHasBeenSet(false),
    m_selfSmsSignHasBeenSet(false),
    m_selfSmsTemplateIdHasBeenSet(false),
    m_wechatNotifyStatusHasBeenSet(false),
    m_interconnectionProductsHasBeenSet(false)
{
}

CoreInternalOutcome IotApplication::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IotAppID") && !value["IotAppID"].IsNull())
    {
        if (!value["IotAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.IotAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iotAppID = string(value["IotAppID"].GetString());
        m_iotAppIDHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DevMode") && !value["DevMode"].IsNull())
    {
        if (!value["DevMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.DevMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_devMode = value["DevMode"].GetInt64();
        m_devModeHasBeenSet = true;
    }

    if (value.HasMember("IOSAppKey") && !value["IOSAppKey"].IsNull())
    {
        if (!value["IOSAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.IOSAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOSAppKey = string(value["IOSAppKey"].GetString());
        m_iOSAppKeyHasBeenSet = true;
    }

    if (value.HasMember("IOSAppSecret") && !value["IOSAppSecret"].IsNull())
    {
        if (!value["IOSAppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.IOSAppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iOSAppSecret = string(value["IOSAppSecret"].GetString());
        m_iOSAppSecretHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppKey") && !value["AndroidAppKey"].IsNull())
    {
        if (!value["AndroidAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.AndroidAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppKey = string(value["AndroidAppKey"].GetString());
        m_androidAppKeyHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppSecret") && !value["AndroidAppSecret"].IsNull())
    {
        if (!value["AndroidAppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.AndroidAppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppSecret = string(value["AndroidAppSecret"].GetString());
        m_androidAppSecretHasBeenSet = true;
    }

    if (value.HasMember("Products") && !value["Products"].IsNull())
    {
        if (!value["Products"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.Products` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_products = string(value["Products"].GetString());
        m_productsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("PushSecretID") && !value["PushSecretID"].IsNull())
    {
        if (!value["PushSecretID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.PushSecretID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushSecretID = string(value["PushSecretID"].GetString());
        m_pushSecretIDHasBeenSet = true;
    }

    if (value.HasMember("PushSecretKey") && !value["PushSecretKey"].IsNull())
    {
        if (!value["PushSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.PushSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushSecretKey = string(value["PushSecretKey"].GetString());
        m_pushSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("PushEnvironment") && !value["PushEnvironment"].IsNull())
    {
        if (!value["PushEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.PushEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushEnvironment = string(value["PushEnvironment"].GetString());
        m_pushEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("MiniProgramAppKey") && !value["MiniProgramAppKey"].IsNull())
    {
        if (!value["MiniProgramAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.MiniProgramAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniProgramAppKey = string(value["MiniProgramAppKey"].GetString());
        m_miniProgramAppKeyHasBeenSet = true;
    }

    if (value.HasMember("MiniProgramAppSecret") && !value["MiniProgramAppSecret"].IsNull())
    {
        if (!value["MiniProgramAppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.MiniProgramAppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniProgramAppSecret = string(value["MiniProgramAppSecret"].GetString());
        m_miniProgramAppSecretHasBeenSet = true;
    }

    if (value.HasMember("TPNSiOSAccessID") && !value["TPNSiOSAccessID"].IsNull())
    {
        if (!value["TPNSiOSAccessID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSiOSAccessID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSiOSAccessID = string(value["TPNSiOSAccessID"].GetString());
        m_tPNSiOSAccessIDHasBeenSet = true;
    }

    if (value.HasMember("TPNSiOSSecretKey") && !value["TPNSiOSSecretKey"].IsNull())
    {
        if (!value["TPNSiOSSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSiOSSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSiOSSecretKey = string(value["TPNSiOSSecretKey"].GetString());
        m_tPNSiOSSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("TPNSiOSPushEnvironment") && !value["TPNSiOSPushEnvironment"].IsNull())
    {
        if (!value["TPNSiOSPushEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSiOSPushEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSiOSPushEnvironment = string(value["TPNSiOSPushEnvironment"].GetString());
        m_tPNSiOSPushEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("TPNSAndroidAccessID") && !value["TPNSAndroidAccessID"].IsNull())
    {
        if (!value["TPNSAndroidAccessID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSAndroidAccessID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSAndroidAccessID = string(value["TPNSAndroidAccessID"].GetString());
        m_tPNSAndroidAccessIDHasBeenSet = true;
    }

    if (value.HasMember("TPNSAndroidSecretKey") && !value["TPNSAndroidSecretKey"].IsNull())
    {
        if (!value["TPNSAndroidSecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSAndroidSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSAndroidSecretKey = string(value["TPNSAndroidSecretKey"].GetString());
        m_tPNSAndroidSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("TPNSiOSRegion") && !value["TPNSiOSRegion"].IsNull())
    {
        if (!value["TPNSiOSRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSiOSRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSiOSRegion = string(value["TPNSiOSRegion"].GetString());
        m_tPNSiOSRegionHasBeenSet = true;
    }

    if (value.HasMember("TPNSAndroidRegion") && !value["TPNSAndroidRegion"].IsNull())
    {
        if (!value["TPNSAndroidRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.TPNSAndroidRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tPNSAndroidRegion = string(value["TPNSAndroidRegion"].GetString());
        m_tPNSAndroidRegionHasBeenSet = true;
    }

    if (value.HasMember("SelfSmsAppId") && !value["SelfSmsAppId"].IsNull())
    {
        if (!value["SelfSmsAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.SelfSmsAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfSmsAppId = string(value["SelfSmsAppId"].GetString());
        m_selfSmsAppIdHasBeenSet = true;
    }

    if (value.HasMember("SelfSmsAppKey") && !value["SelfSmsAppKey"].IsNull())
    {
        if (!value["SelfSmsAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.SelfSmsAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfSmsAppKey = string(value["SelfSmsAppKey"].GetString());
        m_selfSmsAppKeyHasBeenSet = true;
    }

    if (value.HasMember("SelfSmsSign") && !value["SelfSmsSign"].IsNull())
    {
        if (!value["SelfSmsSign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.SelfSmsSign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfSmsSign = string(value["SelfSmsSign"].GetString());
        m_selfSmsSignHasBeenSet = true;
    }

    if (value.HasMember("SelfSmsTemplateId") && !value["SelfSmsTemplateId"].IsNull())
    {
        if (!value["SelfSmsTemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.SelfSmsTemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selfSmsTemplateId = value["SelfSmsTemplateId"].GetInt64();
        m_selfSmsTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("WechatNotifyStatus") && !value["WechatNotifyStatus"].IsNull())
    {
        if (!value["WechatNotifyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.WechatNotifyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wechatNotifyStatus = value["WechatNotifyStatus"].GetInt64();
        m_wechatNotifyStatusHasBeenSet = true;
    }

    if (value.HasMember("InterconnectionProducts") && !value["InterconnectionProducts"].IsNull())
    {
        if (!value["InterconnectionProducts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IotApplication.InterconnectionProducts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interconnectionProducts = string(value["InterconnectionProducts"].GetString());
        m_interconnectionProductsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IotApplication::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iotAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IotAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iotAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_devModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_devMode, allocator);
    }

    if (m_iOSAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOSAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_iOSAppSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSAppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iOSAppSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_productsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Products";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_products.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pushSecretIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecretID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushSecretID.c_str(), allocator).Move(), allocator);
    }

    if (m_pushSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_pushEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_miniProgramAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniProgramAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_miniProgramAppSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniProgramAppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniProgramAppSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSAccessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSAccessID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSiOSAccessID.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSiOSSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSPushEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSPushEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSiOSPushEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidAccessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidAccessID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSAndroidAccessID.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSAndroidSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSiOSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSiOSRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSiOSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tPNSAndroidRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TPNSAndroidRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tPNSAndroidRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_selfSmsAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfSmsAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfSmsAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_selfSmsAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfSmsAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfSmsAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_selfSmsSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfSmsSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfSmsSign.c_str(), allocator).Move(), allocator);
    }

    if (m_selfSmsTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfSmsTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfSmsTemplateId, allocator);
    }

    if (m_wechatNotifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatNotifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechatNotifyStatus, allocator);
    }

    if (m_interconnectionProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterconnectionProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interconnectionProducts.c_str(), allocator).Move(), allocator);
    }

}


string IotApplication::GetIotAppID() const
{
    return m_iotAppID;
}

void IotApplication::SetIotAppID(const string& _iotAppID)
{
    m_iotAppID = _iotAppID;
    m_iotAppIDHasBeenSet = true;
}

bool IotApplication::IotAppIDHasBeenSet() const
{
    return m_iotAppIDHasBeenSet;
}

string IotApplication::GetAppName() const
{
    return m_appName;
}

void IotApplication::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool IotApplication::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string IotApplication::GetDescription() const
{
    return m_description;
}

void IotApplication::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IotApplication::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t IotApplication::GetDevMode() const
{
    return m_devMode;
}

void IotApplication::SetDevMode(const int64_t& _devMode)
{
    m_devMode = _devMode;
    m_devModeHasBeenSet = true;
}

bool IotApplication::DevModeHasBeenSet() const
{
    return m_devModeHasBeenSet;
}

string IotApplication::GetIOSAppKey() const
{
    return m_iOSAppKey;
}

void IotApplication::SetIOSAppKey(const string& _iOSAppKey)
{
    m_iOSAppKey = _iOSAppKey;
    m_iOSAppKeyHasBeenSet = true;
}

bool IotApplication::IOSAppKeyHasBeenSet() const
{
    return m_iOSAppKeyHasBeenSet;
}

string IotApplication::GetIOSAppSecret() const
{
    return m_iOSAppSecret;
}

void IotApplication::SetIOSAppSecret(const string& _iOSAppSecret)
{
    m_iOSAppSecret = _iOSAppSecret;
    m_iOSAppSecretHasBeenSet = true;
}

bool IotApplication::IOSAppSecretHasBeenSet() const
{
    return m_iOSAppSecretHasBeenSet;
}

string IotApplication::GetAndroidAppKey() const
{
    return m_androidAppKey;
}

void IotApplication::SetAndroidAppKey(const string& _androidAppKey)
{
    m_androidAppKey = _androidAppKey;
    m_androidAppKeyHasBeenSet = true;
}

bool IotApplication::AndroidAppKeyHasBeenSet() const
{
    return m_androidAppKeyHasBeenSet;
}

string IotApplication::GetAndroidAppSecret() const
{
    return m_androidAppSecret;
}

void IotApplication::SetAndroidAppSecret(const string& _androidAppSecret)
{
    m_androidAppSecret = _androidAppSecret;
    m_androidAppSecretHasBeenSet = true;
}

bool IotApplication::AndroidAppSecretHasBeenSet() const
{
    return m_androidAppSecretHasBeenSet;
}

string IotApplication::GetProducts() const
{
    return m_products;
}

void IotApplication::SetProducts(const string& _products)
{
    m_products = _products;
    m_productsHasBeenSet = true;
}

bool IotApplication::ProductsHasBeenSet() const
{
    return m_productsHasBeenSet;
}

string IotApplication::GetCreateTime() const
{
    return m_createTime;
}

void IotApplication::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IotApplication::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IotApplication::GetProjectId() const
{
    return m_projectId;
}

void IotApplication::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool IotApplication::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string IotApplication::GetPushSecretID() const
{
    return m_pushSecretID;
}

void IotApplication::SetPushSecretID(const string& _pushSecretID)
{
    m_pushSecretID = _pushSecretID;
    m_pushSecretIDHasBeenSet = true;
}

bool IotApplication::PushSecretIDHasBeenSet() const
{
    return m_pushSecretIDHasBeenSet;
}

string IotApplication::GetPushSecretKey() const
{
    return m_pushSecretKey;
}

void IotApplication::SetPushSecretKey(const string& _pushSecretKey)
{
    m_pushSecretKey = _pushSecretKey;
    m_pushSecretKeyHasBeenSet = true;
}

bool IotApplication::PushSecretKeyHasBeenSet() const
{
    return m_pushSecretKeyHasBeenSet;
}

string IotApplication::GetPushEnvironment() const
{
    return m_pushEnvironment;
}

void IotApplication::SetPushEnvironment(const string& _pushEnvironment)
{
    m_pushEnvironment = _pushEnvironment;
    m_pushEnvironmentHasBeenSet = true;
}

bool IotApplication::PushEnvironmentHasBeenSet() const
{
    return m_pushEnvironmentHasBeenSet;
}

string IotApplication::GetMiniProgramAppKey() const
{
    return m_miniProgramAppKey;
}

void IotApplication::SetMiniProgramAppKey(const string& _miniProgramAppKey)
{
    m_miniProgramAppKey = _miniProgramAppKey;
    m_miniProgramAppKeyHasBeenSet = true;
}

bool IotApplication::MiniProgramAppKeyHasBeenSet() const
{
    return m_miniProgramAppKeyHasBeenSet;
}

string IotApplication::GetMiniProgramAppSecret() const
{
    return m_miniProgramAppSecret;
}

void IotApplication::SetMiniProgramAppSecret(const string& _miniProgramAppSecret)
{
    m_miniProgramAppSecret = _miniProgramAppSecret;
    m_miniProgramAppSecretHasBeenSet = true;
}

bool IotApplication::MiniProgramAppSecretHasBeenSet() const
{
    return m_miniProgramAppSecretHasBeenSet;
}

string IotApplication::GetTPNSiOSAccessID() const
{
    return m_tPNSiOSAccessID;
}

void IotApplication::SetTPNSiOSAccessID(const string& _tPNSiOSAccessID)
{
    m_tPNSiOSAccessID = _tPNSiOSAccessID;
    m_tPNSiOSAccessIDHasBeenSet = true;
}

bool IotApplication::TPNSiOSAccessIDHasBeenSet() const
{
    return m_tPNSiOSAccessIDHasBeenSet;
}

string IotApplication::GetTPNSiOSSecretKey() const
{
    return m_tPNSiOSSecretKey;
}

void IotApplication::SetTPNSiOSSecretKey(const string& _tPNSiOSSecretKey)
{
    m_tPNSiOSSecretKey = _tPNSiOSSecretKey;
    m_tPNSiOSSecretKeyHasBeenSet = true;
}

bool IotApplication::TPNSiOSSecretKeyHasBeenSet() const
{
    return m_tPNSiOSSecretKeyHasBeenSet;
}

string IotApplication::GetTPNSiOSPushEnvironment() const
{
    return m_tPNSiOSPushEnvironment;
}

void IotApplication::SetTPNSiOSPushEnvironment(const string& _tPNSiOSPushEnvironment)
{
    m_tPNSiOSPushEnvironment = _tPNSiOSPushEnvironment;
    m_tPNSiOSPushEnvironmentHasBeenSet = true;
}

bool IotApplication::TPNSiOSPushEnvironmentHasBeenSet() const
{
    return m_tPNSiOSPushEnvironmentHasBeenSet;
}

string IotApplication::GetTPNSAndroidAccessID() const
{
    return m_tPNSAndroidAccessID;
}

void IotApplication::SetTPNSAndroidAccessID(const string& _tPNSAndroidAccessID)
{
    m_tPNSAndroidAccessID = _tPNSAndroidAccessID;
    m_tPNSAndroidAccessIDHasBeenSet = true;
}

bool IotApplication::TPNSAndroidAccessIDHasBeenSet() const
{
    return m_tPNSAndroidAccessIDHasBeenSet;
}

string IotApplication::GetTPNSAndroidSecretKey() const
{
    return m_tPNSAndroidSecretKey;
}

void IotApplication::SetTPNSAndroidSecretKey(const string& _tPNSAndroidSecretKey)
{
    m_tPNSAndroidSecretKey = _tPNSAndroidSecretKey;
    m_tPNSAndroidSecretKeyHasBeenSet = true;
}

bool IotApplication::TPNSAndroidSecretKeyHasBeenSet() const
{
    return m_tPNSAndroidSecretKeyHasBeenSet;
}

string IotApplication::GetTPNSiOSRegion() const
{
    return m_tPNSiOSRegion;
}

void IotApplication::SetTPNSiOSRegion(const string& _tPNSiOSRegion)
{
    m_tPNSiOSRegion = _tPNSiOSRegion;
    m_tPNSiOSRegionHasBeenSet = true;
}

bool IotApplication::TPNSiOSRegionHasBeenSet() const
{
    return m_tPNSiOSRegionHasBeenSet;
}

string IotApplication::GetTPNSAndroidRegion() const
{
    return m_tPNSAndroidRegion;
}

void IotApplication::SetTPNSAndroidRegion(const string& _tPNSAndroidRegion)
{
    m_tPNSAndroidRegion = _tPNSAndroidRegion;
    m_tPNSAndroidRegionHasBeenSet = true;
}

bool IotApplication::TPNSAndroidRegionHasBeenSet() const
{
    return m_tPNSAndroidRegionHasBeenSet;
}

string IotApplication::GetSelfSmsAppId() const
{
    return m_selfSmsAppId;
}

void IotApplication::SetSelfSmsAppId(const string& _selfSmsAppId)
{
    m_selfSmsAppId = _selfSmsAppId;
    m_selfSmsAppIdHasBeenSet = true;
}

bool IotApplication::SelfSmsAppIdHasBeenSet() const
{
    return m_selfSmsAppIdHasBeenSet;
}

string IotApplication::GetSelfSmsAppKey() const
{
    return m_selfSmsAppKey;
}

void IotApplication::SetSelfSmsAppKey(const string& _selfSmsAppKey)
{
    m_selfSmsAppKey = _selfSmsAppKey;
    m_selfSmsAppKeyHasBeenSet = true;
}

bool IotApplication::SelfSmsAppKeyHasBeenSet() const
{
    return m_selfSmsAppKeyHasBeenSet;
}

string IotApplication::GetSelfSmsSign() const
{
    return m_selfSmsSign;
}

void IotApplication::SetSelfSmsSign(const string& _selfSmsSign)
{
    m_selfSmsSign = _selfSmsSign;
    m_selfSmsSignHasBeenSet = true;
}

bool IotApplication::SelfSmsSignHasBeenSet() const
{
    return m_selfSmsSignHasBeenSet;
}

int64_t IotApplication::GetSelfSmsTemplateId() const
{
    return m_selfSmsTemplateId;
}

void IotApplication::SetSelfSmsTemplateId(const int64_t& _selfSmsTemplateId)
{
    m_selfSmsTemplateId = _selfSmsTemplateId;
    m_selfSmsTemplateIdHasBeenSet = true;
}

bool IotApplication::SelfSmsTemplateIdHasBeenSet() const
{
    return m_selfSmsTemplateIdHasBeenSet;
}

int64_t IotApplication::GetWechatNotifyStatus() const
{
    return m_wechatNotifyStatus;
}

void IotApplication::SetWechatNotifyStatus(const int64_t& _wechatNotifyStatus)
{
    m_wechatNotifyStatus = _wechatNotifyStatus;
    m_wechatNotifyStatusHasBeenSet = true;
}

bool IotApplication::WechatNotifyStatusHasBeenSet() const
{
    return m_wechatNotifyStatusHasBeenSet;
}

string IotApplication::GetInterconnectionProducts() const
{
    return m_interconnectionProducts;
}

void IotApplication::SetInterconnectionProducts(const string& _interconnectionProducts)
{
    m_interconnectionProducts = _interconnectionProducts;
    m_interconnectionProductsHasBeenSet = true;
}

bool IotApplication::InterconnectionProductsHasBeenSet() const
{
    return m_interconnectionProductsHasBeenSet;
}

