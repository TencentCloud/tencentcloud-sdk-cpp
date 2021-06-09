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

#include <tencentcloud/ms/v20180408/model/AppScanSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

AppScanSet::AppScanSet() :
    m_itemIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_appMd5HasBeenSet(false),
    m_appSizeHasBeenSet(false),
    m_scanCodeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskTimeHasBeenSet(false),
    m_appIconUrlHasBeenSet(false),
    m_appSidHasBeenSet(false),
    m_safeTypeHasBeenSet(false),
    m_vulCountHasBeenSet(false)
{
}

CoreInternalOutcome AppScanSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (value.HasMember("AppMd5") && !value["AppMd5"].IsNull())
    {
        if (!value["AppMd5"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appMd5 = string(value["AppMd5"].GetString());
        m_appMd5HasBeenSet = true;
    }

    if (value.HasMember("AppSize") && !value["AppSize"].IsNull())
    {
        if (!value["AppSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appSize = value["AppSize"].GetUint64();
        m_appSizeHasBeenSet = true;
    }

    if (value.HasMember("ScanCode") && !value["ScanCode"].IsNull())
    {
        if (!value["ScanCode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.ScanCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanCode = value["ScanCode"].GetUint64();
        m_scanCodeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskTime") && !value["TaskTime"].IsNull())
    {
        if (!value["TaskTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.TaskTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskTime = value["TaskTime"].GetUint64();
        m_taskTimeHasBeenSet = true;
    }

    if (value.HasMember("AppIconUrl") && !value["AppIconUrl"].IsNull())
    {
        if (!value["AppIconUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppIconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIconUrl = string(value["AppIconUrl"].GetString());
        m_appIconUrlHasBeenSet = true;
    }

    if (value.HasMember("AppSid") && !value["AppSid"].IsNull())
    {
        if (!value["AppSid"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.AppSid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSid = string(value["AppSid"].GetString());
        m_appSidHasBeenSet = true;
    }

    if (value.HasMember("SafeType") && !value["SafeType"].IsNull())
    {
        if (!value["SafeType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.SafeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_safeType = value["SafeType"].GetUint64();
        m_safeTypeHasBeenSet = true;
    }

    if (value.HasMember("VulCount") && !value["VulCount"].IsNull())
    {
        if (!value["VulCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppScanSet.VulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCount = value["VulCount"].GetUint64();
        m_vulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppScanSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_scanCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanCode, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
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

    if (m_appSidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSid.c_str(), allocator).Move(), allocator);
    }

    if (m_safeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_safeType, allocator);
    }

    if (m_vulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCount, allocator);
    }

}


string AppScanSet::GetItemId() const
{
    return m_itemId;
}

void AppScanSet::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool AppScanSet::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string AppScanSet::GetAppName() const
{
    return m_appName;
}

void AppScanSet::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppScanSet::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string AppScanSet::GetAppPkgName() const
{
    return m_appPkgName;
}

void AppScanSet::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool AppScanSet::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string AppScanSet::GetAppVersion() const
{
    return m_appVersion;
}

void AppScanSet::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool AppScanSet::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string AppScanSet::GetAppMd5() const
{
    return m_appMd5;
}

void AppScanSet::SetAppMd5(const string& _appMd5)
{
    m_appMd5 = _appMd5;
    m_appMd5HasBeenSet = true;
}

bool AppScanSet::AppMd5HasBeenSet() const
{
    return m_appMd5HasBeenSet;
}

uint64_t AppScanSet::GetAppSize() const
{
    return m_appSize;
}

void AppScanSet::SetAppSize(const uint64_t& _appSize)
{
    m_appSize = _appSize;
    m_appSizeHasBeenSet = true;
}

bool AppScanSet::AppSizeHasBeenSet() const
{
    return m_appSizeHasBeenSet;
}

uint64_t AppScanSet::GetScanCode() const
{
    return m_scanCode;
}

void AppScanSet::SetScanCode(const uint64_t& _scanCode)
{
    m_scanCode = _scanCode;
    m_scanCodeHasBeenSet = true;
}

bool AppScanSet::ScanCodeHasBeenSet() const
{
    return m_scanCodeHasBeenSet;
}

uint64_t AppScanSet::GetTaskStatus() const
{
    return m_taskStatus;
}

void AppScanSet::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool AppScanSet::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

uint64_t AppScanSet::GetTaskTime() const
{
    return m_taskTime;
}

void AppScanSet::SetTaskTime(const uint64_t& _taskTime)
{
    m_taskTime = _taskTime;
    m_taskTimeHasBeenSet = true;
}

bool AppScanSet::TaskTimeHasBeenSet() const
{
    return m_taskTimeHasBeenSet;
}

string AppScanSet::GetAppIconUrl() const
{
    return m_appIconUrl;
}

void AppScanSet::SetAppIconUrl(const string& _appIconUrl)
{
    m_appIconUrl = _appIconUrl;
    m_appIconUrlHasBeenSet = true;
}

bool AppScanSet::AppIconUrlHasBeenSet() const
{
    return m_appIconUrlHasBeenSet;
}

string AppScanSet::GetAppSid() const
{
    return m_appSid;
}

void AppScanSet::SetAppSid(const string& _appSid)
{
    m_appSid = _appSid;
    m_appSidHasBeenSet = true;
}

bool AppScanSet::AppSidHasBeenSet() const
{
    return m_appSidHasBeenSet;
}

uint64_t AppScanSet::GetSafeType() const
{
    return m_safeType;
}

void AppScanSet::SetSafeType(const uint64_t& _safeType)
{
    m_safeType = _safeType;
    m_safeTypeHasBeenSet = true;
}

bool AppScanSet::SafeTypeHasBeenSet() const
{
    return m_safeTypeHasBeenSet;
}

uint64_t AppScanSet::GetVulCount() const
{
    return m_vulCount;
}

void AppScanSet::SetVulCount(const uint64_t& _vulCount)
{
    m_vulCount = _vulCount;
    m_vulCountHasBeenSet = true;
}

bool AppScanSet::VulCountHasBeenSet() const
{
    return m_vulCountHasBeenSet;
}

