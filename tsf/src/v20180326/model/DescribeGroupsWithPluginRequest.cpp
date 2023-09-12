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

#include <tencentcloud/tsf/v20180326/model/DescribeGroupsWithPluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeGroupsWithPluginRequest::DescribeGroupsWithPluginRequest() :
    m_pluginIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_boundHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false)
{
}

string DescribeGroupsWithPluginRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
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

    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bound, allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGroupsWithPluginRequest::GetPluginId() const
{
    return m_pluginId;
}

void DescribeGroupsWithPluginRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

int64_t DescribeGroupsWithPluginRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGroupsWithPluginRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGroupsWithPluginRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGroupsWithPluginRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeGroupsWithPluginRequest::GetBound() const
{
    return m_bound;
}

void DescribeGroupsWithPluginRequest::SetBound(const bool& _bound)
{
    m_bound = _bound;
    m_boundHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

string DescribeGroupsWithPluginRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeGroupsWithPluginRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

string DescribeGroupsWithPluginRequest::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void DescribeGroupsWithPluginRequest::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool DescribeGroupsWithPluginRequest::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}


