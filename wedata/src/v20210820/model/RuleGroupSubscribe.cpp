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

#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupSubscribe::RuleGroupSubscribe() :
    m_ruleGroupIdHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_subscribeTypeHasBeenSet(false),
    m_webHooksHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_alarmMessageRuleHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupSubscribe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeReceiver item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receivers.push_back(item);
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("SubscribeType") && !value["SubscribeType"].IsNull())
    {
        if (!value["SubscribeType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.SubscribeType` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subscribeType.push_back((*itr).GetUint64());
        }
        m_subscribeTypeHasBeenSet = true;
    }

    if (value.HasMember("WebHooks") && !value["WebHooks"].IsNull())
    {
        if (!value["WebHooks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.WebHooks` is not array type"));

        const rapidjson::Value &tmpValue = value["WebHooks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeWebHook item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_webHooks.push_back(item);
        }
        m_webHooksHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmMessageRule") && !value["AlarmMessageRule"].IsNull())
    {
        if (!value["AlarmMessageRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.AlarmMessageRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageRule = string(value["AlarmMessageRule"].GetString());
        m_alarmMessageRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupSubscribe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subscribeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeType.begin(); itr != m_subscribeType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_webHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_webHooks.begin(); itr != m_webHooks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmMessageRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMessageRule.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleGroupSubscribe::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroupSubscribe::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroupSubscribe::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

vector<SubscribeReceiver> RuleGroupSubscribe::GetReceivers() const
{
    return m_receivers;
}

void RuleGroupSubscribe::SetReceivers(const vector<SubscribeReceiver>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool RuleGroupSubscribe::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<uint64_t> RuleGroupSubscribe::GetSubscribeType() const
{
    return m_subscribeType;
}

void RuleGroupSubscribe::SetSubscribeType(const vector<uint64_t>& _subscribeType)
{
    m_subscribeType = _subscribeType;
    m_subscribeTypeHasBeenSet = true;
}

bool RuleGroupSubscribe::SubscribeTypeHasBeenSet() const
{
    return m_subscribeTypeHasBeenSet;
}

vector<SubscribeWebHook> RuleGroupSubscribe::GetWebHooks() const
{
    return m_webHooks;
}

void RuleGroupSubscribe::SetWebHooks(const vector<SubscribeWebHook>& _webHooks)
{
    m_webHooks = _webHooks;
    m_webHooksHasBeenSet = true;
}

bool RuleGroupSubscribe::WebHooksHasBeenSet() const
{
    return m_webHooksHasBeenSet;
}

uint64_t RuleGroupSubscribe::GetRuleId() const
{
    return m_ruleId;
}

void RuleGroupSubscribe::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleGroupSubscribe::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleGroupSubscribe::GetRuleName() const
{
    return m_ruleName;
}

void RuleGroupSubscribe::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleGroupSubscribe::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string RuleGroupSubscribe::GetAlarmMessageRule() const
{
    return m_alarmMessageRule;
}

void RuleGroupSubscribe::SetAlarmMessageRule(const string& _alarmMessageRule)
{
    m_alarmMessageRule = _alarmMessageRule;
    m_alarmMessageRuleHasBeenSet = true;
}

bool RuleGroupSubscribe::AlarmMessageRuleHasBeenSet() const
{
    return m_alarmMessageRuleHasBeenSet;
}

