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

#include <tencentcloud/cwp/v20180228/model/WebHookRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookRuleDetail::WebHookRuleDetail() :
    m_ruleNameHasBeenSet(false),
    m_hookAddrHasBeenSet(false),
    m_ruleItemsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleRemarkHasBeenSet(false),
    m_hostLabelsHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_isDisabledHasBeenSet(false)
{
}

CoreInternalOutcome WebHookRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("HookAddr") && !value["HookAddr"].IsNull())
    {
        if (!value["HookAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.HookAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hookAddr = string(value["HookAddr"].GetString());
        m_hookAddrHasBeenSet = true;
    }

    if (value.HasMember("RuleItems") && !value["RuleItems"].IsNull())
    {
        if (!value["RuleItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.RuleItems` is not array type"));

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

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleRemark") && !value["RuleRemark"].IsNull())
    {
        if (!value["RuleRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.RuleRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleRemark = string(value["RuleRemark"].GetString());
        m_ruleRemarkHasBeenSet = true;
    }

    if (value.HasMember("HostLabels") && !value["HostLabels"].IsNull())
    {
        if (!value["HostLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.HostLabels` is not array type"));

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

    if (value.HasMember("HostIds") && !value["HostIds"].IsNull())
    {
        if (!value["HostIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.HostIds` is not array type"));

        const rapidjson::Value &tmpValue = value["HostIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostIds.push_back((*itr).GetString());
        }
        m_hostIdsHasBeenSet = true;
    }

    if (value.HasMember("IsDisabled") && !value["IsDisabled"].IsNull())
    {
        if (!value["IsDisabled"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookRuleDetail.IsDisabled` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDisabled = value["IsDisabled"].GetInt64();
        m_isDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleRemark.c_str(), allocator).Move(), allocator);
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

    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDisabled, allocator);
    }

}


string WebHookRuleDetail::GetRuleName() const
{
    return m_ruleName;
}

void WebHookRuleDetail::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool WebHookRuleDetail::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string WebHookRuleDetail::GetHookAddr() const
{
    return m_hookAddr;
}

void WebHookRuleDetail::SetHookAddr(const string& _hookAddr)
{
    m_hookAddr = _hookAddr;
    m_hookAddrHasBeenSet = true;
}

bool WebHookRuleDetail::HookAddrHasBeenSet() const
{
    return m_hookAddrHasBeenSet;
}

vector<WebHookEventKv> WebHookRuleDetail::GetRuleItems() const
{
    return m_ruleItems;
}

void WebHookRuleDetail::SetRuleItems(const vector<WebHookEventKv>& _ruleItems)
{
    m_ruleItems = _ruleItems;
    m_ruleItemsHasBeenSet = true;
}

bool WebHookRuleDetail::RuleItemsHasBeenSet() const
{
    return m_ruleItemsHasBeenSet;
}

int64_t WebHookRuleDetail::GetRuleId() const
{
    return m_ruleId;
}

void WebHookRuleDetail::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool WebHookRuleDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string WebHookRuleDetail::GetRuleRemark() const
{
    return m_ruleRemark;
}

void WebHookRuleDetail::SetRuleRemark(const string& _ruleRemark)
{
    m_ruleRemark = _ruleRemark;
    m_ruleRemarkHasBeenSet = true;
}

bool WebHookRuleDetail::RuleRemarkHasBeenSet() const
{
    return m_ruleRemarkHasBeenSet;
}

vector<WebHookHostLabel> WebHookRuleDetail::GetHostLabels() const
{
    return m_hostLabels;
}

void WebHookRuleDetail::SetHostLabels(const vector<WebHookHostLabel>& _hostLabels)
{
    m_hostLabels = _hostLabels;
    m_hostLabelsHasBeenSet = true;
}

bool WebHookRuleDetail::HostLabelsHasBeenSet() const
{
    return m_hostLabelsHasBeenSet;
}

vector<string> WebHookRuleDetail::GetHostIds() const
{
    return m_hostIds;
}

void WebHookRuleDetail::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool WebHookRuleDetail::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

int64_t WebHookRuleDetail::GetIsDisabled() const
{
    return m_isDisabled;
}

void WebHookRuleDetail::SetIsDisabled(const int64_t& _isDisabled)
{
    m_isDisabled = _isDisabled;
    m_isDisabledHasBeenSet = true;
}

bool WebHookRuleDetail::IsDisabledHasBeenSet() const
{
    return m_isDisabledHasBeenSet;
}

