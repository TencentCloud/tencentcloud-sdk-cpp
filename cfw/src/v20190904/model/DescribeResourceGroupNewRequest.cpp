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

#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeResourceGroupNewRequest::DescribeResourceGroupNewRequest() :
    m_queryTypeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_showTypeHasBeenSet(false)
{
}

string DescribeResourceGroupNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_showTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_showType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceGroupNewRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeResourceGroupNewRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeResourceGroupNewRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string DescribeResourceGroupNewRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeResourceGroupNewRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeResourceGroupNewRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeResourceGroupNewRequest::GetShowType() const
{
    return m_showType;
}

void DescribeResourceGroupNewRequest::SetShowType(const string& _showType)
{
    m_showType = _showType;
    m_showTypeHasBeenSet = true;
}

bool DescribeResourceGroupNewRequest::ShowTypeHasBeenSet() const
{
    return m_showTypeHasBeenSet;
}


