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

#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

DescribeIdlFileInfosRequest::DescribeIdlFileInfosRequest() :
    m_clusterIdHasBeenSet(false),
    m_tableGroupIdsHasBeenSet(false),
    m_idlFileIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeIdlFileInfosRequest::ToJsonString() const
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

    if (m_tableGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableGroupIds.begin(); itr != m_tableGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_idlFileIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdlFileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idlFileIds.begin(); itr != m_idlFileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIdlFileInfosRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeIdlFileInfosRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DescribeIdlFileInfosRequest::GetTableGroupIds() const
{
    return m_tableGroupIds;
}

void DescribeIdlFileInfosRequest::SetTableGroupIds(const vector<string>& _tableGroupIds)
{
    m_tableGroupIds = _tableGroupIds;
    m_tableGroupIdsHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::TableGroupIdsHasBeenSet() const
{
    return m_tableGroupIdsHasBeenSet;
}

vector<string> DescribeIdlFileInfosRequest::GetIdlFileIds() const
{
    return m_idlFileIds;
}

void DescribeIdlFileInfosRequest::SetIdlFileIds(const vector<string>& _idlFileIds)
{
    m_idlFileIds = _idlFileIds;
    m_idlFileIdsHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::IdlFileIdsHasBeenSet() const
{
    return m_idlFileIdsHasBeenSet;
}

int64_t DescribeIdlFileInfosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeIdlFileInfosRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeIdlFileInfosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeIdlFileInfosRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeIdlFileInfosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


