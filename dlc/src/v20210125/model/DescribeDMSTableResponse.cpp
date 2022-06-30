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

#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDMSTableResponse::DescribeDMSTableResponse() :
    m_assetHasBeenSet(false),
    m_viewOriginalTextHasBeenSet(false),
    m_viewExpandedTextHasBeenSet(false),
    m_retentionHasBeenSet(false),
    m_sdsHasBeenSet(false),
    m_partitionKeysHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_lifeTimeHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_dataUpdateTimeHasBeenSet(false),
    m_structUpdateTimeHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDMSTableResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Asset") && !rsp["Asset"].IsNull())
    {
        if (!rsp["Asset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Asset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asset.Deserialize(rsp["Asset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetHasBeenSet = true;
    }

    if (rsp.HasMember("ViewOriginalText") && !rsp["ViewOriginalText"].IsNull())
    {
        if (!rsp["ViewOriginalText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewOriginalText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewOriginalText = string(rsp["ViewOriginalText"].GetString());
        m_viewOriginalTextHasBeenSet = true;
    }

    if (rsp.HasMember("ViewExpandedText") && !rsp["ViewExpandedText"].IsNull())
    {
        if (!rsp["ViewExpandedText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewExpandedText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewExpandedText = string(rsp["ViewExpandedText"].GetString());
        m_viewExpandedTextHasBeenSet = true;
    }

    if (rsp.HasMember("Retention") && !rsp["Retention"].IsNull())
    {
        if (!rsp["Retention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Retention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retention = rsp["Retention"].GetInt64();
        m_retentionHasBeenSet = true;
    }

    if (rsp.HasMember("Sds") && !rsp["Sds"].IsNull())
    {
        if (!rsp["Sds"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Sds` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sds.Deserialize(rsp["Sds"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sdsHasBeenSet = true;
    }

    if (rsp.HasMember("PartitionKeys") && !rsp["PartitionKeys"].IsNull())
    {
        if (!rsp["PartitionKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartitionKeys` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PartitionKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionKeys.push_back(item);
        }
        m_partitionKeysHasBeenSet = true;
    }

    if (rsp.HasMember("Partitions") && !rsp["Partitions"].IsNull())
    {
        if (!rsp["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Partitions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSPartition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitions.push_back(item);
        }
        m_partitionsHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("DbName") && !rsp["DbName"].IsNull())
    {
        if (!rsp["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(rsp["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (rsp.HasMember("SchemaName") && !rsp["SchemaName"].IsNull())
    {
        if (!rsp["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(rsp["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (rsp.HasMember("StorageSize") && !rsp["StorageSize"].IsNull())
    {
        if (!rsp["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = rsp["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("RecordCount") && !rsp["RecordCount"].IsNull())
    {
        if (!rsp["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = rsp["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (rsp.HasMember("LifeTime") && !rsp["LifeTime"].IsNull())
    {
        if (!rsp["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = rsp["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LastAccessTime") && !rsp["LastAccessTime"].IsNull())
    {
        if (!rsp["LastAccessTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastAccessTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAccessTime = string(rsp["LastAccessTime"].GetString());
        m_lastAccessTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DataUpdateTime") && !rsp["DataUpdateTime"].IsNull())
    {
        if (!rsp["DataUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataUpdateTime = string(rsp["DataUpdateTime"].GetString());
        m_dataUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("StructUpdateTime") && !rsp["StructUpdateTime"].IsNull())
    {
        if (!rsp["StructUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_structUpdateTime = string(rsp["StructUpdateTime"].GetString());
        m_structUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Columns") && !rsp["Columns"].IsNull())
    {
        if (!rsp["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Columns` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDMSTableResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_viewOriginalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewOriginalText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewOriginalText.c_str(), allocator).Move(), allocator);
    }

    if (m_viewExpandedTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewExpandedText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewExpandedText.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retention, allocator);
    }

    if (m_sdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sds.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partitionKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionKeys.begin(); itr != m_partitionKeys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

    if (m_lastAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAccessTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_structUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_structUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


Asset DescribeDMSTableResponse::GetAsset() const
{
    return m_asset;
}

bool DescribeDMSTableResponse::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string DescribeDMSTableResponse::GetViewOriginalText() const
{
    return m_viewOriginalText;
}

bool DescribeDMSTableResponse::ViewOriginalTextHasBeenSet() const
{
    return m_viewOriginalTextHasBeenSet;
}

string DescribeDMSTableResponse::GetViewExpandedText() const
{
    return m_viewExpandedText;
}

bool DescribeDMSTableResponse::ViewExpandedTextHasBeenSet() const
{
    return m_viewExpandedTextHasBeenSet;
}

int64_t DescribeDMSTableResponse::GetRetention() const
{
    return m_retention;
}

bool DescribeDMSTableResponse::RetentionHasBeenSet() const
{
    return m_retentionHasBeenSet;
}

DMSSds DescribeDMSTableResponse::GetSds() const
{
    return m_sds;
}

bool DescribeDMSTableResponse::SdsHasBeenSet() const
{
    return m_sdsHasBeenSet;
}

vector<DMSColumn> DescribeDMSTableResponse::GetPartitionKeys() const
{
    return m_partitionKeys;
}

bool DescribeDMSTableResponse::PartitionKeysHasBeenSet() const
{
    return m_partitionKeysHasBeenSet;
}

vector<DMSPartition> DescribeDMSTableResponse::GetPartitions() const
{
    return m_partitions;
}

bool DescribeDMSTableResponse::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string DescribeDMSTableResponse::GetType() const
{
    return m_type;
}

bool DescribeDMSTableResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDMSTableResponse::GetDbName() const
{
    return m_dbName;
}

bool DescribeDMSTableResponse::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeDMSTableResponse::GetSchemaName() const
{
    return m_schemaName;
}

bool DescribeDMSTableResponse::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

int64_t DescribeDMSTableResponse::GetStorageSize() const
{
    return m_storageSize;
}

bool DescribeDMSTableResponse::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t DescribeDMSTableResponse::GetRecordCount() const
{
    return m_recordCount;
}

bool DescribeDMSTableResponse::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

int64_t DescribeDMSTableResponse::GetLifeTime() const
{
    return m_lifeTime;
}

bool DescribeDMSTableResponse::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

string DescribeDMSTableResponse::GetLastAccessTime() const
{
    return m_lastAccessTime;
}

bool DescribeDMSTableResponse::LastAccessTimeHasBeenSet() const
{
    return m_lastAccessTimeHasBeenSet;
}

string DescribeDMSTableResponse::GetDataUpdateTime() const
{
    return m_dataUpdateTime;
}

bool DescribeDMSTableResponse::DataUpdateTimeHasBeenSet() const
{
    return m_dataUpdateTimeHasBeenSet;
}

string DescribeDMSTableResponse::GetStructUpdateTime() const
{
    return m_structUpdateTime;
}

bool DescribeDMSTableResponse::StructUpdateTimeHasBeenSet() const
{
    return m_structUpdateTimeHasBeenSet;
}

vector<DMSColumn> DescribeDMSTableResponse::GetColumns() const
{
    return m_columns;
}

bool DescribeDMSTableResponse::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

string DescribeDMSTableResponse::GetName() const
{
    return m_name;
}

bool DescribeDMSTableResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


