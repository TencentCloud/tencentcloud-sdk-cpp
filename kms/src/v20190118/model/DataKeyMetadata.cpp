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

#include <tencentcloud/kms/v20190118/model/DataKeyMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DataKeyMetadata::DataKeyMetadata() :
    m_dataKeyIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_dataKeyNameHasBeenSet(false),
    m_numberOfBytesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_keyStateHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_originHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_isSyncReplicaHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_syncStatusHasBeenSet(false),
    m_syncMessagesHasBeenSet(false),
    m_syncStartTimeHasBeenSet(false),
    m_syncEndTimeHasBeenSet(false),
    m_sourceHsmClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome DataKeyMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataKeyId") && !value["DataKeyId"].IsNull())
    {
        if (!value["DataKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.DataKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataKeyId = string(value["DataKeyId"].GetString());
        m_dataKeyIdHasBeenSet = true;
    }

    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("DataKeyName") && !value["DataKeyName"].IsNull())
    {
        if (!value["DataKeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.DataKeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataKeyName = string(value["DataKeyName"].GetString());
        m_dataKeyNameHasBeenSet = true;
    }

    if (value.HasMember("NumberOfBytes") && !value["NumberOfBytes"].IsNull())
    {
        if (!value["NumberOfBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.NumberOfBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_numberOfBytes = value["NumberOfBytes"].GetUint64();
        m_numberOfBytesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("KeyState") && !value["KeyState"].IsNull())
    {
        if (!value["KeyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.KeyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyState = string(value["KeyState"].GetString());
        m_keyStateHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.CreatorUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetUint64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("DeletionDate") && !value["DeletionDate"].IsNull())
    {
        if (!value["DeletionDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.DeletionDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deletionDate = value["DeletionDate"].GetUint64();
        m_deletionDateHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("HsmClusterId") && !value["HsmClusterId"].IsNull())
    {
        if (!value["HsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.HsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterId = string(value["HsmClusterId"].GetString());
        m_hsmClusterIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("IsSyncReplica") && !value["IsSyncReplica"].IsNull())
    {
        if (!value["IsSyncReplica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.IsSyncReplica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSyncReplica = value["IsSyncReplica"].GetInt64();
        m_isSyncReplicaHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SyncStatus") && !value["SyncStatus"].IsNull())
    {
        if (!value["SyncStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SyncStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_syncStatus = value["SyncStatus"].GetInt64();
        m_syncStatusHasBeenSet = true;
    }

    if (value.HasMember("SyncMessages") && !value["SyncMessages"].IsNull())
    {
        if (!value["SyncMessages"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SyncMessages` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncMessages = string(value["SyncMessages"].GetString());
        m_syncMessagesHasBeenSet = true;
    }

    if (value.HasMember("SyncStartTime") && !value["SyncStartTime"].IsNull())
    {
        if (!value["SyncStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SyncStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncStartTime = value["SyncStartTime"].GetUint64();
        m_syncStartTimeHasBeenSet = true;
    }

    if (value.HasMember("SyncEndTime") && !value["SyncEndTime"].IsNull())
    {
        if (!value["SyncEndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SyncEndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncEndTime = value["SyncEndTime"].GetUint64();
        m_syncEndTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceHsmClusterId") && !value["SourceHsmClusterId"].IsNull())
    {
        if (!value["SourceHsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataKeyMetadata.SourceHsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceHsmClusterId = string(value["SourceHsmClusterId"].GetString());
        m_sourceHsmClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataKeyMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numberOfBytes, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_keyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyState.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deletionDate, allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isSyncReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSyncReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSyncReplica, allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_syncStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncStatus, allocator);
    }

    if (m_syncMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncMessages.c_str(), allocator).Move(), allocator);
    }

    if (m_syncStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncStartTime, allocator);
    }

    if (m_syncEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncEndTime, allocator);
    }

    if (m_sourceHsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceHsmClusterId.c_str(), allocator).Move(), allocator);
    }

}


string DataKeyMetadata::GetDataKeyId() const
{
    return m_dataKeyId;
}

void DataKeyMetadata::SetDataKeyId(const string& _dataKeyId)
{
    m_dataKeyId = _dataKeyId;
    m_dataKeyIdHasBeenSet = true;
}

bool DataKeyMetadata::DataKeyIdHasBeenSet() const
{
    return m_dataKeyIdHasBeenSet;
}

string DataKeyMetadata::GetKeyId() const
{
    return m_keyId;
}

void DataKeyMetadata::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool DataKeyMetadata::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string DataKeyMetadata::GetDataKeyName() const
{
    return m_dataKeyName;
}

void DataKeyMetadata::SetDataKeyName(const string& _dataKeyName)
{
    m_dataKeyName = _dataKeyName;
    m_dataKeyNameHasBeenSet = true;
}

bool DataKeyMetadata::DataKeyNameHasBeenSet() const
{
    return m_dataKeyNameHasBeenSet;
}

uint64_t DataKeyMetadata::GetNumberOfBytes() const
{
    return m_numberOfBytes;
}

void DataKeyMetadata::SetNumberOfBytes(const uint64_t& _numberOfBytes)
{
    m_numberOfBytes = _numberOfBytes;
    m_numberOfBytesHasBeenSet = true;
}

bool DataKeyMetadata::NumberOfBytesHasBeenSet() const
{
    return m_numberOfBytesHasBeenSet;
}

uint64_t DataKeyMetadata::GetCreateTime() const
{
    return m_createTime;
}

void DataKeyMetadata::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataKeyMetadata::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataKeyMetadata::GetDescription() const
{
    return m_description;
}

void DataKeyMetadata::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataKeyMetadata::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DataKeyMetadata::GetKeyState() const
{
    return m_keyState;
}

void DataKeyMetadata::SetKeyState(const string& _keyState)
{
    m_keyState = _keyState;
    m_keyStateHasBeenSet = true;
}

bool DataKeyMetadata::KeyStateHasBeenSet() const
{
    return m_keyStateHasBeenSet;
}

uint64_t DataKeyMetadata::GetCreatorUin() const
{
    return m_creatorUin;
}

void DataKeyMetadata::SetCreatorUin(const uint64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool DataKeyMetadata::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string DataKeyMetadata::GetOwner() const
{
    return m_owner;
}

void DataKeyMetadata::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DataKeyMetadata::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t DataKeyMetadata::GetDeletionDate() const
{
    return m_deletionDate;
}

void DataKeyMetadata::SetDeletionDate(const uint64_t& _deletionDate)
{
    m_deletionDate = _deletionDate;
    m_deletionDateHasBeenSet = true;
}

bool DataKeyMetadata::DeletionDateHasBeenSet() const
{
    return m_deletionDateHasBeenSet;
}

string DataKeyMetadata::GetOrigin() const
{
    return m_origin;
}

void DataKeyMetadata::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool DataKeyMetadata::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string DataKeyMetadata::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void DataKeyMetadata::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool DataKeyMetadata::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

string DataKeyMetadata::GetResourceId() const
{
    return m_resourceId;
}

void DataKeyMetadata::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DataKeyMetadata::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t DataKeyMetadata::GetIsSyncReplica() const
{
    return m_isSyncReplica;
}

void DataKeyMetadata::SetIsSyncReplica(const int64_t& _isSyncReplica)
{
    m_isSyncReplica = _isSyncReplica;
    m_isSyncReplicaHasBeenSet = true;
}

bool DataKeyMetadata::IsSyncReplicaHasBeenSet() const
{
    return m_isSyncReplicaHasBeenSet;
}

string DataKeyMetadata::GetSourceRegion() const
{
    return m_sourceRegion;
}

void DataKeyMetadata::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool DataKeyMetadata::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

int64_t DataKeyMetadata::GetSyncStatus() const
{
    return m_syncStatus;
}

void DataKeyMetadata::SetSyncStatus(const int64_t& _syncStatus)
{
    m_syncStatus = _syncStatus;
    m_syncStatusHasBeenSet = true;
}

bool DataKeyMetadata::SyncStatusHasBeenSet() const
{
    return m_syncStatusHasBeenSet;
}

string DataKeyMetadata::GetSyncMessages() const
{
    return m_syncMessages;
}

void DataKeyMetadata::SetSyncMessages(const string& _syncMessages)
{
    m_syncMessages = _syncMessages;
    m_syncMessagesHasBeenSet = true;
}

bool DataKeyMetadata::SyncMessagesHasBeenSet() const
{
    return m_syncMessagesHasBeenSet;
}

uint64_t DataKeyMetadata::GetSyncStartTime() const
{
    return m_syncStartTime;
}

void DataKeyMetadata::SetSyncStartTime(const uint64_t& _syncStartTime)
{
    m_syncStartTime = _syncStartTime;
    m_syncStartTimeHasBeenSet = true;
}

bool DataKeyMetadata::SyncStartTimeHasBeenSet() const
{
    return m_syncStartTimeHasBeenSet;
}

uint64_t DataKeyMetadata::GetSyncEndTime() const
{
    return m_syncEndTime;
}

void DataKeyMetadata::SetSyncEndTime(const uint64_t& _syncEndTime)
{
    m_syncEndTime = _syncEndTime;
    m_syncEndTimeHasBeenSet = true;
}

bool DataKeyMetadata::SyncEndTimeHasBeenSet() const
{
    return m_syncEndTimeHasBeenSet;
}

string DataKeyMetadata::GetSourceHsmClusterId() const
{
    return m_sourceHsmClusterId;
}

void DataKeyMetadata::SetSourceHsmClusterId(const string& _sourceHsmClusterId)
{
    m_sourceHsmClusterId = _sourceHsmClusterId;
    m_sourceHsmClusterIdHasBeenSet = true;
}

bool DataKeyMetadata::SourceHsmClusterIdHasBeenSet() const
{
    return m_sourceHsmClusterIdHasBeenSet;
}

