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

#include <tencentcloud/billing/v20180709/model/AllocationRuleExpression.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationRuleExpression::AllocationRuleExpression() :
    m_ruleKeyHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_ruleValueHasBeenSet(false),
    m_connectorsHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome AllocationRuleExpression::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleKey") && !value["RuleKey"].IsNull())
    {
        if (!value["RuleKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRuleExpression.RuleKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleKey = string(value["RuleKey"].GetString());
        m_ruleKeyHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRuleExpression.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("RuleValue") && !value["RuleValue"].IsNull())
    {
        if (!value["RuleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationRuleExpression.RuleValue` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleValue.push_back((*itr).GetString());
        }
        m_ruleValueHasBeenSet = true;
    }

    if (value.HasMember("Connectors") && !value["Connectors"].IsNull())
    {
        if (!value["Connectors"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRuleExpression.Connectors` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectors = string(value["Connectors"].GetString());
        m_connectorsHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationRuleExpression.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationRuleExpression item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationRuleExpression::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleKey.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleValue.begin(); itr != m_ruleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_connectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectors.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AllocationRuleExpression::GetRuleKey() const
{
    return m_ruleKey;
}

void AllocationRuleExpression::SetRuleKey(const string& _ruleKey)
{
    m_ruleKey = _ruleKey;
    m_ruleKeyHasBeenSet = true;
}

bool AllocationRuleExpression::RuleKeyHasBeenSet() const
{
    return m_ruleKeyHasBeenSet;
}

string AllocationRuleExpression::GetOperator() const
{
    return m_operator;
}

void AllocationRuleExpression::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AllocationRuleExpression::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<string> AllocationRuleExpression::GetRuleValue() const
{
    return m_ruleValue;
}

void AllocationRuleExpression::SetRuleValue(const vector<string>& _ruleValue)
{
    m_ruleValue = _ruleValue;
    m_ruleValueHasBeenSet = true;
}

bool AllocationRuleExpression::RuleValueHasBeenSet() const
{
    return m_ruleValueHasBeenSet;
}

string AllocationRuleExpression::GetConnectors() const
{
    return m_connectors;
}

void AllocationRuleExpression::SetConnectors(const string& _connectors)
{
    m_connectors = _connectors;
    m_connectorsHasBeenSet = true;
}

bool AllocationRuleExpression::ConnectorsHasBeenSet() const
{
    return m_connectorsHasBeenSet;
}

vector<AllocationRuleExpression> AllocationRuleExpression::GetChildren() const
{
    return m_children;
}

void AllocationRuleExpression::SetChildren(const vector<AllocationRuleExpression>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool AllocationRuleExpression::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

