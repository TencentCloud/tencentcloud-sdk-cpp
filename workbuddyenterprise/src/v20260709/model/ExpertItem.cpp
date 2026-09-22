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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ExpertItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ExpertItem::ExpertItem() :
    m_sourceHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expertIdHasBeenSet(false),
    m_expertVersionHasBeenSet(false)
{
}

CoreInternalOutcome ExpertItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpertId") && !value["ExpertId"].IsNull())
    {
        if (!value["ExpertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.ExpertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expertId = string(value["ExpertId"].GetString());
        m_expertIdHasBeenSet = true;
    }

    if (value.HasMember("ExpertVersion") && !value["ExpertVersion"].IsNull())
    {
        if (!value["ExpertVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertItem.ExpertVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expertVersion = string(value["ExpertVersion"].GetString());
        m_expertVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpertItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_expertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expertId.c_str(), allocator).Move(), allocator);
    }

    if (m_expertVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpertVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expertVersion.c_str(), allocator).Move(), allocator);
    }

}


string ExpertItem::GetSource() const
{
    return m_source;
}

void ExpertItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ExpertItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ExpertItem::GetDisplayName() const
{
    return m_displayName;
}

void ExpertItem::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ExpertItem::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ExpertItem::GetDescription() const
{
    return m_description;
}

void ExpertItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ExpertItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ExpertItem::GetIcon() const
{
    return m_icon;
}

void ExpertItem::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool ExpertItem::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

bool ExpertItem::GetEnabled() const
{
    return m_enabled;
}

void ExpertItem::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ExpertItem::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ExpertItem::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void ExpertItem::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool ExpertItem::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string ExpertItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ExpertItem::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ExpertItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ExpertItem::GetStatus() const
{
    return m_status;
}

void ExpertItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExpertItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExpertItem::GetExpertId() const
{
    return m_expertId;
}

void ExpertItem::SetExpertId(const string& _expertId)
{
    m_expertId = _expertId;
    m_expertIdHasBeenSet = true;
}

bool ExpertItem::ExpertIdHasBeenSet() const
{
    return m_expertIdHasBeenSet;
}

string ExpertItem::GetExpertVersion() const
{
    return m_expertVersion;
}

void ExpertItem::SetExpertVersion(const string& _expertVersion)
{
    m_expertVersion = _expertVersion;
    m_expertVersionHasBeenSet = true;
}

bool ExpertItem::ExpertVersionHasBeenSet() const
{
    return m_expertVersionHasBeenSet;
}

