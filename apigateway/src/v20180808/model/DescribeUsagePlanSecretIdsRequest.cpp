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

#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

DescribeUsagePlanSecretIdsRequest::DescribeUsagePlanSecretIdsRequest() :
    m_usagePlanIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeUsagePlanSecretIdsRequest::ToJsonString() const
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


string DescribeUsagePlanSecretIdsRequest::GetUsagePlanId() const
{
    return m_usagePlanId;
}

void DescribeUsagePlanSecretIdsRequest::SetUsagePlanId(const string& _usagePlanId)
{
    m_usagePlanId = _usagePlanId;
    m_usagePlanIdHasBeenSet = true;
}

bool DescribeUsagePlanSecretIdsRequest::UsagePlanIdHasBeenSet() const
{
    return m_usagePlanIdHasBeenSet;
}

int64_t DescribeUsagePlanSecretIdsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUsagePlanSecretIdsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUsagePlanSecretIdsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeUsagePlanSecretIdsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUsagePlanSecretIdsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUsagePlanSecretIdsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


