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

#include <tencentcloud/vpc/v20170312/model/DescribePrivateNatGatewayTranslationAclRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribePrivateNatGatewayTranslationAclRulesRequest::DescribePrivateNatGatewayTranslationAclRulesRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_translationDirectionHasBeenSet(false),
    m_translationTypeHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_originalIpHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_translationDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_translationDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_translationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_translationType.c_str(), allocator).Move(), allocator);
    }

    if (m_translationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_translationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalIp.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePrivateNatGatewayTranslationAclRulesRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::GetTranslationDirection() const
{
    return m_translationDirection;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetTranslationDirection(const string& _translationDirection)
{
    m_translationDirection = _translationDirection;
    m_translationDirectionHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::TranslationDirectionHasBeenSet() const
{
    return m_translationDirectionHasBeenSet;
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::GetTranslationType() const
{
    return m_translationType;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetTranslationType(const string& _translationType)
{
    m_translationType = _translationType;
    m_translationTypeHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::TranslationTypeHasBeenSet() const
{
    return m_translationTypeHasBeenSet;
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::GetTranslationIp() const
{
    return m_translationIp;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::GetOriginalIp() const
{
    return m_originalIp;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}

uint64_t DescribePrivateNatGatewayTranslationAclRulesRequest::GetOffset() const
{
    return m_offset;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePrivateNatGatewayTranslationAclRulesRequest::GetLimit() const
{
    return m_limit;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribePrivateNatGatewayTranslationAclRulesRequest::GetDescription() const
{
    return m_description;
}

void DescribePrivateNatGatewayTranslationAclRulesRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribePrivateNatGatewayTranslationAclRulesRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


