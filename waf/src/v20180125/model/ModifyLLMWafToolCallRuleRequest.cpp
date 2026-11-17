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

#include <tencentcloud/waf/v20180125/model/ModifyLLMWafToolCallRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyLLMWafToolCallRuleRequest::ModifyLLMWafToolCallRuleRequest() :
    m_serviceIdHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string ModifyLLMWafToolCallRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLLMWafToolCallRuleRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyLLMWafToolCallRuleRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyLLMWafToolCallRuleRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

vector<string> ModifyLLMWafToolCallRuleRequest::GetRuleIds() const
{
    return m_ruleIds;
}

void ModifyLLMWafToolCallRuleRequest::SetRuleIds(const vector<string>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool ModifyLLMWafToolCallRuleRequest::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

string ModifyLLMWafToolCallRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void ModifyLLMWafToolCallRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ModifyLLMWafToolCallRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

int64_t ModifyLLMWafToolCallRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyLLMWafToolCallRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyLLMWafToolCallRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyLLMWafToolCallRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLLMWafToolCallRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLLMWafToolCallRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


