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

#include <tencentcloud/dlc/v20210125/model/HiveTablePartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

HiveTablePartition::HiveTablePartition() :
    m_partitionHasBeenSet(false),
    m_recordsHasBeenSet(false),
    m_dataFileStorageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false)
{
}

CoreInternalOutcome HiveTablePartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Records") && !value["Records"].IsNull())
    {
        if (!value["Records"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.Records` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_records = value["Records"].GetInt64();
        m_recordsHasBeenSet = true;
    }

    if (value.HasMember("DataFileStorage") && !value["DataFileStorage"].IsNull())
    {
        if (!value["DataFileStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.DataFileStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFileStorage = value["DataFileStorage"].GetInt64();
        m_dataFileStorageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAccessTime") && !value["LastAccessTime"].IsNull())
    {
        if (!value["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveTablePartition.LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(value["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiveTablePartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

}


string HiveTablePartition::GetPartition() const
{
    return m_partition;
}

void HiveTablePartition::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool HiveTablePartition::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t HiveTablePartition::GetRecords() const
{
    return m_records;
}

void HiveTablePartition::SetRecords(const int64_t& _records)
{
    m_records = _records;
    m_recordsHasBeenSet = true;
}

bool HiveTablePartition::RecordsHasBeenSet() const
{
    return m_recordsHasBeenSet;
}

int64_t HiveTablePartition::GetDataFileStorage() const
{
    return m_dataFileStorage;
}

void HiveTablePartition::SetDataFileStorage(const int64_t& _dataFileStorage)
{
    m_dataFileStorage = _dataFileStorage;
    m_dataFileStorageHasBeenSet = true;
}

bool HiveTablePartition::DataFileStorageHasBeenSet() const
{
    return m_dataFileStorageHasBeenSet;
}

string HiveTablePartition::GetCreateTime() const
{
    return m_createTime;
}

void HiveTablePartition::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HiveTablePartition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HiveTablePartition::GetModifiedTime() const
{
    return m_modifiedTime;
}

void HiveTablePartition::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool HiveTablePartition::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string HiveTablePartition::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void HiveTablePartition::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool HiveTablePartition::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

