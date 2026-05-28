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

#include <tencentcloud/tcb/v20180608/model/MigrationSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MigrationSummary::MigrationSummary() :
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_appliedAtHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_createdByHasBeenSet(false)
{
}

CoreInternalOutcome MigrationSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Checksum") && !value["Checksum"].IsNull())
    {
        if (!value["Checksum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.Checksum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checksum = string(value["Checksum"].GetString());
        m_checksumHasBeenSet = true;
    }

    if (value.HasMember("AppliedAt") && !value["AppliedAt"].IsNull())
    {
        if (!value["AppliedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.AppliedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appliedAt = string(value["AppliedAt"].GetString());
        m_appliedAtHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationSummary.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_appliedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppliedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appliedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

}


string MigrationSummary::GetVersion() const
{
    return m_version;
}

void MigrationSummary::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool MigrationSummary::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string MigrationSummary::GetName() const
{
    return m_name;
}

void MigrationSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MigrationSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MigrationSummary::GetChecksum() const
{
    return m_checksum;
}

void MigrationSummary::SetChecksum(const string& _checksum)
{
    m_checksum = _checksum;
    m_checksumHasBeenSet = true;
}

bool MigrationSummary::ChecksumHasBeenSet() const
{
    return m_checksumHasBeenSet;
}

string MigrationSummary::GetAppliedAt() const
{
    return m_appliedAt;
}

void MigrationSummary::SetAppliedAt(const string& _appliedAt)
{
    m_appliedAt = _appliedAt;
    m_appliedAtHasBeenSet = true;
}

bool MigrationSummary::AppliedAtHasBeenSet() const
{
    return m_appliedAtHasBeenSet;
}

string MigrationSummary::GetSource() const
{
    return m_source;
}

void MigrationSummary::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool MigrationSummary::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string MigrationSummary::GetCreatedBy() const
{
    return m_createdBy;
}

void MigrationSummary::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool MigrationSummary::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

