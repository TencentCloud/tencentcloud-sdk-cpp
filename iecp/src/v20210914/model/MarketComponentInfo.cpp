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

#include <tencentcloud/iecp/v20210914/model/MarketComponentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

MarketComponentInfo::MarketComponentInfo() :
    m_iDHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_outlineHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_workloadVisualConfigHasBeenSet(false),
    m_detailUrlHasBeenSet(false),
    m_installedHasBeenSet(false)
{
}

CoreInternalOutcome MarketComponentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("Outline") && !value["Outline"].IsNull())
    {
        if (!value["Outline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Outline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outline = string(value["Outline"].GetString());
        m_outlineHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("WorkloadVisualConfig") && !value["WorkloadVisualConfig"].IsNull())
    {
        if (!value["WorkloadVisualConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.WorkloadVisualConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadVisualConfig = string(value["WorkloadVisualConfig"].GetString());
        m_workloadVisualConfigHasBeenSet = true;
    }

    if (value.HasMember("DetailUrl") && !value["DetailUrl"].IsNull())
    {
        if (!value["DetailUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.DetailUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailUrl = string(value["DetailUrl"].GetString());
        m_detailUrlHasBeenSet = true;
    }

    if (value.HasMember("Installed") && !value["Installed"].IsNull())
    {
        if (!value["Installed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MarketComponentInfo.Installed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_installed = value["Installed"].GetBool();
        m_installedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MarketComponentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outline.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadVisualConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadVisualConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadVisualConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_detailUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detailUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_installedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Installed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installed, allocator);
    }

}


int64_t MarketComponentInfo::GetID() const
{
    return m_iD;
}

void MarketComponentInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MarketComponentInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MarketComponentInfo::GetAppName() const
{
    return m_appName;
}

void MarketComponentInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool MarketComponentInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string MarketComponentInfo::GetAuthor() const
{
    return m_author;
}

void MarketComponentInfo::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool MarketComponentInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string MarketComponentInfo::GetReleaseTime() const
{
    return m_releaseTime;
}

void MarketComponentInfo::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool MarketComponentInfo::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string MarketComponentInfo::GetOutline() const
{
    return m_outline;
}

void MarketComponentInfo::SetOutline(const string& _outline)
{
    m_outline = _outline;
    m_outlineHasBeenSet = true;
}

bool MarketComponentInfo::OutlineHasBeenSet() const
{
    return m_outlineHasBeenSet;
}

string MarketComponentInfo::GetDetail() const
{
    return m_detail;
}

void MarketComponentInfo::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool MarketComponentInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string MarketComponentInfo::GetIcon() const
{
    return m_icon;
}

void MarketComponentInfo::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool MarketComponentInfo::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

string MarketComponentInfo::GetVersion() const
{
    return m_version;
}

void MarketComponentInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MarketComponentInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MarketComponentInfo::GetWorkloadVisualConfig() const
{
    return m_workloadVisualConfig;
}

void MarketComponentInfo::SetWorkloadVisualConfig(const string& _workloadVisualConfig)
{
    m_workloadVisualConfig = _workloadVisualConfig;
    m_workloadVisualConfigHasBeenSet = true;
}

bool MarketComponentInfo::WorkloadVisualConfigHasBeenSet() const
{
    return m_workloadVisualConfigHasBeenSet;
}

string MarketComponentInfo::GetDetailUrl() const
{
    return m_detailUrl;
}

void MarketComponentInfo::SetDetailUrl(const string& _detailUrl)
{
    m_detailUrl = _detailUrl;
    m_detailUrlHasBeenSet = true;
}

bool MarketComponentInfo::DetailUrlHasBeenSet() const
{
    return m_detailUrlHasBeenSet;
}

bool MarketComponentInfo::GetInstalled() const
{
    return m_installed;
}

void MarketComponentInfo::SetInstalled(const bool& _installed)
{
    m_installed = _installed;
    m_installedHasBeenSet = true;
}

bool MarketComponentInfo::InstalledHasBeenSet() const
{
    return m_installedHasBeenSet;
}

