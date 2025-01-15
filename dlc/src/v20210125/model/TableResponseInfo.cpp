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

#include <tencentcloud/dlc/v20210125/model/TableResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TableResponseInfo::TableResponseInfo() :
    m_tableBaseInfoHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_inputFormatHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_mapMaterializedViewNameHasBeenSet(false),
    m_heatValueHasBeenSet(false),
    m_inputFormatShortHasBeenSet(false)
{
}

CoreInternalOutcome TableResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableBaseInfo") && !value["TableBaseInfo"].IsNull())
    {
        if (!value["TableBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.TableBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableBaseInfo.Deserialize(value["TableBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
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

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Partition item;
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

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InputFormat") && !value["InputFormat"].IsNull())
    {
        if (!value["InputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.InputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFormat = string(value["InputFormat"].GetString());
        m_inputFormatHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("MapMaterializedViewName") && !value["MapMaterializedViewName"].IsNull())
    {
        if (!value["MapMaterializedViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.MapMaterializedViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapMaterializedViewName = string(value["MapMaterializedViewName"].GetString());
        m_mapMaterializedViewNameHasBeenSet = true;
    }

    if (value.HasMember("HeatValue") && !value["HeatValue"].IsNull())
    {
        if (!value["HeatValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.HeatValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heatValue = value["HeatValue"].GetInt64();
        m_heatValueHasBeenSet = true;
    }

    if (value.HasMember("InputFormatShort") && !value["InputFormatShort"].IsNull())
    {
        if (!value["InputFormatShort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableResponseInfo.InputFormatShort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFormatShort = string(value["InputFormatShort"].GetString());
        m_inputFormatShortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputFormat.c_str(), allocator).Move(), allocator);
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

    if (m_mapMaterializedViewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapMaterializedViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mapMaterializedViewName.c_str(), allocator).Move(), allocator);
    }

    if (m_heatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heatValue, allocator);
    }

    if (m_inputFormatShortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFormatShort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputFormatShort.c_str(), allocator).Move(), allocator);
    }

}


TableBaseInfo TableResponseInfo::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void TableResponseInfo::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool TableResponseInfo::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

vector<Column> TableResponseInfo::GetColumns() const
{
    return m_columns;
}

void TableResponseInfo::SetColumns(const vector<Column>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TableResponseInfo::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<Partition> TableResponseInfo::GetPartitions() const
{
    return m_partitions;
}

void TableResponseInfo::SetPartitions(const vector<Partition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TableResponseInfo::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string TableResponseInfo::GetLocation() const
{
    return m_location;
}

void TableResponseInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TableResponseInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<Property> TableResponseInfo::GetProperties() const
{
    return m_properties;
}

void TableResponseInfo::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool TableResponseInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string TableResponseInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void TableResponseInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool TableResponseInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string TableResponseInfo::GetCreateTime() const
{
    return m_createTime;
}

void TableResponseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TableResponseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TableResponseInfo::GetInputFormat() const
{
    return m_inputFormat;
}

void TableResponseInfo::SetInputFormat(const string& _inputFormat)
{
    m_inputFormat = _inputFormat;
    m_inputFormatHasBeenSet = true;
}

bool TableResponseInfo::InputFormatHasBeenSet() const
{
    return m_inputFormatHasBeenSet;
}

int64_t TableResponseInfo::GetStorageSize() const
{
    return m_storageSize;
}

void TableResponseInfo::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool TableResponseInfo::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t TableResponseInfo::GetRecordCount() const
{
    return m_recordCount;
}

void TableResponseInfo::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool TableResponseInfo::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

string TableResponseInfo::GetMapMaterializedViewName() const
{
    return m_mapMaterializedViewName;
}

void TableResponseInfo::SetMapMaterializedViewName(const string& _mapMaterializedViewName)
{
    m_mapMaterializedViewName = _mapMaterializedViewName;
    m_mapMaterializedViewNameHasBeenSet = true;
}

bool TableResponseInfo::MapMaterializedViewNameHasBeenSet() const
{
    return m_mapMaterializedViewNameHasBeenSet;
}

int64_t TableResponseInfo::GetHeatValue() const
{
    return m_heatValue;
}

void TableResponseInfo::SetHeatValue(const int64_t& _heatValue)
{
    m_heatValue = _heatValue;
    m_heatValueHasBeenSet = true;
}

bool TableResponseInfo::HeatValueHasBeenSet() const
{
    return m_heatValueHasBeenSet;
}

string TableResponseInfo::GetInputFormatShort() const
{
    return m_inputFormatShort;
}

void TableResponseInfo::SetInputFormatShort(const string& _inputFormatShort)
{
    m_inputFormatShort = _inputFormatShort;
    m_inputFormatShortHasBeenSet = true;
}

bool TableResponseInfo::InputFormatShortHasBeenSet() const
{
    return m_inputFormatShortHasBeenSet;
}

