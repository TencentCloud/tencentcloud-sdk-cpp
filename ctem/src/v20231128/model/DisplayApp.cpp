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

#include <tencentcloud/ctem/v20231128/model/DisplayApp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayApp::DisplayApp() :
    m_idHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_developerHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_appVersionHasBeenSet(false)
{
}

CoreInternalOutcome DisplayApp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Developer") && !value["Developer"].IsNull())
    {
        if (!value["Developer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Developer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_developer = string(value["Developer"].GetString());
        m_developerHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ServerUrl") && !value["ServerUrl"].IsNull())
    {
        if (!value["ServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.ServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverUrl = string(value["ServerUrl"].GetString());
        m_serverUrlHasBeenSet = true;
    }

    if (value.HasMember("AppVersion") && !value["AppVersion"].IsNull())
    {
        if (!value["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayApp.AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(value["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayApp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_developerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Developer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_developer.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_serverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayApp::GetId() const
{
    return m_id;
}

void DisplayApp::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayApp::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

DisplayToolCommon DisplayApp::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayApp::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayApp::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayApp::GetName() const
{
    return m_name;
}

void DisplayApp::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisplayApp::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisplayApp::GetDescription() const
{
    return m_description;
}

void DisplayApp::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DisplayApp::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DisplayApp::GetDeveloper() const
{
    return m_developer;
}

void DisplayApp::SetDeveloper(const string& _developer)
{
    m_developer = _developer;
    m_developerHasBeenSet = true;
}

bool DisplayApp::DeveloperHasBeenSet() const
{
    return m_developerHasBeenSet;
}

string DisplayApp::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void DisplayApp::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool DisplayApp::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string DisplayApp::GetLogo() const
{
    return m_logo;
}

void DisplayApp::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool DisplayApp::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string DisplayApp::GetPackageName() const
{
    return m_packageName;
}

void DisplayApp::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DisplayApp::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DisplayApp::GetPlatform() const
{
    return m_platform;
}

void DisplayApp::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DisplayApp::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DisplayApp::GetServerUrl() const
{
    return m_serverUrl;
}

void DisplayApp::SetServerUrl(const string& _serverUrl)
{
    m_serverUrl = _serverUrl;
    m_serverUrlHasBeenSet = true;
}

bool DisplayApp::ServerUrlHasBeenSet() const
{
    return m_serverUrlHasBeenSet;
}

string DisplayApp::GetAppVersion() const
{
    return m_appVersion;
}

void DisplayApp::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DisplayApp::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

