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

#include <tencentcloud/dlc/v20210125/model/AlterDMSTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AlterDMSTableRequest::AlterDMSTableRequest() :
    m_currentNameHasBeenSet(false),
    m_currentDbNameHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_dataUpdateTimeHasBeenSet(false),
    m_structUpdateTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_sdsHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string AlterDMSTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_currentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentDbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentDbName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_dataUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_structUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_structUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sds.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_partitionKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionKeys.begin(); itr != m_partitionKeys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_viewOriginalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewOriginalText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewOriginalText.c_str(), allocator).Move(), allocator);
    }

    if (m_viewExpandedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewExpandedText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewExpandedText.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AlterDMSTableRequest::GetCurrentName() const
{
    return m_currentName;
}

void AlterDMSTableRequest::SetCurrentName(const string& _currentName)
{
    m_currentName = _currentName;
    m_currentNameHasBeenSet = true;
}

bool AlterDMSTableRequest::CurrentNameHasBeenSet() const
{
    return m_currentNameHasBeenSet;
}

string AlterDMSTableRequest::GetCurrentDbName() const
{
    return m_currentDbName;
}

void AlterDMSTableRequest::SetCurrentDbName(const string& _currentDbName)
{
    m_currentDbName = _currentDbName;
    m_currentDbNameHasBeenSet = true;
}

bool AlterDMSTableRequest::CurrentDbNameHasBeenSet() const
{
    return m_currentDbNameHasBeenSet;
}

Asset AlterDMSTableRequest::GetAsset() const
{
    return m_asset;
}

void AlterDMSTableRequest::SetAsset(const Asset& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool AlterDMSTableRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string AlterDMSTableRequest::GetType() const
{
    return m_type;
}

void AlterDMSTableRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AlterDMSTableRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AlterDMSTableRequest::GetDbName() const
{
    return m_dbName;
}

void AlterDMSTableRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool AlterDMSTableRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t AlterDMSTableRequest::GetStorageSize() const
{
    return m_storageSize;
}

void AlterDMSTableRequest::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool AlterDMSTableRequest::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t AlterDMSTableRequest::GetRecordCount() const
{
    return m_recordCount;
}

void AlterDMSTableRequest::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool AlterDMSTableRequest::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

int64_t AlterDMSTableRequest::GetLifeTime() const
{
    return m_lifeTime;
}

void AlterDMSTableRequest::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool AlterDMSTableRequest::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

string AlterDMSTableRequest::GetDataUpdateTime() const
{
    return m_dataUpdateTime;
}

void AlterDMSTableRequest::SetDataUpdateTime(const string& _dataUpdateTime)
{
    m_dataUpdateTime = _dataUpdateTime;
    m_dataUpdateTimeHasBeenSet = true;
}

bool AlterDMSTableRequest::DataUpdateTimeHasBeenSet() const
{
    return m_dataUpdateTimeHasBeenSet;
}

string AlterDMSTableRequest::GetStructUpdateTime() const
{
    return m_structUpdateTime;
}

void AlterDMSTableRequest::SetStructUpdateTime(const string& _structUpdateTime)
{
    m_structUpdateTime = _structUpdateTime;
    m_structUpdateTimeHasBeenSet = true;
}

bool AlterDMSTableRequest::StructUpdateTimeHasBeenSet() const
{
    return m_structUpdateTimeHasBeenSet;
}

string AlterDMSTableRequest::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

void AlterDMSTableRequest::SetLastAccessTime(const string& _lastAccessTime)
{
    m_lastAccessTime = _lastAccessTime;
    m_lastAccessTimeHasBeenSet = true;
}

bool AlterDMSTableRequest::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

DMSSds AlterDMSTableRequest::GetSds() const
{
    return m_sds;
}

void AlterDMSTableRequest::SetSds(const DMSSds& _sds)
{
    m_sds = _sds;
    m_sdsHasBeenSet = true;
}

bool AlterDMSTableRequest::SdsHasBeenSet() const
{
    return m_sdsHasBeenSet;
}

vector<DMSColumn> AlterDMSTableRequest::GetColumns() const
{
    return m_columns;
}

void AlterDMSTableRequest::SetColumns(const vector<DMSColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool AlterDMSTableRequest::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<DMSColumn> AlterDMSTableRequest::GetPartitionKeys() const
{
    return m_partitionKeys;
}

void AlterDMSTableRequest::SetPartitionKeys(const vector<DMSColumn>& _partitionKeys)
{
    m_partitionKeys = _partitionKeys;
    m_partitionKeysHasBeenSet = true;
}

bool AlterDMSTableRequest::PartitionKeysHasBeenSet() const
{
    return m_partitionKeysHasBeenSet;
}

string AlterDMSTableRequest::GetViewOriginalText() const
{
    return m_viewOriginalText;
}

void AlterDMSTableRequest::SetViewOriginalText(const string& _viewOriginalText)
{
    m_viewOriginalText = _viewOriginalText;
    m_viewOriginalTextHasBeenSet = true;
}

bool AlterDMSTableRequest::ViewOriginalTextHasBeenSet() const
{
    return m_viewOriginalTextHasBeenSet;
}

string AlterDMSTableRequest::GetViewExpandedText() const
{
    return m_viewExpandedText;
}

void AlterDMSTableRequest::SetViewExpandedText(const string& _viewExpandedText)
{
    m_viewExpandedText = _viewExpandedText;
    m_viewExpandedTextHasBeenSet = true;
}

bool AlterDMSTableRequest::ViewExpandedTextHasBeenSet() const
{
    return m_viewExpandedTextHasBeenSet;
}

vector<DMSPartition> AlterDMSTableRequest::GetPartitions() const
{
    return m_partitions;
}

void AlterDMSTableRequest::SetPartitions(const vector<DMSPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool AlterDMSTableRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string AlterDMSTableRequest::GetName() const
{
    return m_name;
}

void AlterDMSTableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlterDMSTableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlterDMSTableRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void AlterDMSTableRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool AlterDMSTableRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


