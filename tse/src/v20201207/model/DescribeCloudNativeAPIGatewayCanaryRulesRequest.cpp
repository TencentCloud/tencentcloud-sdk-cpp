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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayCanaryRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayCanaryRulesRequest::DescribeCloudNativeAPIGatewayCanaryRulesRequest() :
    m_gatewayIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeCloudNativeAPIGatewayCanaryRulesRequest::ToJsonString() const
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

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudNativeAPIGatewayCanaryRulesRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayCanaryRulesRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayCanaryRulesRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayCanaryRulesRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeCloudNativeAPIGatewayCanaryRulesRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayCanaryRulesRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayCanaryRulesRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeCloudNativeAPIGatewayCanaryRulesRequest::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayCanaryRulesRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayCanaryRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudNativeAPIGatewayCanaryRulesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayCanaryRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeCloudNativeAPIGatewayCanaryRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudNativeAPIGatewayCanaryRulesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayCanaryRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


