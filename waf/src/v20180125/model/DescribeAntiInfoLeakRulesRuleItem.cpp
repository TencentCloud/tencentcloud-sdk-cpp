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

#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakRulesRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeAntiInfoLeakRulesRuleItem::DescribeAntiInfoLeakRulesRuleItem() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_strategiesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAntiInfoLeakRulesRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAntiInfoLeakRulesRuleItem.Strategies` is not array type"));

        const rapidjson::Value &tmpValue = value["Strategies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeAntiInfoLeakRulesStrategyItem item;
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

void DescribeAntiInfoLeakRulesRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


string DescribeAntiInfoLeakRulesRuleItem::GetRuleId() const
{
    return m_ruleId;
}

void DescribeAntiInfoLeakRulesRuleItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribeAntiInfoLeakRulesRuleItem::GetName() const
{
    return m_name;
}

void DescribeAntiInfoLeakRulesRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAntiInfoLeakRulesRuleItem::GetStatus() const
{
    return m_status;
}

void DescribeAntiInfoLeakRulesRuleItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAntiInfoLeakRulesRuleItem::GetActionType() const
{
    return m_actionType;
}

void DescribeAntiInfoLeakRulesRuleItem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeAntiInfoLeakRulesRuleItem::GetCreateTime() const
{
    return m_createTime;
}

void DescribeAntiInfoLeakRulesRuleItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<DescribeAntiInfoLeakRulesStrategyItem> DescribeAntiInfoLeakRulesRuleItem::GetStrategies() const
{
    return m_strategies;
}

void DescribeAntiInfoLeakRulesRuleItem::SetStrategies(const vector<DescribeAntiInfoLeakRulesStrategyItem>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool DescribeAntiInfoLeakRulesRuleItem::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

