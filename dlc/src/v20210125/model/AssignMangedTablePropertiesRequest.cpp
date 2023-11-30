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

#include <tencentcloud/dlc/v20210125/model/AssignMangedTablePropertiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AssignMangedTablePropertiesRequest::AssignMangedTablePropertiesRequest() :
    m_tableBaseInfoHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_upsertKeysHasBeenSet(false)
{
}

string AssignMangedTablePropertiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableBaseInfo.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_upsertKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpsertKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_upsertKeys.begin(); itr != m_upsertKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


TableBaseInfo AssignMangedTablePropertiesRequest::GetTableBaseInfo() const
{
    return m_tableBaseInfo;
}

void AssignMangedTablePropertiesRequest::SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo)
{
    m_tableBaseInfo = _tableBaseInfo;
    m_tableBaseInfoHasBeenSet = true;
}

bool AssignMangedTablePropertiesRequest::TableBaseInfoHasBeenSet() const
{
    return m_tableBaseInfoHasBeenSet;
}

vector<TColumn> AssignMangedTablePropertiesRequest::GetColumns() const
{
    return m_columns;
}

void AssignMangedTablePropertiesRequest::SetColumns(const vector<TColumn>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool AssignMangedTablePropertiesRequest::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<TPartition> AssignMangedTablePropertiesRequest::GetPartitions() const
{
    return m_partitions;
}

void AssignMangedTablePropertiesRequest::SetPartitions(const vector<TPartition>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool AssignMangedTablePropertiesRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

vector<Property> AssignMangedTablePropertiesRequest::GetProperties() const
{
    return m_properties;
}

void AssignMangedTablePropertiesRequest::SetProperties(const vector<Property>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool AssignMangedTablePropertiesRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<string> AssignMangedTablePropertiesRequest::GetUpsertKeys() const
{
    return m_upsertKeys;
}

void AssignMangedTablePropertiesRequest::SetUpsertKeys(const vector<string>& _upsertKeys)
{
    m_upsertKeys = _upsertKeys;
    m_upsertKeysHasBeenSet = true;
}

bool AssignMangedTablePropertiesRequest::UpsertKeysHasBeenSet() const
{
    return m_upsertKeysHasBeenSet;
}


