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

#include <tencentcloud/billing/v20180709/model/ModifyGatherRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

ModifyGatherRuleRequest::ModifyGatherRuleRequest() :
    m_idHasBeenSet(false),
    m_ruleDetailHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string ModifyGatherRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_ruleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleDetail.ToJsonObject(d[key.c_str()], allocator);
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


uint64_t ModifyGatherRuleRequest::GetId() const
{
    return m_id;
}

void ModifyGatherRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyGatherRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

AllocationRuleExpression ModifyGatherRuleRequest::GetRuleDetail() const
{
    return m_ruleDetail;
}

void ModifyGatherRuleRequest::SetRuleDetail(const AllocationRuleExpression& _ruleDetail)
{
    m_ruleDetail = _ruleDetail;
    m_ruleDetailHasBeenSet = true;
}

bool ModifyGatherRuleRequest::RuleDetailHasBeenSet() const
{
    return m_ruleDetailHasBeenSet;
}

string ModifyGatherRuleRequest::GetMonth() const
{
    return m_month;
}

void ModifyGatherRuleRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool ModifyGatherRuleRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


