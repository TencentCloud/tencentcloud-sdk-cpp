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

#include <tencentcloud/ms/v20180408/model/AppSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppSetInfo::AppSetInfo() :
    m_itemIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appMd5HasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_serviceEditionHasBeenSet(false),
    m_shieldCodeHasBeenSet(false),
    m_appUrlHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_appIconUrlHasBeenSet(false),
    m_shieldMd5HasBeenSet(false),
    m_shieldSizeHasBeenSet(false)
{
}

CoreInternalOutcome AppSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetUint64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("ServiceEdition") && !value["ServiceEdition"].IsNull())
    {
        if (!value["ServiceEdition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ServiceEdition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEdition = string(value["ServiceEdition"].GetString());
        m_serviceEditionHasBeenSet = true;
    }

    if (value.HasMember("ShieldCode") && !value["ShieldCode"].IsNull())
    {
        if (!value["ShieldCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ShieldCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shieldCode = value["ShieldCode"].GetUint64();
        m_shieldCodeHasBeenSet = true;
    }

    if (value.HasMember("AppUrl") && !value["AppUrl"].IsNull())
    {
        if (!value["AppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUrl = string(value["AppUrl"].GetString());
        m_appUrlHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.TaskTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = value["TaskTime"].GetUint64();
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("AppIconUrl") && !value["AppIconUrl"].IsNull())
    {
        if (!value["AppIconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.AppIconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIconUrl = string(value["AppIconUrl"].GetString());
        m_appIconUrlHasBeenSet = true;
    }

    if (value.HasMember("ShieldMd5") && !value["ShieldMd5"].IsNull())
    {
        if (!value["ShieldMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ShieldMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldMd5 = string(value["ShieldMd5"].GetString());
        m_shieldMd5HasBeenSet = true;
    }

    if (value.HasMember("ShieldSize") && !value["ShieldSize"].IsNull())
    {
        if (!value["ShieldSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppSetInfo.ShieldSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shieldSize = value["ShieldSize"].GetUint64();
        m_shieldSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_appSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appSize, allocator);
    }

    if (m_serviceEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEdition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceEdition.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shieldCode, allocator);
    }

    if (m_appUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskTime, allocator);
    }

    if (m_appIconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appIconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shieldSize, allocator);
    }

}


string AppSetInfo::GetItemId() const
{
    return m_itemId;
}

void AppSetInfo::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool AppSetInfo::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string AppSetInfo::GetAppName() const
{
    return m_appName;
}

void AppSetInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppSetInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AppSetInfo::GetAppPkgName() const
{
    return m_appPkgName;
}

void AppSetInfo::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AppSetInfo::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AppSetInfo::GetAppVersion() const
{
    return m_appVersion;
}

void AppSetInfo::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppSetInfo::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AppSetInfo::GetAppMd5() const
{
    return m_appMd5;
}

void AppSetInfo::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AppSetInfo::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

uint64_t AppSetInfo::GetAppSize() const
{
    return m_appSize;
}

void AppSetInfo::SetAppSize(const uint64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AppSetInfo::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

string AppSetInfo::GetServiceEdition() const
{
    return m_serviceEdition;
}

void AppSetInfo::SetServiceEdition(const string& _serviceEdition)
{
    m_serviceEdition = _serviceEdition;
    m_serviceEditionHasBeenSet = true;
}

bool AppSetInfo::ServiceEditionHasBeenSet() const
{
    return m_serviceEditionHasBeenSet;
}

uint64_t AppSetInfo::GetShieldCode() const
{
    return m_shieldCode;
}

void AppSetInfo::SetShieldCode(const uint64_t& _shieldCode)
{
    m_shieldCode = _shieldCode;
    m_shieldCodeHasBeenSet = true;
}

bool AppSetInfo::ShieldCodeHasBeenSet() const
{
    return m_shieldCodeHasBeenSet;
}

string AppSetInfo::GetAppUrl() const
{
    return m_appUrl;
}

void AppSetInfo::SetAppUrl(const string& _appUrl)
{
    m_appUrl = _appUrl;
    m_appUrlHasBeenSet = true;
}

bool AppSetInfo::AppUrlHasBeenSet() const
{
    return m_appUrlHasBeenSet;
}

uint64_t AppSetInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void AppSetInfo::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool AppSetInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string AppSetInfo::GetClientIp() const
{
    return m_clientIp;
}

void AppSetInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool AppSetInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

uint64_t AppSetInfo::GetTaskTime() const
{
    return m_taskTime;
}

void AppSetInfo::SetTaskTime(const uint64_t& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool AppSetInfo::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string AppSetInfo::GetAppIconUrl() const
{
    return m_appIconUrl;
}

void AppSetInfo::SetAppIconUrl(const string& _appIconUrl)
{
    m_appIconUrl = _appIconUrl;
    m_appIconUrlHasBeenSet = true;
}

bool AppSetInfo::AppIconUrlHasBeenSet() const
{
    return m_appIconUrlHasBeenSet;
}

string AppSetInfo::GetShieldMd5() const
{
    return m_shieldMd5;
}

void AppSetInfo::SetShieldMd5(const string& _shieldMd5)
{
    m_shieldMd5 = _shieldMd5;
    m_shieldMd5HasBeenSet = true;
}

bool AppSetInfo::ShieldMd5HasBeenSet() const
{
    return m_shieldMd5HasBeenSet;
}

uint64_t AppSetInfo::GetShieldSize() const
{
    return m_shieldSize;
}

void AppSetInfo::SetShieldSize(const uint64_t& _shieldSize)
{
    m_shieldSize = _shieldSize;
    m_shieldSizeHasBeenSet = true;
}

bool AppSetInfo::ShieldSizeHasBeenSet() const
{
    return m_shieldSizeHasBeenSet;
}

