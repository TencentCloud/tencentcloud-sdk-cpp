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

#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesRspRuleListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeCustomRulesRspRuleListItem::DescribeCustomRulesRspRuleListItem() :
    m_actionTypeHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_strategiesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomRulesRspRuleListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Bypass") && !value["Bypass"].IsNull())
    {
        if (!value["Bypass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Bypass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bypass = string(value["Bypass"].GetString());
        m_bypassHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Redirect") && !value["Redirect"].IsNull())
    {
        if (!value["Redirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Redirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirect = string(value["Redirect"].GetString());
        m_redirectHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.SortId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = string(value["SortId"].GetString());
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Strategies` is not array type"));

        const rapidjson::Value &tmpValue = value["Strategies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Strategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strategies.push_back(item);
        }
        m_strategiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomRulesRspRuleListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeCustomRulesRspRuleListItem::GetActionType() const
{
    return m_actionType;
}

void DescribeCustomRulesRspRuleListItem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetBypass() const
{
    return m_bypass;
}

void DescribeCustomRulesRspRuleListItem::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetCreateTime() const
{
    return m_createTime;
}

void DescribeCustomRulesRspRuleListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeCustomRulesRspRuleListItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetName() const
{
    return m_name;
}

void DescribeCustomRulesRspRuleListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetRedirect() const
{
    return m_redirect;
}

void DescribeCustomRulesRspRuleListItem::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetRuleId() const
{
    return m_ruleId;
}

void DescribeCustomRulesRspRuleListItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetSortId() const
{
    return m_sortId;
}

void DescribeCustomRulesRspRuleListItem::SetSortId(const string& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetStatus() const
{
    return m_status;
}

void DescribeCustomRulesRspRuleListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Strategy> DescribeCustomRulesRspRuleListItem::GetStrategies() const
{
    return m_strategies;
}

void DescribeCustomRulesRspRuleListItem::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

