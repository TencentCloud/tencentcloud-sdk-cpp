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

#include <tencentcloud/billing/v20180709/model/CreateGatherRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

CreateGatherRuleRequest::CreateGatherRuleRequest() :
    m_idHasBeenSet(false),
    m_ruleListHasBeenSet(false),
    m_monthHasBeenSet(false)
{
}

string CreateGatherRuleRequest::ToJsonString() const
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

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleList.ToJsonObject(d[key.c_str()], allocator);
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


uint64_t CreateGatherRuleRequest::GetId() const
{
    return m_id;
}

void CreateGatherRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateGatherRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

GatherRuleSummary CreateGatherRuleRequest::GetRuleList() const
{
    return m_ruleList;
}

void CreateGatherRuleRequest::SetRuleList(const GatherRuleSummary& _ruleList)
{
    m_ruleList = _ruleList;
    m_ruleListHasBeenSet = true;
}

bool CreateGatherRuleRequest::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}

string CreateGatherRuleRequest::GetMonth() const
{
    return m_month;
}

void CreateGatherRuleRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool CreateGatherRuleRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}


