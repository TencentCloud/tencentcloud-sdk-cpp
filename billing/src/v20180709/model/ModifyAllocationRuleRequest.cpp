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

#include <tencentcloud/billing/v20180709/model/ModifyAllocationRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ModifyAllocationRuleRequest::ModifyAllocationRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleDetailHasBeenSet(false),
    m_ratioDetailHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string ModifyAllocationRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleDetail.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ratioDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RatioDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ratioDetail.begin(); itr != m_ratioDetail.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAllocationRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyAllocationRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyAllocationRuleRequest::GetName() const
{
    return m_name;
}

void ModifyAllocationRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyAllocationRuleRequest::GetType() const
{
    return m_type;
}

void ModifyAllocationRuleRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

AllocationRuleExpression ModifyAllocationRuleRequest::GetRuleDetail() const
{
    return m_ruleDetail;
}

void ModifyAllocationRuleRequest::SetRuleDetail(const AllocationRuleExpression& _ruleDetail)
{
    m_ruleDetail = _ruleDetail;
    m_ruleDetailHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::RuleDetailHasBeenSet() const
{
    return m_ruleDetailHasBeenSet;
}

vector<AllocationRationExpression> ModifyAllocationRuleRequest::GetRatioDetail() const
{
    return m_ratioDetail;
}

void ModifyAllocationRuleRequest::SetRatioDetail(const vector<AllocationRationExpression>& _ratioDetail)
{
    m_ratioDetail = _ratioDetail;
    m_ratioDetailHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::RatioDetailHasBeenSet() const
{
    return m_ratioDetailHasBeenSet;
}

string ModifyAllocationRuleRequest::GetMonth() const
{
    return m_month;
}

void ModifyAllocationRuleRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool ModifyAllocationRuleRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


