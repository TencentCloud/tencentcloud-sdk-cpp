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

#include <tencentcloud/cfg/v20210820/model/TemplatePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TemplatePolicy::TemplatePolicy() :
    m_templatePolicyIdListHasBeenSet(false),
    m_templatePolicyRuleHasBeenSet(false),
    m_templatePolicyDealTypeHasBeenSet(false)
{
}

CoreInternalOutcome TemplatePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplatePolicyIdList") && !value["TemplatePolicyIdList"].IsNull())
    {
        if (!value["TemplatePolicyIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplatePolicy.TemplatePolicyIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplatePolicyIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_templatePolicyIdList.push_back((*itr).GetString());
        }
        m_templatePolicyIdListHasBeenSet = true;
    }

    if (value.HasMember("TemplatePolicyRule") && !value["TemplatePolicyRule"].IsNull())
    {
        if (!value["TemplatePolicyRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplatePolicy.TemplatePolicyRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templatePolicyRule = string(value["TemplatePolicyRule"].GetString());
        m_templatePolicyRuleHasBeenSet = true;
    }

    if (value.HasMember("TemplatePolicyDealType") && !value["TemplatePolicyDealType"].IsNull())
    {
        if (!value["TemplatePolicyDealType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplatePolicy.TemplatePolicyDealType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templatePolicyDealType = value["TemplatePolicyDealType"].GetInt64();
        m_templatePolicyDealTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplatePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templatePolicyIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePolicyIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templatePolicyIdList.begin(); itr != m_templatePolicyIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templatePolicyRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePolicyRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templatePolicyRule.c_str(), allocator).Move(), allocator);
    }

    if (m_templatePolicyDealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePolicyDealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templatePolicyDealType, allocator);
    }

}


vector<string> TemplatePolicy::GetTemplatePolicyIdList() const
{
    return m_templatePolicyIdList;
}

void TemplatePolicy::SetTemplatePolicyIdList(const vector<string>& _templatePolicyIdList)
{
    m_templatePolicyIdList = _templatePolicyIdList;
    m_templatePolicyIdListHasBeenSet = true;
}

bool TemplatePolicy::TemplatePolicyIdListHasBeenSet() const
{
    return m_templatePolicyIdListHasBeenSet;
}

string TemplatePolicy::GetTemplatePolicyRule() const
{
    return m_templatePolicyRule;
}

void TemplatePolicy::SetTemplatePolicyRule(const string& _templatePolicyRule)
{
    m_templatePolicyRule = _templatePolicyRule;
    m_templatePolicyRuleHasBeenSet = true;
}

bool TemplatePolicy::TemplatePolicyRuleHasBeenSet() const
{
    return m_templatePolicyRuleHasBeenSet;
}

int64_t TemplatePolicy::GetTemplatePolicyDealType() const
{
    return m_templatePolicyDealType;
}

void TemplatePolicy::SetTemplatePolicyDealType(const int64_t& _templatePolicyDealType)
{
    m_templatePolicyDealType = _templatePolicyDealType;
    m_templatePolicyDealTypeHasBeenSet = true;
}

bool TemplatePolicy::TemplatePolicyDealTypeHasBeenSet() const
{
    return m_templatePolicyDealTypeHasBeenSet;
}

