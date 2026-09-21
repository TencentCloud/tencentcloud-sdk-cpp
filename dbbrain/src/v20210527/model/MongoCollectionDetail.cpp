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

#include <tencentcloud/dbbrain/v20210527/model/MongoCollectionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MongoCollectionDetail::MongoCollectionDetail() :
    m_collStatsHasBeenSet(false),
    m_collectionSizeHasBeenSet(false),
    m_dataFreeHasBeenSet(false),
    m_spaceRatioHasBeenSet(false),
    m_fragRatioHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_totalIndexSizeHasBeenSet(false),
    m_avgObjSizeHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_compressionRatioHasBeenSet(false),
    m_fileReuseBytesHasBeenSet(false)
{
}

CoreInternalOutcome MongoCollectionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CollStats") && !value["CollStats"].IsNull())
    {
        if (!value["CollStats"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.CollStats` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collStats = string(value["CollStats"].GetString());
        m_collStatsHasBeenSet = true;
    }

    if (value.HasMember("CollectionSize") && !value["CollectionSize"].IsNull())
    {
        if (!value["CollectionSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.CollectionSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_collectionSize = value["CollectionSize"].GetInt64();
        m_collectionSizeHasBeenSet = true;
    }

    if (value.HasMember("DataFree") && !value["DataFree"].IsNull())
    {
        if (!value["DataFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.DataFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFree = value["DataFree"].GetInt64();
        m_dataFreeHasBeenSet = true;
    }

    if (value.HasMember("SpaceRatio") && !value["SpaceRatio"].IsNull())
    {
        if (!value["SpaceRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.SpaceRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceRatio = string(value["SpaceRatio"].GetString());
        m_spaceRatioHasBeenSet = true;
    }

    if (value.HasMember("FragRatio") && !value["FragRatio"].IsNull())
    {
        if (!value["FragRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.FragRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fragRatio = string(value["FragRatio"].GetString());
        m_fragRatioHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("TotalIndexSize") && !value["TotalIndexSize"].IsNull())
    {
        if (!value["TotalIndexSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.TotalIndexSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalIndexSize = value["TotalIndexSize"].GetInt64();
        m_totalIndexSizeHasBeenSet = true;
    }

    if (value.HasMember("AvgObjSize") && !value["AvgObjSize"].IsNull())
    {
        if (!value["AvgObjSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.AvgObjSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgObjSize = value["AvgObjSize"].GetInt64();
        m_avgObjSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CompressionRatio") && !value["CompressionRatio"].IsNull())
    {
        if (!value["CompressionRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.CompressionRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressionRatio = string(value["CompressionRatio"].GetString());
        m_compressionRatioHasBeenSet = true;
    }

    if (value.HasMember("FileReuseBytes") && !value["FileReuseBytes"].IsNull())
    {
        if (!value["FileReuseBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoCollectionDetail.FileReuseBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileReuseBytes = value["FileReuseBytes"].GetInt64();
        m_fileReuseBytesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoCollectionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_collStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collStats.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectionSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_collectionSize, allocator);
    }

    if (m_dataFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFree, allocator);
    }

    if (m_spaceRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_fragRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fragRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_totalIndexSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalIndexSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalIndexSize, allocator);
    }

    if (m_avgObjSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgObjSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgObjSize, allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_compressionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressionRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_fileReuseBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileReuseBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileReuseBytes, allocator);
    }

}


string MongoCollectionDetail::GetCollStats() const
{
    return m_collStats;
}

void MongoCollectionDetail::SetCollStats(const string& _collStats)
{
    m_collStats = _collStats;
    m_collStatsHasBeenSet = true;
}

bool MongoCollectionDetail::CollStatsHasBeenSet() const
{
    return m_collStatsHasBeenSet;
}

int64_t MongoCollectionDetail::GetCollectionSize() const
{
    return m_collectionSize;
}

void MongoCollectionDetail::SetCollectionSize(const int64_t& _collectionSize)
{
    m_collectionSize = _collectionSize;
    m_collectionSizeHasBeenSet = true;
}

bool MongoCollectionDetail::CollectionSizeHasBeenSet() const
{
    return m_collectionSizeHasBeenSet;
}

int64_t MongoCollectionDetail::GetDataFree() const
{
    return m_dataFree;
}

void MongoCollectionDetail::SetDataFree(const int64_t& _dataFree)
{
    m_dataFree = _dataFree;
    m_dataFreeHasBeenSet = true;
}

bool MongoCollectionDetail::DataFreeHasBeenSet() const
{
    return m_dataFreeHasBeenSet;
}

string MongoCollectionDetail::GetSpaceRatio() const
{
    return m_spaceRatio;
}

void MongoCollectionDetail::SetSpaceRatio(const string& _spaceRatio)
{
    m_spaceRatio = _spaceRatio;
    m_spaceRatioHasBeenSet = true;
}

bool MongoCollectionDetail::SpaceRatioHasBeenSet() const
{
    return m_spaceRatioHasBeenSet;
}

string MongoCollectionDetail::GetFragRatio() const
{
    return m_fragRatio;
}

void MongoCollectionDetail::SetFragRatio(const string& _fragRatio)
{
    m_fragRatio = _fragRatio;
    m_fragRatioHasBeenSet = true;
}

bool MongoCollectionDetail::FragRatioHasBeenSet() const
{
    return m_fragRatioHasBeenSet;
}

int64_t MongoCollectionDetail::GetSize() const
{
    return m_size;
}

void MongoCollectionDetail::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool MongoCollectionDetail::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t MongoCollectionDetail::GetTotalIndexSize() const
{
    return m_totalIndexSize;
}

void MongoCollectionDetail::SetTotalIndexSize(const int64_t& _totalIndexSize)
{
    m_totalIndexSize = _totalIndexSize;
    m_totalIndexSizeHasBeenSet = true;
}

bool MongoCollectionDetail::TotalIndexSizeHasBeenSet() const
{
    return m_totalIndexSizeHasBeenSet;
}

int64_t MongoCollectionDetail::GetAvgObjSize() const
{
    return m_avgObjSize;
}

void MongoCollectionDetail::SetAvgObjSize(const int64_t& _avgObjSize)
{
    m_avgObjSize = _avgObjSize;
    m_avgObjSizeHasBeenSet = true;
}

bool MongoCollectionDetail::AvgObjSizeHasBeenSet() const
{
    return m_avgObjSizeHasBeenSet;
}

int64_t MongoCollectionDetail::GetStorageSize() const
{
    return m_storageSize;
}

void MongoCollectionDetail::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool MongoCollectionDetail::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t MongoCollectionDetail::GetCount() const
{
    return m_count;
}

void MongoCollectionDetail::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool MongoCollectionDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string MongoCollectionDetail::GetCompressionRatio() const
{
    return m_compressionRatio;
}

void MongoCollectionDetail::SetCompressionRatio(const string& _compressionRatio)
{
    m_compressionRatio = _compressionRatio;
    m_compressionRatioHasBeenSet = true;
}

bool MongoCollectionDetail::CompressionRatioHasBeenSet() const
{
    return m_compressionRatioHasBeenSet;
}

int64_t MongoCollectionDetail::GetFileReuseBytes() const
{
    return m_fileReuseBytes;
}

void MongoCollectionDetail::SetFileReuseBytes(const int64_t& _fileReuseBytes)
{
    m_fileReuseBytes = _fileReuseBytes;
    m_fileReuseBytesHasBeenSet = true;
}

bool MongoCollectionDetail::FileReuseBytesHasBeenSet() const
{
    return m_fileReuseBytesHasBeenSet;
}

