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

#include <tencentcloud/wedata/v20210820/model/TablePartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TablePartition::TablePartition() :
    m_partitionNameHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_storageSizeWithUnitHasBeenSet(false),
    m_numFilesHasBeenSet(false),
    m_averageFileSizeWithUnitHasBeenSet(false)
{
}

CoreInternalOutcome TablePartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionName") && !value["PartitionName"].IsNull())
    {
        if (!value["PartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.PartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionName = string(value["PartitionName"].GetString());
        m_partitionNameHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.StorageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = string(value["StorageSize"].GetString());
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageSizeWithUnit") && !value["StorageSizeWithUnit"].IsNull())
    {
        if (!value["StorageSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.StorageSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageSizeWithUnit = string(value["StorageSizeWithUnit"].GetString());
        m_storageSizeWithUnitHasBeenSet = true;
    }

    if (value.HasMember("NumFiles") && !value["NumFiles"].IsNull())
    {
        if (!value["NumFiles"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.NumFiles` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numFiles = value["NumFiles"].GetInt64();
        m_numFilesHasBeenSet = true;
    }

    if (value.HasMember("AverageFileSizeWithUnit") && !value["AverageFileSizeWithUnit"].IsNull())
    {
        if (!value["AverageFileSizeWithUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePartition.AverageFileSizeWithUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_averageFileSizeWithUnit = string(value["AverageFileSizeWithUnit"].GetString());
        m_averageFileSizeWithUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TablePartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSize.c_str(), allocator).Move(), allocator);
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

    if (m_storageSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageSizeWithUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_numFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numFiles, allocator);
    }

    if (m_averageFileSizeWithUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageFileSizeWithUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_averageFileSizeWithUnit.c_str(), allocator).Move(), allocator);
    }

}


string TablePartition::GetPartitionName() const
{
    return m_partitionName;
}

void TablePartition::SetPartitionName(const string& _partitionName)
{
    m_partitionName = _partitionName;
    m_partitionNameHasBeenSet = true;
}

bool TablePartition::PartitionNameHasBeenSet() const
{
    return m_partitionNameHasBeenSet;
}

int64_t TablePartition::GetRecordCount() const
{
    return m_recordCount;
}

void TablePartition::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool TablePartition::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string TablePartition::GetStorageSize() const
{
    return m_storageSize;
}

void TablePartition::SetStorageSize(const string& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool TablePartition::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string TablePartition::GetCreateTime() const
{
    return m_createTime;
}

void TablePartition::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TablePartition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TablePartition::GetModifiedTime() const
{
    return m_modifiedTime;
}

void TablePartition::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool TablePartition::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string TablePartition::GetStorageSizeWithUnit() const
{
    return m_storageSizeWithUnit;
}

void TablePartition::SetStorageSizeWithUnit(const string& _storageSizeWithUnit)
{
    m_storageSizeWithUnit = _storageSizeWithUnit;
    m_storageSizeWithUnitHasBeenSet = true;
}

bool TablePartition::StorageSizeWithUnitHasBeenSet() const
{
    return m_storageSizeWithUnitHasBeenSet;
}

int64_t TablePartition::GetNumFiles() const
{
    return m_numFiles;
}

void TablePartition::SetNumFiles(const int64_t& _numFiles)
{
    m_numFiles = _numFiles;
    m_numFilesHasBeenSet = true;
}

bool TablePartition::NumFilesHasBeenSet() const
{
    return m_numFilesHasBeenSet;
}

string TablePartition::GetAverageFileSizeWithUnit() const
{
    return m_averageFileSizeWithUnit;
}

void TablePartition::SetAverageFileSizeWithUnit(const string& _averageFileSizeWithUnit)
{
    m_averageFileSizeWithUnit = _averageFileSizeWithUnit;
    m_averageFileSizeWithUnitHasBeenSet = true;
}

bool TablePartition::AverageFileSizeWithUnitHasBeenSet() const
{
    return m_averageFileSizeWithUnitHasBeenSet;
}

