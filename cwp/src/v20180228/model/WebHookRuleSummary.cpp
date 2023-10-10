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

#include <tencentcloud/cwp/v20180228/model/WebHookRuleSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookRuleSummary::WebHookRuleSummary() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_hookAddrHasBeenSet(false),
    m_ruleRemarkHasBeenSet(false),
    m_ruleItemsHasBeenSet(false),
    m_hostLabelsHasBeenSet(false),
    m_isDisabledHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hostCountHasBeenSet(false)
{
}

CoreInternalOutcome WebHookRuleSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("HookAddr") && !value["HookAddr"].IsNull())
    {
        if (!value["HookAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.HookAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hookAddr = string(value["HookAddr"].GetString());
        m_hookAddrHasBeenSet = true;
    }

    if (value.HasMember("RuleRemark") && !value["RuleRemark"].IsNull())
    {
        if (!value["RuleRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.RuleRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleRemark = string(value["RuleRemark"].GetString());
        m_ruleRemarkHasBeenSet = true;
    }

    if (value.HasMember("RuleItems") && !value["RuleItems"].IsNull())
    {
        if (!value["RuleItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.RuleItems` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookEventKv item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleItems.push_back(item);
        }
        m_ruleItemsHasBeenSet = true;
    }

    if (value.HasMember("HostLabels") && !value["HostLabels"].IsNull())
    {
        if (!value["HostLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.HostLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["HostLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebHookHostLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostLabels.push_back(item);
        }
        m_hostLabelsHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.IsDisabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetInt64();
        m_isDisabledHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleSummary.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookRuleSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_hookAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HookAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hookAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleItems.begin(); itr != m_ruleItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hostLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostLabels.begin(); itr != m_hostLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

}


int64_t WebHookRuleSummary::GetRuleId() const
{
    return m_ruleId;
}

void WebHookRuleSummary::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool WebHookRuleSummary::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string WebHookRuleSummary::GetRuleName() const
{
    return m_ruleName;
}

void WebHookRuleSummary::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool WebHookRuleSummary::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string WebHookRuleSummary::GetHookAddr() const
{
    return m_hookAddr;
}

void WebHookRuleSummary::SetHookAddr(const string& _hookAddr)
{
    m_hookAddr = _hookAddr;
    m_hookAddrHasBeenSet = true;
}

bool WebHookRuleSummary::HookAddrHasBeenSet() const
{
    return m_hookAddrHasBeenSet;
}

string WebHookRuleSummary::GetRuleRemark() const
{
    return m_ruleRemark;
}

void WebHookRuleSummary::SetRuleRemark(const string& _ruleRemark)
{
    m_ruleRemark = _ruleRemark;
    m_ruleRemarkHasBeenSet = true;
}

bool WebHookRuleSummary::RuleRemarkHasBeenSet() const
{
    return m_ruleRemarkHasBeenSet;
}

vector<WebHookEventKv> WebHookRuleSummary::GetRuleItems() const
{
    return m_ruleItems;
}

void WebHookRuleSummary::SetRuleItems(const vector<WebHookEventKv>& _ruleItems)
{
    m_ruleItems = _ruleItems;
    m_ruleItemsHasBeenSet = true;
}

bool WebHookRuleSummary::RuleItemsHasBeenSet() const
{
    return m_ruleItemsHasBeenSet;
}

vector<WebHookHostLabel> WebHookRuleSummary::GetHostLabels() const
{
    return m_hostLabels;
}

void WebHookRuleSummary::SetHostLabels(const vector<WebHookHostLabel>& _hostLabels)
{
    m_hostLabels = _hostLabels;
    m_hostLabelsHasBeenSet = true;
}

bool WebHookRuleSummary::HostLabelsHasBeenSet() const
{
    return m_hostLabelsHasBeenSet;
}

int64_t WebHookRuleSummary::GetIsDisabled() const
{
    return m_isDisabled;
}

void WebHookRuleSummary::SetIsDisabled(const int64_t& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool WebHookRuleSummary::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

string WebHookRuleSummary::GetCreateTime() const
{
    return m_createTime;
}

void WebHookRuleSummary::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WebHookRuleSummary::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WebHookRuleSummary::GetUpdateTime() const
{
    return m_updateTime;
}

void WebHookRuleSummary::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WebHookRuleSummary::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t WebHookRuleSummary::GetHostCount() const
{
    return m_hostCount;
}

void WebHookRuleSummary::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool WebHookRuleSummary::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

