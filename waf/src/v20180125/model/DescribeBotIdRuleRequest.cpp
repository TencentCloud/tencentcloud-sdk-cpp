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

#include <tencentcloud/waf/v20180125/model/DescribeBotIdRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeBotIdRuleRequest::DescribeBotIdRuleRequest() :
    m_domainHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_botIdTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleActionHasBeenSet(false)
{
}

string DescribeBotIdRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_botIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_level.begin(); itr != m_level.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_botIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_botIdType.begin(); itr != m_botIdType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleAction.begin(); itr != m_ruleAction.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBotIdRuleRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBotIdRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeBotIdRuleRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeBotIdRuleRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeBotIdRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeBotIdRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribeBotIdRuleRequest::GetBotId() const
{
    return m_botId;
}

void DescribeBotIdRuleRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

vector<int64_t> DescribeBotIdRuleRequest::GetLevel() const
{
    return m_level;
}

void DescribeBotIdRuleRequest::SetLevel(const vector<int64_t>& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<string> DescribeBotIdRuleRequest::GetBotIdType() const
{
    return m_botIdType;
}

void DescribeBotIdRuleRequest::SetBotIdType(const vector<string>& _botIdType)
{
    m_botIdType = _botIdType;
    m_botIdTypeHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::BotIdTypeHasBeenSet() const
{
    return m_botIdTypeHasBeenSet;
}

int64_t DescribeBotIdRuleRequest::GetStatus() const
{
    return m_status;
}

void DescribeBotIdRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeBotIdRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void DescribeBotIdRuleRequest::SetRuleAction(const vector<string>& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool DescribeBotIdRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}


