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

#include <tencentcloud/dlc/v20210125/model/IcebergTablePartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

IcebergTablePartition::IcebergTablePartition() :
    m_partitionHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_dataFileSizeHasBeenSet(false),
    m_dataFileStorageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_lastUpdateSnapshotIdHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome IcebergTablePartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.Records` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_records = value["Records"].GetInt64();
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("DataFileSize") && !value["DataFileSize"].IsNull())
    {
        if (!value["DataFileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.DataFileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFileSize = value["DataFileSize"].GetInt64();
        m_dataFileSizeHasBeenSet = true;
    }

    if (value.HasMember("DataFileStorage") && !value["DataFileStorage"].IsNull())
    {
        if (!value["DataFileStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.DataFileStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFileStorage = value["DataFileStorage"].GetInt64();
        m_dataFileStorageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateSnapshotId") && !value["LastUpdateSnapshotId"].IsNull())
    {
        if (!value["LastUpdateSnapshotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.LastUpdateSnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateSnapshotId = string(value["LastUpdateSnapshotId"].GetString());
        m_lastUpdateSnapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IcebergTablePartition.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IcebergTablePartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Records";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_records, allocator);
    }

    if (m_dataFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFileSize, allocator);
    }

    if (m_dataFileStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFileStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFileStorage, allocator);
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

    if (m_lastUpdateSnapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateSnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateSnapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IcebergTablePartition::GetPartition() const
{
    return m_partition;
}

void IcebergTablePartition::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool IcebergTablePartition::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t IcebergTablePartition::GetRecords() const
{
    return m_records;
}

void IcebergTablePartition::SetRecords(const int64_t& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool IcebergTablePartition::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

int64_t IcebergTablePartition::GetDataFileSize() const
{
    return m_dataFileSize;
}

void IcebergTablePartition::SetDataFileSize(const int64_t& _dataFileSize)
{
    m_dataFileSize = _dataFileSize;
    m_dataFileSizeHasBeenSet = true;
}

bool IcebergTablePartition::DataFileSizeHasBeenSet() const
{
    return m_dataFileSizeHasBeenSet;
}

int64_t IcebergTablePartition::GetDataFileStorage() const
{
    return m_dataFileStorage;
}

void IcebergTablePartition::SetDataFileStorage(const int64_t& _dataFileStorage)
{
    m_dataFileStorage = _dataFileStorage;
    m_dataFileStorageHasBeenSet = true;
}

bool IcebergTablePartition::DataFileStorageHasBeenSet() const
{
    return m_dataFileStorageHasBeenSet;
}

string IcebergTablePartition::GetCreateTime() const
{
    return m_createTime;
}

void IcebergTablePartition::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IcebergTablePartition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IcebergTablePartition::GetUpdateTime() const
{
    return m_updateTime;
}

void IcebergTablePartition::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool IcebergTablePartition::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string IcebergTablePartition::GetLastUpdateSnapshotId() const
{
    return m_lastUpdateSnapshotId;
}

void IcebergTablePartition::SetLastUpdateSnapshotId(const string& _lastUpdateSnapshotId)
{
    m_lastUpdateSnapshotId = _lastUpdateSnapshotId;
    m_lastUpdateSnapshotIdHasBeenSet = true;
}

bool IcebergTablePartition::LastUpdateSnapshotIdHasBeenSet() const
{
    return m_lastUpdateSnapshotIdHasBeenSet;
}

LocationInfo IcebergTablePartition::GetLocation() const
{
    return m_location;
}

void IcebergTablePartition::SetLocation(const LocationInfo& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool IcebergTablePartition::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

