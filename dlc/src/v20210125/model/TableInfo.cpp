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

#include <tencentcloud/dlc/v20210125/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

TableInfo::TableInfo() :
    m_tableBaseInfoHasBeenSet(false),
    m_dataFormatHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TableBaseInfo") && !value["TableBaseInfo"].IsNull())
    {
        if (!value["TableBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableInfo.TableBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableBaseInfo.Deserialize(value["TableBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("DataFormat") && !value["DataFormat"].IsNull())
    {
        if (!value["DataFormat"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TableInfo.DataFormat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataFormat.Deserialize(value["DataFormat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataFormatHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Error("response `TableInfo.Columns` is not array type"));

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
            return CoreInternalOutcome(Error("response `TableInfo.Partitions` is not array type"));

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
            return CoreInternalOutcome(Error("response `TableInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tableBaseInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dataFormat.ToJsonObject(value[key.c_str()], allocator);
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

}


TableBaseInfo TableInfo::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void TableInfo::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool TableInfo::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

DataFormat TableInfo::GetDataFormat() const
{
    return m_dataFormat;
}

void TableInfo::SetDataFormat(const DataFormat& _dataFormat)
{
    m_dataFormat = _dataFormat;
    m_dataFormatHasBeenSet = true;
}

bool TableInfo::DataFormatHasBeenSet() const
{
    return m_dataFormatHasBeenSet;
}

vector<Column> TableInfo::GetColumns() const
{
    return m_columns;
}

void TableInfo::SetColumns(const vector<Column>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TableInfo::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<Partition> TableInfo::GetPartitions() const
{
    return m_partitions;
}

void TableInfo::SetPartitions(const vector<Partition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TableInfo::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string TableInfo::GetLocation() const
{
    return m_location;
}

void TableInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool TableInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

