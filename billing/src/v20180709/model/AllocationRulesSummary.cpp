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

#include <tencentcloud/billing/v20180709/model/AllocationRulesSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AllocationRulesSummary::AllocationRulesSummary() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleDetailHasBeenSet(false),
    m_ratioDetailHasBeenSet(false)
{
}

CoreInternalOutcome AllocationRulesSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRulesSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRulesSummary.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RuleDetail") && !value["RuleDetail"].IsNull())
    {
        if (!value["RuleDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AllocationRulesSummary.RuleDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleDetail.Deserialize(value["RuleDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleDetailHasBeenSet = true;
    }

    if (value.HasMember("RatioDetail") && !value["RatioDetail"].IsNull())
    {
        if (!value["RatioDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AllocationRulesSummary.RatioDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["RatioDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AllocationRationExpression item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ratioDetail.push_back(item);
        }
        m_ratioDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AllocationRulesSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ratioDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RatioDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ratioDetail.begin(); itr != m_ratioDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AllocationRulesSummary::GetName() const
{
    return m_name;
}

void AllocationRulesSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AllocationRulesSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t AllocationRulesSummary::GetType() const
{
    return m_type;
}

void AllocationRulesSummary::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AllocationRulesSummary::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AllocationRuleExpression AllocationRulesSummary::GetRuleDetail() const
{
    return m_ruleDetail;
}

void AllocationRulesSummary::SetRuleDetail(const AllocationRuleExpression& _ruleDetail)
{
    m_ruleDetail = _ruleDetail;
    m_ruleDetailHasBeenSet = true;
}

bool AllocationRulesSummary::RuleDetailHasBeenSet() const
{
    return m_ruleDetailHasBeenSet;
}

vector<AllocationRationExpression> AllocationRulesSummary::GetRatioDetail() const
{
    return m_ratioDetail;
}

void AllocationRulesSummary::SetRatioDetail(const vector<AllocationRationExpression>& _ratioDetail)
{
    m_ratioDetail = _ratioDetail;
    m_ratioDetailHasBeenSet = true;
}

bool AllocationRulesSummary::RatioDetailHasBeenSet() const
{
    return m_ratioDetailHasBeenSet;
}

