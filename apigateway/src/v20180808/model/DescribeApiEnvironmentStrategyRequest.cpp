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

#include <tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeApiEnvironmentStrategyRequest::DescribeApiEnvironmentStrategyRequest() :
    m_serviceIdHasBeenSet(false),
    m_environmentNamesHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeApiEnvironmentStrategyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_environmentNames.begin(); itr != m_environmentNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apiIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApiEnvironmentStrategyRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeApiEnvironmentStrategyRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeApiEnvironmentStrategyRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

vector<string> DescribeApiEnvironmentStrategyRequest::GetEnvironmentNames() const
{
    return m_environmentNames;
}

void DescribeApiEnvironmentStrategyRequest::SetEnvironmentNames(const vector<string>& _environmentNames)
{
    m_environmentNames = _environmentNames;
    m_environmentNamesHasBeenSet = true;
}

bool DescribeApiEnvironmentStrategyRequest::EnvironmentNamesHasBeenSet() const
{
    return m_environmentNamesHasBeenSet;
}

string DescribeApiEnvironmentStrategyRequest::GetApiId() const
{
    return m_apiId;
}

void DescribeApiEnvironmentStrategyRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool DescribeApiEnvironmentStrategyRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

int64_t DescribeApiEnvironmentStrategyRequest::GetLimit() const
{
    return m_limit;
}

void DescribeApiEnvironmentStrategyRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeApiEnvironmentStrategyRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeApiEnvironmentStrategyRequest::GetOffset() const
{
    return m_offset;
}

void DescribeApiEnvironmentStrategyRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeApiEnvironmentStrategyRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


