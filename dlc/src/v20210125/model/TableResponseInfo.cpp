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
using namespace rapidjson;
using namespace std;

TableResponseInfo::TableResponseInfo() :
    m_tableBaseInfoHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_inputFormatHasBeenSet(false)
{
}

CoreInternalOutcome TableResponseInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableBaseInfo") && !value["TableBaseInfo"].IsNull())
    {
        if (!value["TableBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableResponseInfo.TableBaseInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `TableResponseInfo.Columns` is not array type"));

        const Value &tmpValue = value["Columns"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TableResponseInfo.Partitions` is not array type"));

        const Value &tmpValue = value["Partitions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TableResponseInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Error("response `TableResponseInfo.Properties` is not array type"));

        const Value &tmpValue = value["Properties"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `TableResponseInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResponseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InputFormat") && !value["InputFormat"].IsNull())
    {
        if (!value["InputFormat"].IsString())
        {
            return CoreInternalOutcome(Error("response `TableResponseInfo.InputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFormat = string(value["InputFormat"].GetString());
        m_inputFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableResponseInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableBaseInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_columnsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inputFormat.c_str(), allocator).Move(), allocator);
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

