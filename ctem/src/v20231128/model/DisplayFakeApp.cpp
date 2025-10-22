/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctem/v20231128/model/DisplayFakeApp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayFakeApp::DisplayFakeApp() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_handlingStatusHasBeenSet(false),
    m_shutdownStatusHasBeenSet(false),
    m_shutdownTimeHasBeenSet(false)
{
}

CoreInternalOutcome DisplayFakeApp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("HandlingStatus") && !value["HandlingStatus"].IsNull())
    {
        if (!value["HandlingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.HandlingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handlingStatus = value["HandlingStatus"].GetInt64();
        m_handlingStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownStatus") && !value["ShutdownStatus"].IsNull())
    {
        if (!value["ShutdownStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.ShutdownStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownStatus = value["ShutdownStatus"].GetInt64();
        m_shutdownStatusHasBeenSet = true;
    }

    if (value.HasMember("ShutdownTime") && !value["ShutdownTime"].IsNull())
    {
        if (!value["ShutdownTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayFakeApp.ShutdownTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shutdownTime = string(value["ShutdownTime"].GetString());
        m_shutdownTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayFakeApp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_handlingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandlingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handlingStatus, allocator);
    }

    if (m_shutdownStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shutdownStatus, allocator);
    }

    if (m_shutdownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShutdownTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shutdownTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayFakeApp::GetId() const
{
    return m_id;
}

void DisplayFakeApp::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayFakeApp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayFakeApp::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayFakeApp::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayFakeApp::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayFakeApp::GetAppName() const
{
    return m_appName;
}

void DisplayFakeApp::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DisplayFakeApp::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DisplayFakeApp::GetPackageName() const
{
    return m_packageName;
}

void DisplayFakeApp::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DisplayFakeApp::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DisplayFakeApp::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void DisplayFakeApp::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool DisplayFakeApp::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

int64_t DisplayFakeApp::GetHandlingStatus() const
{
    return m_handlingStatus;
}

void DisplayFakeApp::SetHandlingStatus(const int64_t& _handlingStatus)
{
    m_handlingStatus = _handlingStatus;
    m_handlingStatusHasBeenSet = true;
}

bool DisplayFakeApp::HandlingStatusHasBeenSet() const
{
    return m_handlingStatusHasBeenSet;
}

int64_t DisplayFakeApp::GetShutdownStatus() const
{
    return m_shutdownStatus;
}

void DisplayFakeApp::SetShutdownStatus(const int64_t& _shutdownStatus)
{
    m_shutdownStatus = _shutdownStatus;
    m_shutdownStatusHasBeenSet = true;
}

bool DisplayFakeApp::ShutdownStatusHasBeenSet() const
{
    return m_shutdownStatusHasBeenSet;
}

string DisplayFakeApp::GetShutdownTime() const
{
    return m_shutdownTime;
}

void DisplayFakeApp::SetShutdownTime(const string& _shutdownTime)
{
    m_shutdownTime = _shutdownTime;
    m_shutdownTimeHasBeenSet = true;
}

bool DisplayFakeApp::ShutdownTimeHasBeenSet() const
{
    return m_shutdownTimeHasBeenSet;
}

