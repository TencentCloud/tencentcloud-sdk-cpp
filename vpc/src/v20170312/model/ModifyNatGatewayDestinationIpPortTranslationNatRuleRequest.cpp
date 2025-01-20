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

#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_sourceNatRuleHasBeenSet(false),
    m_destinationNatRuleHasBeenSet(false)
{
}

string ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::ToJsonString() const
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

    if (m_sourceNatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceNatRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceNatRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_destinationNatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationNatRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationNatRule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

DestinationIpPortTranslationNatRule ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::GetSourceNatRule() const
{
    return m_sourceNatRule;
}

void ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::SetSourceNatRule(const DestinationIpPortTranslationNatRule& _sourceNatRule)
{
    m_sourceNatRule = _sourceNatRule;
    m_sourceNatRuleHasBeenSet = true;
}

bool ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::SourceNatRuleHasBeenSet() const
{
    return m_sourceNatRuleHasBeenSet;
}

DestinationIpPortTranslationNatRule ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::GetDestinationNatRule() const
{
    return m_destinationNatRule;
}

void ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::SetDestinationNatRule(const DestinationIpPortTranslationNatRule& _destinationNatRule)
{
    m_destinationNatRule = _destinationNatRule;
    m_destinationNatRuleHasBeenSet = true;
}

bool ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest::DestinationNatRuleHasBeenSet() const
{
    return m_destinationNatRuleHasBeenSet;
}


