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

#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeletePrivateNatGatewayTranslationAclRuleRequest::DeletePrivateNatGatewayTranslationAclRuleRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_translationDirectionHasBeenSet(false),
    m_translationTypeHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_aclRuleIdsHasBeenSet(false),
    m_originalIpHasBeenSet(false)
{
}

string DeletePrivateNatGatewayTranslationAclRuleRequest::ToJsonString() const
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

    if (m_aclRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aclRuleIds.begin(); itr != m_aclRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_originalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalIp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePrivateNatGatewayTranslationAclRuleRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

string DeletePrivateNatGatewayTranslationAclRuleRequest::GetTranslationDirection() const
{
    return m_translationDirection;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetTranslationDirection(const string& _translationDirection)
{
    m_translationDirection = _translationDirection;
    m_translationDirectionHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::TranslationDirectionHasBeenSet() const
{
    return m_translationDirectionHasBeenSet;
}

string DeletePrivateNatGatewayTranslationAclRuleRequest::GetTranslationType() const
{
    return m_translationType;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetTranslationType(const string& _translationType)
{
    m_translationType = _translationType;
    m_translationTypeHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::TranslationTypeHasBeenSet() const
{
    return m_translationTypeHasBeenSet;
}

string DeletePrivateNatGatewayTranslationAclRuleRequest::GetTranslationIp() const
{
    return m_translationIp;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

vector<uint64_t> DeletePrivateNatGatewayTranslationAclRuleRequest::GetAclRuleIds() const
{
    return m_aclRuleIds;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetAclRuleIds(const vector<uint64_t>& _aclRuleIds)
{
    m_aclRuleIds = _aclRuleIds;
    m_aclRuleIdsHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::AclRuleIdsHasBeenSet() const
{
    return m_aclRuleIdsHasBeenSet;
}

string DeletePrivateNatGatewayTranslationAclRuleRequest::GetOriginalIp() const
{
    return m_originalIp;
}

void DeletePrivateNatGatewayTranslationAclRuleRequest::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationAclRuleRequest::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}


