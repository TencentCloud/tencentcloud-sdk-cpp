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

#include <tencentcloud/tcss/v20201101/model/K8SAPIRuleTypeZhItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8SAPIRuleTypeZhItem::K8SAPIRuleTypeZhItem() :
    m_ruleTypeHasBeenSet(false),
    m_ruleTypeZhHasBeenSet(false)
{
}

CoreInternalOutcome K8SAPIRuleTypeZhItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SAPIRuleTypeZhItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeZh") && !value["RuleTypeZh"].IsNull())
    {
        if (!value["RuleTypeZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SAPIRuleTypeZhItem.RuleTypeZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeZh = string(value["RuleTypeZh"].GetString());
        m_ruleTypeZhHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8SAPIRuleTypeZhItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeZh.c_str(), allocator).Move(), allocator);
    }

}


string K8SAPIRuleTypeZhItem::GetRuleType() const
{
    return m_ruleType;
}

void K8SAPIRuleTypeZhItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool K8SAPIRuleTypeZhItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string K8SAPIRuleTypeZhItem::GetRuleTypeZh() const
{
    return m_ruleTypeZh;
}

void K8SAPIRuleTypeZhItem::SetRuleTypeZh(const string& _ruleTypeZh)
{
    m_ruleTypeZh = _ruleTypeZh;
    m_ruleTypeZhHasBeenSet = true;
}

bool K8SAPIRuleTypeZhItem::RuleTypeZhHasBeenSet() const
{
    return m_ruleTypeZhHasBeenSet;
}

