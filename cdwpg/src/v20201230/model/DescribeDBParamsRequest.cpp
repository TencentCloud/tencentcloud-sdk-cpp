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

#include <tencentcloud/cdwpg/v20201230/model/DescribeDBParamsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeDBParamsRequest::DescribeDBParamsRequest() :
    m_nodeTypesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DescribeDBParamsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nodeTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeTypes.begin(); itr != m_nodeTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDBParamsRequest::GetNodeTypes() const
{
    return m_nodeTypes;
}

void DescribeDBParamsRequest::SetNodeTypes(const vector<string>& _nodeTypes)
{
    m_nodeTypes = _nodeTypes;
    m_nodeTypesHasBeenSet = true;
}

bool DescribeDBParamsRequest::NodeTypesHasBeenSet() const
{
    return m_nodeTypesHasBeenSet;
}

int64_t DescribeDBParamsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBParamsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBParamsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDBParamsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBParamsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBParamsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDBParamsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBParamsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBParamsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


