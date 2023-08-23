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

#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallTemplateRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DeleteFirewallTemplateRulesRequest::DeleteFirewallTemplateRulesRequest() :
    m_templateIdHasBeenSet(false),
    m_templateRuleIdsHasBeenSet(false)
{
}

string DeleteFirewallTemplateRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateRuleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateRuleIds.begin(); itr != m_templateRuleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteFirewallTemplateRulesRequest::GetTemplateId() const
{
    return m_templateId;
}

void DeleteFirewallTemplateRulesRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DeleteFirewallTemplateRulesRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> DeleteFirewallTemplateRulesRequest::GetTemplateRuleIds() const
{
    return m_templateRuleIds;
}

void DeleteFirewallTemplateRulesRequest::SetTemplateRuleIds(const vector<string>& _templateRuleIds)
{
    m_templateRuleIds = _templateRuleIds;
    m_templateRuleIdsHasBeenSet = true;
}

bool DeleteFirewallTemplateRulesRequest::TemplateRuleIdsHasBeenSet() const
{
    return m_templateRuleIdsHasBeenSet;
}


