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

#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeAddressTemplateGroupInstancesRequest::DescribeAddressTemplateGroupInstancesRequest() :
    m_addressTemplateGroupIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAddressTemplateGroupInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addressTemplateGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressTemplateGroupId.c_str(), allocator).Move(), allocator);
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


string DescribeAddressTemplateGroupInstancesRequest::GetAddressTemplateGroupId() const
{
    return m_addressTemplateGroupId;
}

void DescribeAddressTemplateGroupInstancesRequest::SetAddressTemplateGroupId(const string& _addressTemplateGroupId)
{
    m_addressTemplateGroupId = _addressTemplateGroupId;
    m_addressTemplateGroupIdHasBeenSet = true;
}

bool DescribeAddressTemplateGroupInstancesRequest::AddressTemplateGroupIdHasBeenSet() const
{
    return m_addressTemplateGroupIdHasBeenSet;
}

uint64_t DescribeAddressTemplateGroupInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAddressTemplateGroupInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAddressTemplateGroupInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAddressTemplateGroupInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAddressTemplateGroupInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAddressTemplateGroupInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


