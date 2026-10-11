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

#include <tencentcloud/ags/v20250920/model/SandboxSnapshot.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SandboxSnapshot::SandboxSnapshot() :
    m_snapshotIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_sourceInstanceIdHasBeenSet(false),
    m_memoryIncludedHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SandboxSnapshot::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("SourceInstanceId") && !value["SourceInstanceId"].IsNull())
    {
        if (!value["SourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.SourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInstanceId = string(value["SourceInstanceId"].GetString());
        m_sourceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("MemoryIncluded") && !value["MemoryIncluded"].IsNull())
    {
        if (!value["MemoryIncluded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.MemoryIncluded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_memoryIncluded = value["MemoryIncluded"].GetBool();
        m_memoryIncludedHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusReason") && !value["StatusReason"].IsNull())
    {
        if (!value["StatusReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.StatusReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusReason = string(value["StatusReason"].GetString());
        m_statusReasonHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SandboxSnapshot.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SandboxSnapshot::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryIncludedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryIncluded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryIncluded, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusReason.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string SandboxSnapshot::GetSnapshotId() const
{
    return m_snapshotId;
}

void SandboxSnapshot::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool SandboxSnapshot::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string SandboxSnapshot::GetSnapshotName() const
{
    return m_snapshotName;
}

void SandboxSnapshot::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool SandboxSnapshot::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

string SandboxSnapshot::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void SandboxSnapshot::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool SandboxSnapshot::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

bool SandboxSnapshot::GetMemoryIncluded() const
{
    return m_memoryIncluded;
}

void SandboxSnapshot::SetMemoryIncluded(const bool& _memoryIncluded)
{
    m_memoryIncluded = _memoryIncluded;
    m_memoryIncludedHasBeenSet = true;
}

bool SandboxSnapshot::MemoryIncludedHasBeenSet() const
{
    return m_memoryIncludedHasBeenSet;
}

string SandboxSnapshot::GetStatus() const
{
    return m_status;
}

void SandboxSnapshot::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SandboxSnapshot::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SandboxSnapshot::GetStatusReason() const
{
    return m_statusReason;
}

void SandboxSnapshot::SetStatusReason(const string& _statusReason)
{
    m_statusReason = _statusReason;
    m_statusReasonHasBeenSet = true;
}

bool SandboxSnapshot::StatusReasonHasBeenSet() const
{
    return m_statusReasonHasBeenSet;
}

vector<Tag> SandboxSnapshot::GetTags() const
{
    return m_tags;
}

void SandboxSnapshot::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SandboxSnapshot::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SandboxSnapshot::GetCreateTime() const
{
    return m_createTime;
}

void SandboxSnapshot::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SandboxSnapshot::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SandboxSnapshot::GetUpdateTime() const
{
    return m_updateTime;
}

void SandboxSnapshot::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SandboxSnapshot::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

