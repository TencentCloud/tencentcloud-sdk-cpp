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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryDataRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryDataRule::DspaDiscoveryDataRule() :
    m_ruleTypeHasBeenSet(false),
    m_ruleContentHasBeenSet(false),
    m_extendParametersHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryDataRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryDataRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryDataRule.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }

    if (value.HasMember("ExtendParameters") && !value["ExtendParameters"].IsNull())
    {
        if (!value["ExtendParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryDataRule.ExtendParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtendParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DatagovRuleExtendParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extendParameters.push_back(item);
        }
        m_extendParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryDataRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_extendParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extendParameters.begin(); itr != m_extendParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DspaDiscoveryDataRule::GetRuleType() const
{
    return m_ruleType;
}

void DspaDiscoveryDataRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DspaDiscoveryDataRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DspaDiscoveryDataRule::GetRuleContent() const
{
    return m_ruleContent;
}

void DspaDiscoveryDataRule::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool DspaDiscoveryDataRule::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

vector<DatagovRuleExtendParameter> DspaDiscoveryDataRule::GetExtendParameters() const
{
    return m_extendParameters;
}

void DspaDiscoveryDataRule::SetExtendParameters(const vector<DatagovRuleExtendParameter>& _extendParameters)
{
    m_extendParameters = _extendParameters;
    m_extendParametersHasBeenSet = true;
}

bool DspaDiscoveryDataRule::ExtendParametersHasBeenSet() const
{
    return m_extendParametersHasBeenSet;
}

