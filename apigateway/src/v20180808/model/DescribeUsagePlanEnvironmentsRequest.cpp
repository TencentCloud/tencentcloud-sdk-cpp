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

#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeUsagePlanEnvironmentsRequest::DescribeUsagePlanEnvironmentsRequest() :
    m_usagePlanIdHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeUsagePlanEnvironmentsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_usagePlanIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsagePlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_usagePlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bindType.c_str(), allocator).Move(), allocator);
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


string DescribeUsagePlanEnvironmentsRequest::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void DescribeUsagePlanEnvironmentsRequest::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool DescribeUsagePlanEnvironmentsRequest::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

string DescribeUsagePlanEnvironmentsRequest::GetBindType() const
{
    return m_bindType;
}

void DescribeUsagePlanEnvironmentsRequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool DescribeUsagePlanEnvironmentsRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

int64_t DescribeUsagePlanEnvironmentsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUsagePlanEnvironmentsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUsagePlanEnvironmentsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeUsagePlanEnvironmentsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUsagePlanEnvironmentsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUsagePlanEnvironmentsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


