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

#include <tencentcloud/monitor/v20230616/model/ArtifactInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ArtifactInfo::ArtifactInfo() :
    m_artifactIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mimeTypeHasBeenSet(false),
    m_sizeBytesHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_storagePathHasBeenSet(false)
{
}

CoreInternalOutcome ArtifactInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArtifactId") && !value["ArtifactId"].IsNull())
    {
        if (!value["ArtifactId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.ArtifactId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_artifactId = string(value["ArtifactId"].GetString());
        m_artifactIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MimeType") && !value["MimeType"].IsNull())
    {
        if (!value["MimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.MimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mimeType = string(value["MimeType"].GetString());
        m_mimeTypeHasBeenSet = true;
    }

    if (value.HasMember("SizeBytes") && !value["SizeBytes"].IsNull())
    {
        if (!value["SizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.SizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeBytes = value["SizeBytes"].GetInt64();
        m_sizeBytesHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("SkillId") && !value["SkillId"].IsNull())
    {
        if (!value["SkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.SkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillId = string(value["SkillId"].GetString());
        m_skillIdHasBeenSet = true;
    }

    if (value.HasMember("StoragePath") && !value["StoragePath"].IsNull())
    {
        if (!value["StoragePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArtifactInfo.StoragePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePath = string(value["StoragePath"].GetString());
        m_storagePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArtifactInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_artifactIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_artifactId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeBytes, allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePath.c_str(), allocator).Move(), allocator);
    }

}


string ArtifactInfo::GetArtifactId() const
{
    return m_artifactId;
}

void ArtifactInfo::SetArtifactId(const string& _artifactId)
{
    m_artifactId = _artifactId;
    m_artifactIdHasBeenSet = true;
}

bool ArtifactInfo::ArtifactIdHasBeenSet() const
{
    return m_artifactIdHasBeenSet;
}

string ArtifactInfo::GetName() const
{
    return m_name;
}

void ArtifactInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ArtifactInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ArtifactInfo::GetMimeType() const
{
    return m_mimeType;
}

void ArtifactInfo::SetMimeType(const string& _mimeType)
{
    m_mimeType = _mimeType;
    m_mimeTypeHasBeenSet = true;
}

bool ArtifactInfo::MimeTypeHasBeenSet() const
{
    return m_mimeTypeHasBeenSet;
}

int64_t ArtifactInfo::GetSizeBytes() const
{
    return m_sizeBytes;
}

void ArtifactInfo::SetSizeBytes(const int64_t& _sizeBytes)
{
    m_sizeBytes = _sizeBytes;
    m_sizeBytesHasBeenSet = true;
}

bool ArtifactInfo::SizeBytesHasBeenSet() const
{
    return m_sizeBytesHasBeenSet;
}

bool ArtifactInfo::GetIsGlobal() const
{
    return m_isGlobal;
}

void ArtifactInfo::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ArtifactInfo::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

int64_t ArtifactInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void ArtifactInfo::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ArtifactInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t ArtifactInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ArtifactInfo::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ArtifactInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string ArtifactInfo::GetAgentId() const
{
    return m_agentId;
}

void ArtifactInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ArtifactInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ArtifactInfo::GetSkillId() const
{
    return m_skillId;
}

void ArtifactInfo::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool ArtifactInfo::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

string ArtifactInfo::GetStoragePath() const
{
    return m_storagePath;
}

void ArtifactInfo::SetStoragePath(const string& _storagePath)
{
    m_storagePath = _storagePath;
    m_storagePathHasBeenSet = true;
}

bool ArtifactInfo::StoragePathHasBeenSet() const
{
    return m_storagePathHasBeenSet;
}

