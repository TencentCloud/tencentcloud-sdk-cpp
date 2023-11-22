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

#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplateModifyHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeAuditRuleTemplateModifyHistoryRequest::DescribeAuditRuleTemplateModifyHistoryRequest() :
    m_ruleTemplateIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeAuditRuleTemplateModifyHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTemplateIds.begin(); itr != m_ruleTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeAuditRuleTemplateModifyHistoryRequest::GetRuleTemplateIds() const
{
    return m_ruleTemplateIds;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetRuleTemplateIds(const vector<string>& _ruleTemplateIds)
{
    m_ruleTemplateIds = _ruleTemplateIds;
    m_ruleTemplateIdsHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::RuleTemplateIdsHasBeenSet() const
{
    return m_ruleTemplateIdsHasBeenSet;
}

string DescribeAuditRuleTemplateModifyHistoryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeAuditRuleTemplateModifyHistoryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeAuditRuleTemplateModifyHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAuditRuleTemplateModifyHistoryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAuditRuleTemplateModifyHistoryRequest::GetOrder() const
{
    return m_order;
}

void DescribeAuditRuleTemplateModifyHistoryRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAuditRuleTemplateModifyHistoryRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


