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

#include <tencentcloud/vpc/v20170312/model/DeletePrivateNatGatewayTranslationNatRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeletePrivateNatGatewayTranslationNatRuleRequest::DeletePrivateNatGatewayTranslationNatRuleRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_translationNatRulesHasBeenSet(false),
    m_crossDomainHasBeenSet(false)
{
}

string DeletePrivateNatGatewayTranslationNatRuleRequest::ToJsonString() const
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

    if (m_translationNatRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationNatRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_translationNatRules.begin(); itr != m_translationNatRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_crossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossDomain, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePrivateNatGatewayTranslationNatRuleRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DeletePrivateNatGatewayTranslationNatRuleRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationNatRuleRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

vector<TranslationNatRule> DeletePrivateNatGatewayTranslationNatRuleRequest::GetTranslationNatRules() const
{
    return m_translationNatRules;
}

void DeletePrivateNatGatewayTranslationNatRuleRequest::SetTranslationNatRules(const vector<TranslationNatRule>& _translationNatRules)
{
    m_translationNatRules = _translationNatRules;
    m_translationNatRulesHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationNatRuleRequest::TranslationNatRulesHasBeenSet() const
{
    return m_translationNatRulesHasBeenSet;
}

bool DeletePrivateNatGatewayTranslationNatRuleRequest::GetCrossDomain() const
{
    return m_crossDomain;
}

void DeletePrivateNatGatewayTranslationNatRuleRequest::SetCrossDomain(const bool& _crossDomain)
{
    m_crossDomain = _crossDomain;
    m_crossDomainHasBeenSet = true;
}

bool DeletePrivateNatGatewayTranslationNatRuleRequest::CrossDomainHasBeenSet() const
{
    return m_crossDomainHasBeenSet;
}


