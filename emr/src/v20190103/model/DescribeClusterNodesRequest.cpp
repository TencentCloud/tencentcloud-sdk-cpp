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

#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeClusterNodesRequest::DescribeClusterNodesRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeFlagHasBeenSet(false),
    m_exportDbHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_hardwareResourceTypeHasBeenSet(false),
    m_searchFieldsHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_ascHasBeenSet(false)
{
}

string DescribeClusterNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_exportDbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportDb";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportDb, allocator);
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

    if (m_hardwareResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hardwareResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_searchFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchFields.begin(); itr != m_searchFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asc, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterNodesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeClusterNodesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeClusterNodesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeClusterNodesRequest::GetNodeFlag() const
{
    return m_nodeFlag;
}

void DescribeClusterNodesRequest::SetNodeFlag(const string& _nodeFlag)
{
    m_nodeFlag = _nodeFlag;
    m_nodeFlagHasBeenSet = true;
}

bool DescribeClusterNodesRequest::NodeFlagHasBeenSet() const
{
    return m_nodeFlagHasBeenSet;
}

bool DescribeClusterNodesRequest::GetExportDb() const
{
    return m_exportDb;
}

void DescribeClusterNodesRequest::SetExportDb(const bool& _exportDb)
{
    m_exportDb = _exportDb;
    m_exportDbHasBeenSet = true;
}

bool DescribeClusterNodesRequest::ExportDbHasBeenSet() const
{
    return m_exportDbHasBeenSet;
}

int64_t DescribeClusterNodesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeClusterNodesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeClusterNodesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeClusterNodesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeClusterNodesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeClusterNodesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeClusterNodesRequest::GetHardwareResourceType() const
{
    return m_hardwareResourceType;
}

void DescribeClusterNodesRequest::SetHardwareResourceType(const string& _hardwareResourceType)
{
    m_hardwareResourceType = _hardwareResourceType;
    m_hardwareResourceTypeHasBeenSet = true;
}

bool DescribeClusterNodesRequest::HardwareResourceTypeHasBeenSet() const
{
    return m_hardwareResourceTypeHasBeenSet;
}

vector<SearchItem> DescribeClusterNodesRequest::GetSearchFields() const
{
    return m_searchFields;
}

void DescribeClusterNodesRequest::SetSearchFields(const vector<SearchItem>& _searchFields)
{
    m_searchFields = _searchFields;
    m_searchFieldsHasBeenSet = true;
}

bool DescribeClusterNodesRequest::SearchFieldsHasBeenSet() const
{
    return m_searchFieldsHasBeenSet;
}

string DescribeClusterNodesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeClusterNodesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeClusterNodesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

int64_t DescribeClusterNodesRequest::GetAsc() const
{
    return m_asc;
}

void DescribeClusterNodesRequest::SetAsc(const int64_t& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool DescribeClusterNodesRequest::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}


