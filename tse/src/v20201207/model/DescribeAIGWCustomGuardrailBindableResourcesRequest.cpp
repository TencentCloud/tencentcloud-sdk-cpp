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

#include <tencentcloud/tse/v20201207/model/DescribeAIGWCustomGuardrailBindableResourcesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeAIGWCustomGuardrailBindableResourcesRequest::DescribeAIGWCustomGuardrailBindableResourcesRequest() :
    m_gatewayIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeAIGWCustomGuardrailBindableResourcesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
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


string DescribeAIGWCustomGuardrailBindableResourcesRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeAIGWCustomGuardrailBindableResourcesRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeAIGWCustomGuardrailBindableResourcesRequest::GetPolicyId() const
{
    return m_policyId;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string DescribeAIGWCustomGuardrailBindableResourcesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DescribeAIGWCustomGuardrailBindableResourcesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAIGWCustomGuardrailBindableResourcesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAIGWCustomGuardrailBindableResourcesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailBindableResourcesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


