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

#include <tencentcloud/cwp/v20180228/model/DescribeVertexDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVertexDetailRequest::DescribeVertexDetailRequest() :
    m_vertexIdsHasBeenSet(false),
    m_incidentIdHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

string DescribeVertexDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vertexIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VertexIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vertexIds.begin(); itr != m_vertexIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_incidentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncidentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incidentId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeVertexDetailRequest::GetVertexIds() const
{
    return m_vertexIds;
}

void DescribeVertexDetailRequest::SetVertexIds(const vector<string>& _vertexIds)
{
    m_vertexIds = _vertexIds;
    m_vertexIdsHasBeenSet = true;
}

bool DescribeVertexDetailRequest::VertexIdsHasBeenSet() const
{
    return m_vertexIdsHasBeenSet;
}

string DescribeVertexDetailRequest::GetIncidentId() const
{
    return m_incidentId;
}

void DescribeVertexDetailRequest::SetIncidentId(const string& _incidentId)
{
    m_incidentId = _incidentId;
    m_incidentIdHasBeenSet = true;
}

bool DescribeVertexDetailRequest::IncidentIdHasBeenSet() const
{
    return m_incidentIdHasBeenSet;
}

string DescribeVertexDetailRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeVertexDetailRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeVertexDetailRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}


