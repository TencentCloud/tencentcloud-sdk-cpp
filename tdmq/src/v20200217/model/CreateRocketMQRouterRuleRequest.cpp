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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQRouterRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQRouterRuleRequest::CreateRocketMQRouterRuleRequest() :
    m_startNowHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_syncTypeHasBeenSet(false)
{
}

string CreateRocketMQRouterRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startNow, allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_syncTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_syncType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool CreateRocketMQRouterRuleRequest::GetStartNow() const
{
    return m_startNow;
}

void CreateRocketMQRouterRuleRequest::SetStartNow(const bool& _startNow)
{
    m_startNow = _startNow;
    m_startNowHasBeenSet = true;
}

bool CreateRocketMQRouterRuleRequest::StartNowHasBeenSet() const
{
    return m_startNowHasBeenSet;
}

RocketMQRouterRuleInfo CreateRocketMQRouterRuleRequest::GetRule() const
{
    return m_rule;
}

void CreateRocketMQRouterRuleRequest::SetRule(const RocketMQRouterRuleInfo& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CreateRocketMQRouterRuleRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

string CreateRocketMQRouterRuleRequest::GetSyncType() const
{
    return m_syncType;
}

void CreateRocketMQRouterRuleRequest::SetSyncType(const string& _syncType)
{
    m_syncType = _syncType;
    m_syncTypeHasBeenSet = true;
}

bool CreateRocketMQRouterRuleRequest::SyncTypeHasBeenSet() const
{
    return m_syncTypeHasBeenSet;
}


