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

#include <tencentcloud/tcb/v20180608/model/MigrationPlanItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MigrationPlanItem::MigrationPlanItem() :
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome MigrationPlanItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Checksum") && !value["Checksum"].IsNull())
    {
        if (!value["Checksum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Checksum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checksum = string(value["Checksum"].GetString());
        m_checksumHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationPlanItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationPlanItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_checksumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Checksum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checksum.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string MigrationPlanItem::GetVersion() const
{
    return m_version;
}

void MigrationPlanItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MigrationPlanItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MigrationPlanItem::GetName() const
{
    return m_name;
}

void MigrationPlanItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MigrationPlanItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MigrationPlanItem::GetChecksum() const
{
    return m_checksum;
}

void MigrationPlanItem::SetChecksum(const string& _checksum)
{
    m_checksum = _checksum;
    m_checksumHasBeenSet = true;
}

bool MigrationPlanItem::ChecksumHasBeenSet() const
{
    return m_checksumHasBeenSet;
}

string MigrationPlanItem::GetStatus() const
{
    return m_status;
}

void MigrationPlanItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrationPlanItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MigrationPlanItem::GetSource() const
{
    return m_source;
}

void MigrationPlanItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool MigrationPlanItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string MigrationPlanItem::GetReason() const
{
    return m_reason;
}

void MigrationPlanItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool MigrationPlanItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

