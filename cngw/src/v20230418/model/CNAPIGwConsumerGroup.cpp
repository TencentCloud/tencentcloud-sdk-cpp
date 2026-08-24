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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwConsumerGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwConsumerGroup::CNAPIGwConsumerGroup() :
    m_consumerGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_bindCountHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_syncedVersionHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwConsumerGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerGroupId") && !value["ConsumerGroupId"].IsNull())
    {
        if (!value["ConsumerGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.ConsumerGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupId = string(value["ConsumerGroupId"].GetString());
        m_consumerGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("BindCount") && !value["BindCount"].IsNull())
    {
        if (!value["BindCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.BindCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindCount = value["BindCount"].GetUint64();
        m_bindCountHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.SyncStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = string(value["SyncStatus"].GetString());
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SyncedVersion") && !value["SyncedVersion"].IsNull())
    {
        if (!value["SyncedVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwConsumerGroup.SyncedVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncedVersion = string(value["SyncedVersion"].GetString());
        m_syncedVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwConsumerGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindCount, allocator);
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_syncedVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncedVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncedVersion.c_str(), allocator).Move(), allocator);
    }

}


string CNAPIGwConsumerGroup::GetConsumerGroupId() const
{
    return m_consumerGroupId;
}

void CNAPIGwConsumerGroup::SetConsumerGroupId(const string& _consumerGroupId)
{
    m_consumerGroupId = _consumerGroupId;
    m_consumerGroupIdHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::ConsumerGroupIdHasBeenSet() const
{
    return m_consumerGroupIdHasBeenSet;
}

string CNAPIGwConsumerGroup::GetName() const
{
    return m_name;
}

void CNAPIGwConsumerGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CNAPIGwConsumerGroup::GetStatus() const
{
    return m_status;
}

void CNAPIGwConsumerGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CNAPIGwConsumerGroup::GetDescription() const
{
    return m_description;
}

void CNAPIGwConsumerGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CNAPIGwConsumerGroup::GetCreateTime() const
{
    return m_createTime;
}

void CNAPIGwConsumerGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CNAPIGwConsumerGroup::GetModifyTime() const
{
    return m_modifyTime;
}

void CNAPIGwConsumerGroup::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t CNAPIGwConsumerGroup::GetBindCount() const
{
    return m_bindCount;
}

void CNAPIGwConsumerGroup::SetBindCount(const uint64_t& _bindCount)
{
    m_bindCount = _bindCount;
    m_bindCountHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::BindCountHasBeenSet() const
{
    return m_bindCountHasBeenSet;
}

string CNAPIGwConsumerGroup::GetSyncStatus() const
{
    return m_syncStatus;
}

void CNAPIGwConsumerGroup::SetSyncStatus(const string& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string CNAPIGwConsumerGroup::GetSourceType() const
{
    return m_sourceType;
}

void CNAPIGwConsumerGroup::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CNAPIGwConsumerGroup::GetSyncedVersion() const
{
    return m_syncedVersion;
}

void CNAPIGwConsumerGroup::SetSyncedVersion(const string& _syncedVersion)
{
    m_syncedVersion = _syncedVersion;
    m_syncedVersionHasBeenSet = true;
}

bool CNAPIGwConsumerGroup::SyncedVersionHasBeenSet() const
{
    return m_syncedVersionHasBeenSet;
}

