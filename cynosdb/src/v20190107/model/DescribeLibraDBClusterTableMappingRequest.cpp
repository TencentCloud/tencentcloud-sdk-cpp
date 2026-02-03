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

#include <tencentcloud/cynosdb/v20190107/model/DescribeLibraDBClusterTableMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeLibraDBClusterTableMappingRequest::DescribeLibraDBClusterTableMappingRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_srcSchemasHasBeenSet(false),
    m_srcTableNameHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_mapSchemasHasBeenSet(false),
    m_mapTableNameHasBeenSet(false),
    m_mapSchemaNotEmptyHasBeenSet(false),
    m_mapTableNameNotEmptyHasBeenSet(false)
{
}

string DescribeLibraDBClusterTableMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_srcSchemasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSchemas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcSchemas.begin(); itr != m_srcSchemas.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_srcTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcTableName.begin(); itr != m_srcTableName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mapSchemasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapSchemas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mapSchemas.begin(); itr != m_mapSchemas.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mapTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mapTableName.begin(); itr != m_mapTableName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mapSchemaNotEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapSchemaNotEmpty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mapSchemaNotEmpty, allocator);
    }

    if (m_mapTableNameNotEmptyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapTableNameNotEmpty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mapTableNameNotEmpty, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLibraDBClusterTableMappingRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeLibraDBClusterTableMappingRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeLibraDBClusterTableMappingRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeLibraDBClusterTableMappingRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeLibraDBClusterTableMappingRequest::GetNodeId() const
{
    return m_nodeId;
}

void DescribeLibraDBClusterTableMappingRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

int64_t DescribeLibraDBClusterTableMappingRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLibraDBClusterTableMappingRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeLibraDBClusterTableMappingRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLibraDBClusterTableMappingRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeLibraDBClusterTableMappingRequest::GetSrcSchemas() const
{
    return m_srcSchemas;
}

void DescribeLibraDBClusterTableMappingRequest::SetSrcSchemas(const vector<string>& _srcSchemas)
{
    m_srcSchemas = _srcSchemas;
    m_srcSchemasHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::SrcSchemasHasBeenSet() const
{
    return m_srcSchemasHasBeenSet;
}

vector<string> DescribeLibraDBClusterTableMappingRequest::GetSrcTableName() const
{
    return m_srcTableName;
}

void DescribeLibraDBClusterTableMappingRequest::SetSrcTableName(const vector<string>& _srcTableName)
{
    m_srcTableName = _srcTableName;
    m_srcTableNameHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::SrcTableNameHasBeenSet() const
{
    return m_srcTableNameHasBeenSet;
}

vector<string> DescribeLibraDBClusterTableMappingRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeLibraDBClusterTableMappingRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

vector<string> DescribeLibraDBClusterTableMappingRequest::GetMapSchemas() const
{
    return m_mapSchemas;
}

void DescribeLibraDBClusterTableMappingRequest::SetMapSchemas(const vector<string>& _mapSchemas)
{
    m_mapSchemas = _mapSchemas;
    m_mapSchemasHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::MapSchemasHasBeenSet() const
{
    return m_mapSchemasHasBeenSet;
}

vector<string> DescribeLibraDBClusterTableMappingRequest::GetMapTableName() const
{
    return m_mapTableName;
}

void DescribeLibraDBClusterTableMappingRequest::SetMapTableName(const vector<string>& _mapTableName)
{
    m_mapTableName = _mapTableName;
    m_mapTableNameHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::MapTableNameHasBeenSet() const
{
    return m_mapTableNameHasBeenSet;
}

bool DescribeLibraDBClusterTableMappingRequest::GetMapSchemaNotEmpty() const
{
    return m_mapSchemaNotEmpty;
}

void DescribeLibraDBClusterTableMappingRequest::SetMapSchemaNotEmpty(const bool& _mapSchemaNotEmpty)
{
    m_mapSchemaNotEmpty = _mapSchemaNotEmpty;
    m_mapSchemaNotEmptyHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::MapSchemaNotEmptyHasBeenSet() const
{
    return m_mapSchemaNotEmptyHasBeenSet;
}

bool DescribeLibraDBClusterTableMappingRequest::GetMapTableNameNotEmpty() const
{
    return m_mapTableNameNotEmpty;
}

void DescribeLibraDBClusterTableMappingRequest::SetMapTableNameNotEmpty(const bool& _mapTableNameNotEmpty)
{
    m_mapTableNameNotEmpty = _mapTableNameNotEmpty;
    m_mapTableNameNotEmptyHasBeenSet = true;
}

bool DescribeLibraDBClusterTableMappingRequest::MapTableNameNotEmptyHasBeenSet() const
{
    return m_mapTableNameNotEmptyHasBeenSet;
}


