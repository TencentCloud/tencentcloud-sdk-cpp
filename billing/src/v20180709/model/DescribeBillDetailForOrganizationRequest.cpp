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

#include <tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillDetailForOrganizationRequest::DescribeBillDetailForOrganizationRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_needRecordNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_businessCodeHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

string DescribeBillDetailForOrganizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_needRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRecordNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRecordNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_businessCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBillDetailForOrganizationRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBillDetailForOrganizationRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeBillDetailForOrganizationRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBillDetailForOrganizationRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeBillDetailForOrganizationRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetMonth() const
{
    return m_month;
}

void DescribeBillDetailForOrganizationRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeBillDetailForOrganizationRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBillDetailForOrganizationRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeBillDetailForOrganizationRequest::GetNeedRecordNum() const
{
    return m_needRecordNum;
}

void DescribeBillDetailForOrganizationRequest::SetNeedRecordNum(const int64_t& _needRecordNum)
{
    m_needRecordNum = _needRecordNum;
    m_needRecordNumHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::NeedRecordNumHasBeenSet() const
{
    return m_needRecordNumHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeBillDetailForOrganizationRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeBillDetailForOrganizationRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeBillDetailForOrganizationRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t DescribeBillDetailForOrganizationRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeBillDetailForOrganizationRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetBusinessCode() const
{
    return m_businessCode;
}

void DescribeBillDetailForOrganizationRequest::SetBusinessCode(const string& _businessCode)
{
    m_businessCode = _businessCode;
    m_businessCodeHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::BusinessCodeHasBeenSet() const
{
    return m_businessCodeHasBeenSet;
}

string DescribeBillDetailForOrganizationRequest::GetContext() const
{
    return m_context;
}

void DescribeBillDetailForOrganizationRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeBillDetailForOrganizationRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


