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

#include <tencentcloud/dbbrain/v20210527/model/MongoDBSchemaSpaceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongoDBSchemaSpaceItem::MongoDBSchemaSpaceItem() :
    m_dbHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_sizeOnDiskHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_avgObjSizeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_totalIndexSizeHasBeenSet(false),
    m_dataFreeHasBeenSet(false),
    m_fragRatioHasBeenSet(false),
    m_fileReuseBytesHasBeenSet(false),
    m_databaseRatioHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBSchemaSpaceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("SizeOnDisk") && !value["SizeOnDisk"].IsNull())
    {
        if (!value["SizeOnDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.SizeOnDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeOnDisk = value["SizeOnDisk"].GetInt64();
        m_sizeOnDiskHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("AvgObjSize") && !value["AvgObjSize"].IsNull())
    {
        if (!value["AvgObjSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.AvgObjSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgObjSize = value["AvgObjSize"].GetInt64();
        m_avgObjSizeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalIndexSize") && !value["TotalIndexSize"].IsNull())
    {
        if (!value["TotalIndexSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.TotalIndexSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIndexSize = value["TotalIndexSize"].GetInt64();
        m_totalIndexSizeHasBeenSet = true;
    }

    if (value.HasMember("DataFree") && !value["DataFree"].IsNull())
    {
        if (!value["DataFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.DataFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFree = value["DataFree"].GetInt64();
        m_dataFreeHasBeenSet = true;
    }

    if (value.HasMember("FragRatio") && !value["FragRatio"].IsNull())
    {
        if (!value["FragRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.FragRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fragRatio = string(value["FragRatio"].GetString());
        m_fragRatioHasBeenSet = true;
    }

    if (value.HasMember("FileReuseBytes") && !value["FileReuseBytes"].IsNull())
    {
        if (!value["FileReuseBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.FileReuseBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileReuseBytes = value["FileReuseBytes"].GetInt64();
        m_fileReuseBytesHasBeenSet = true;
    }

    if (value.HasMember("DatabaseRatio") && !value["DatabaseRatio"].IsNull())
    {
        if (!value["DatabaseRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBSchemaSpaceItem.DatabaseRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseRatio = string(value["DatabaseRatio"].GetString());
        m_databaseRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBSchemaSpaceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_sizeOnDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeOnDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeOnDisk, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_avgObjSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgObjSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgObjSize, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_totalIndexSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIndexSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIndexSize, allocator);
    }

    if (m_dataFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFree, allocator);
    }

    if (m_fragRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fragRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_fileReuseBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileReuseBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileReuseBytes, allocator);
    }

    if (m_databaseRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseRatio.c_str(), allocator).Move(), allocator);
    }

}


string MongoDBSchemaSpaceItem::GetDb() const
{
    return m_db;
}

void MongoDBSchemaSpaceItem::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetTimestamp() const
{
    return m_timestamp;
}

void MongoDBSchemaSpaceItem::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetSizeOnDisk() const
{
    return m_sizeOnDisk;
}

void MongoDBSchemaSpaceItem::SetSizeOnDisk(const int64_t& _sizeOnDisk)
{
    m_sizeOnDisk = _sizeOnDisk;
    m_sizeOnDiskHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::SizeOnDiskHasBeenSet() const
{
    return m_sizeOnDiskHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetSize() const
{
    return m_size;
}

void MongoDBSchemaSpaceItem::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetAvgObjSize() const
{
    return m_avgObjSize;
}

void MongoDBSchemaSpaceItem::SetAvgObjSize(const int64_t& _avgObjSize)
{
    m_avgObjSize = _avgObjSize;
    m_avgObjSizeHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::AvgObjSizeHasBeenSet() const
{
    return m_avgObjSizeHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetCount() const
{
    return m_count;
}

void MongoDBSchemaSpaceItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetStorageSize() const
{
    return m_storageSize;
}

void MongoDBSchemaSpaceItem::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetTotalIndexSize() const
{
    return m_totalIndexSize;
}

void MongoDBSchemaSpaceItem::SetTotalIndexSize(const int64_t& _totalIndexSize)
{
    m_totalIndexSize = _totalIndexSize;
    m_totalIndexSizeHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::TotalIndexSizeHasBeenSet() const
{
    return m_totalIndexSizeHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetDataFree() const
{
    return m_dataFree;
}

void MongoDBSchemaSpaceItem::SetDataFree(const int64_t& _dataFree)
{
    m_dataFree = _dataFree;
    m_dataFreeHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::DataFreeHasBeenSet() const
{
    return m_dataFreeHasBeenSet;
}

string MongoDBSchemaSpaceItem::GetFragRatio() const
{
    return m_fragRatio;
}

void MongoDBSchemaSpaceItem::SetFragRatio(const string& _fragRatio)
{
    m_fragRatio = _fragRatio;
    m_fragRatioHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::FragRatioHasBeenSet() const
{
    return m_fragRatioHasBeenSet;
}

int64_t MongoDBSchemaSpaceItem::GetFileReuseBytes() const
{
    return m_fileReuseBytes;
}

void MongoDBSchemaSpaceItem::SetFileReuseBytes(const int64_t& _fileReuseBytes)
{
    m_fileReuseBytes = _fileReuseBytes;
    m_fileReuseBytesHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::FileReuseBytesHasBeenSet() const
{
    return m_fileReuseBytesHasBeenSet;
}

string MongoDBSchemaSpaceItem::GetDatabaseRatio() const
{
    return m_databaseRatio;
}

void MongoDBSchemaSpaceItem::SetDatabaseRatio(const string& _databaseRatio)
{
    m_databaseRatio = _databaseRatio;
    m_databaseRatioHasBeenSet = true;
}

bool MongoDBSchemaSpaceItem::DatabaseRatioHasBeenSet() const
{
    return m_databaseRatioHasBeenSet;
}

